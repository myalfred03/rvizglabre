#include <include/rvizg.h>
#include <QSlider>
#include <QLabel>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QDebug>
#include <QVariant>
#include <QPushButton>


#include "rviz/visualization_manager.h"
#include "rviz/render_panel.h"
#include "rviz/display.h"

#include "rviz/default_plugin/grid_display.h"
#include <rviz/default_plugin/robot_model_display.h>
#include <rviz/frame_manager.h>


MyViz::MyViz( QWidget* parent )
  : QWidget( parent )
{
  // Construct render panel.
  render_panel_ = new rviz::RenderPanel();
  render_panel_->setMinimumHeight(1000);
  render_panel_->setMinimumWidth(1000);
  // Layout
  //QPushButton* interact = new QPushButton( "Interact" );
  QVBoxLayout* main_layout = new QVBoxLayout;


  main_layout->addWidget( render_panel_ );
//  main_layout->addLayout( controls_layout );
  //main_layout->addWidget(interact);

  // Set the top-level layout for this MyViz widget.
  setLayout( main_layout );

  // Next we initialize the main RViz classes.
  //
  // The VisualizationManager is the container for Display objects,
  // holds the main Ogre scene, holds the ViewController, etc.  It is
  // very central and we will probably need one in every usage of
  // librviz.
  manager_ = new rviz::VisualizationManager( render_panel_ );
  render_panel_->initialize( manager_->getSceneManager(), manager_ );
  manager_->initialize();
  manager_->startUpdate();

 // manager_->setFixedFrame( "/my_frame3" );



//  //other tuto
//  manager_->setFixedFrame (QString::fromStdString("base_link"));
//  robot_state_display_ = new moveit_rviz_plugin::RobotStateDisplay();
//  robot_state_display_->setName("Robot State");

//  manager_->addDisplay(robot_state_display_, true);

//  // Create an interaction tool..
//  rviz::ToolManager * tm = manager_->getToolManager();
//  tm->addTool( "rviz/Interact");
//  rviz::Tool * default_tool = tm->getTool(1);
//  tm->setDefaultTool(default_tool);
//  tm->setCurrentTool(default_tool);
//  QStringList tools = tm->getToolClasses();
//  ROS_INFO("The current tools are");
//  for (int i = 0; i < tools.size(); i++)
//  {
//      ROS_INFO("Tool: %s", tools.at(i).toStdString().c_str());
//  }

//  // Add the marker display here
//  interactive_marker_display_ = new rviz::InteractiveMarkerDisplay();
//  interactive_marker_display_->setTopic(QString("/interactive_mount_points_server/update"), QString());




////  manager_->addDisplay(interactive_marker_display_, true);

//  // Set robot description
//  robot_state_display_->subProp("Robot Description")->setValue(QString::fromStdString( "robot_description" ));

//  // Zoom into robot
//  rviz::ViewController* view = manager_->getViewManager()->getCurrent();
//  view->subProp( "Distance" )->setValue( 4.0f );




//  // Create a Grid display.
  //rviz::Display* grid_;
  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);
  grid_ = manager_->createDisplay( "rviz/Grid", "Robot Preview", true );
  tF_   = manager_->createDisplay( "rviz/TF","TF", false );
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
//  manager_->createDisplay( "rviz/TF","TF", tfrv );
//    tF_->reset();//->setValue(tfrv);

//    tF_->subProp("Show Axes")->setValue(true);
//    tF_->subProp( "Show Arrows" )->setValue(true);
   // tF_->onDisable();


    manager_->setFixedFrame(QString::fromStdString(fixed_frame));

	if(robot_model_ != NULL)
		delete robot_model_;

  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);

	ROS_ASSERT(robot_model_ != NULL);

  robot_model_->subProp("TF Prefix")->setValue("robot_editor");
  robot_model_->subProp("Robot Description")->setValue("robot_editor/robot_description");

}
void MyViz::refreshTF(bool tfrv)
{
    tF_->subProp( "Show Names" )->setValue(true);
    tF_->subProp( "Show Axes" )->setValue(true);
    tF_->subProp( "Show Arrows" )->setValue(true);
    tF_->subProp( "Marker Scale" )->setValue(1);
    tF_->subProp( "Frame Timeout" )->setValue(15);

  tF_->setEnabled(tfrv);
}
void MyViz::refreshRM(bool rbrv)
{
  robot_model_->setEnabled(rbrv);
}

