#include "rvizg.h"
#include <QSlider>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDebug>
#include <QVariant>
#include <QPushButton>
#include <QStatusBar>



#include "rviz/visualization_manager.h"
#include "rviz/render_panel.h"
#include "rviz/display.h"

#include "rviz/default_plugin/grid_display.h"
#include <rviz/default_plugin/robot_model_display.h>

#include <rviz/frame_manager.h>


MyViz::MyViz( QWidget* parent ):
  QWidget( parent )
{
  QVBoxLayout* main_layout = new QVBoxLayout;
  status_label_ = new QLabel("");
  status_label_->setMinimumHeight(4);
  status_label_->setMinimumWidth(4);
  status_label_->setMaximumHeight(18);
  status_label_->setMaximumWidth(600);
  status_label_->setContentsMargins(0,0,0,0);
  status_label_->setAlignment(Qt::AlignRight);

  // Construct render panel.
  render_panel_ = new rviz::RenderPanel();

//  render_panel_->setMaximumHeight(parent->isFullScreen());

  main_layout->addWidget( render_panel_ );
  main_layout->addWidget(status_label_);
  connect( this, SIGNAL( statusUpdate( const QString& )), status_label_, SLOT( setText( const QString& )));

  // Set the top-level layout for this MyViz widget.
  setLayout( main_layout );

  manager_ = new rviz::VisualizationManager( render_panel_ );
  rviz::YamlConfigReader reader;
  rviz::Config config;
  std::string filename = ros::package::getPath("rvizglabre")+"/config/homer_display.rviz" ;
  reader.readFile( config, QString::fromStdString( filename ));
      if( !reader.error() )
      {
          manager_->load( config.mapGetChild( "Visualization Manager" ));
      }

  render_panel_->initialize( manager_->getSceneManager(), manager_ );
  manager_->setFixedFrame (QString::fromStdString("base_link"));
  manager_->initialize();
  manager_->startUpdate();

  // Create an interaction tool..
  tm=new rviz::ToolManager(manager_);
  tm = manager_->getToolManager();
  pointTool_    = tm->addTool("rviz/PublishPoint");
  measureTool_  = tm->addTool("rviz/Measure");
  selectTool_   = tm->addTool("rviz/Select");
  interactTool_ = tm->addTool("rviz/Interact");
  moveCamera_   = tm->addTool("rviz/MoveCamera");
  focusCamera_  = tm->addTool("rviz/FocusCamera");
//  tm->addTool( "rviz/Interact");
//  default_tool = tm->getTool(0);
  tm->setDefaultTool(interactTool_);
//  tm->setCurrentTool(default_tool);
  QStringList tools = tm->getToolClasses();
  ROS_INFO("The current tools are");
  for (int i = 0; i < tools.size(); i++)
  {
      ROS_INFO("Tool: %s", tools.at(i).toStdString().c_str());
  }


// Set MoveIt! Robot
//      robot_state_display_->subProp("Robot Description")->setValue(QString::fromStdString( "robot_description" ));
//      robot_display_ = new moveit_rviz_plugin::RobotStateDisplay();
//      robot_display_->setName("RobotModel");
//      manager_->addDisplay(robot_display_, true);
// Set MoveIt! Robot

  connect( manager_, SIGNAL( statusUpdate( const QString& )), this, SIGNAL( statusUpdate( const QString& )));



//  // Create a Grid display.


  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);
  grid_ = manager_->createDisplay( "rviz/Grid", "Robot Preview", true );
  grid_ = manager_->createDisplay( "rviz/Grid", "adjustable grid", true );
  grid_->subProp( "Line Style" )->setValue( "Billboards" );
  grid_->subProp( "Color" )->setValue( QColor( Qt::black ) );
  tF_   = manager_->createDisplay( "rviz/TF","TF", false); // active mode or disable at load model robot

  ROS_ASSERT( grid_ != NULL );
  this->refresh();



}

MyViz::~MyViz()
{
  delete manager_;
}

//void MyViz::subscribeTopics(const QString qnode_name)
//{
//    QString calibPointsTopic = "/" + qnode_name + "/CalibrationPoints";
//    qDebug() << "Calibration points topic:" + calibPointsTopic;
//   // QString Model3DTopic = "/" + qnode_name + "/3DModel";
//    //qDebug() << "Calibration points topic:" + Model3DTopic;


//    rviz::Display* markerarray;

//    markerarray= manager_->createDisplay( "rviz/MarkerArray", "MarkerArray", true );
//    markerarray->subProp( "Marker Topic" )->setValue(calibPointsTopic);

//    ROS_ASSERT( markerarray != NULL );

//    /*rviz::Display* marker;
//    marker= manager_->createDisplay( "rviz/Marker", "Marker", true );
//    marker->subProp( "Marker Topic" )->setValue( Model3DTopic );

//    ROS_ASSERT( marker != NULL );*/
//}

void MyViz::refresh(const std::string& fixed_frame)
{
  manager_->setFixedFrame(QString::fromStdString(fixed_frame));

	if(robot_model_ != NULL)
		delete robot_model_;

  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);

	ROS_ASSERT(robot_model_ != NULL);

  robot_model_->subProp("TF Prefix")->setValue("my_lab_uni");
  robot_model_->subProp("Show Axes")->setValue("my_lab_uni");
  robot_model_->subProp("Robot Description")->setValue("my_lab_uni/robot_description");
//  robot_display_->subProp("Robot Description")->setValue("my_lab_uni/robot_description");


}

// control de muestra de TF
void MyViz::refreshTF(bool tfrv, bool tfa , bool tfnm)
{
    tF_->subProp( "Show Names" )->setValue(tfnm);
    tF_->subProp( "Show Axes" )->setValue(tfa);
    tF_->subProp( "Show Arrows" )->setValue(tfa);
    tF_->subProp( "Marker Scale" )->setValue(1);
    tF_->subProp( "Frame Timeout" )->setValue(1);
    tF_->setEnabled(tfrv);
}
void MyViz::refreshRM(bool rbrv)
{
  robot_model_->setEnabled(rbrv);
}
//void MyViz::datameasure(QString &data)
//{
//  data=datam;
//}

void MyViz::setStatus( const QString & message )
{
  Q_EMIT statusUpdate( message );
}

void MyViz::setTool(int tool)
{
 switch (tool){
     case 0:
    {
//   tm->addTool("rviz/MoveCamera");
//   default_tool = tm->getTool(0);
   tm->setCurrentTool(moveCamera_);
     break;
    }
     case 1:
   {
//   tm->addTool( "rviz/Interact");
//   default_tool = tm->getTool(1);
   tm->setCurrentTool(interactTool_);
    break;
   }
     case 2:
    {
//     tm->addTool("rviz/Select");
//     default_tool = tm->getTool(2);
     tm->setCurrentTool(selectTool_);
     break;
    }
     case 3:
   {
//   tm->addTool("rviz/Measure");
//   default_tool = tm->getTool(6);
   tm->setCurrentTool(measureTool_);

    break;
   }
     case 4:
   {

   tm->setCurrentTool(focusCamera_);

    break;
     }
     case 5:
    {

    tm->setCurrentTool(pointTool_);

    break;
     }

    }
// QStringList tools = tm->getToolClasses();
// ROS_INFO("The current tools are");
// for (int i = 0; i < tools.size(); i++)
// {
//     ROS_INFO("Tool: %s", tools.at(i).toStdString().c_str());
// }
}
