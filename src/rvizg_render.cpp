#include "rvizg_render.h"

#include "rviz/visualization_manager.h"
#include "rviz/render_panel.h"
#include "rviz/display.h"

//rviz_cbf_plugin //
#include <rviz/display_context.h>
#include <rviz/window_manager_interface.h>
#include <rviz/display_factory.h>

#include "rviz/default_plugin/grid_display.h"
#include <rviz/default_plugin/robot_model_display.h>

#include <rviz/frame_manager.h>


MyViz::MyViz( QWidget* parent ):
//tF_(NULL),
//grid_(NULL),
//RenderPanel(parent)
//Display()
QWidget(parent)
{
//  QHBoxLayout* main_layout = new QHBoxLayout(parent);

      QVBoxLayout* main_layout = new QVBoxLayout();
      status_label_ = new QLabel("12");
      status_label_->setMinimumHeight(4);
      status_label_->setMinimumWidth(4);
      status_label_->setMaximumHeight(18);
      status_label_->setMaximumWidth(600);
      status_label_->setContentsMargins(0,0,0,0);
      status_label_->setAlignment(Qt::AlignRight);

  //walruswidget/Radar
//  bound_ = new QLabel(parent);
//  bound_->setPixmap(QPixmap(":/images/img/Uni.jpg"));
//  bound_->move(20,0);
//  bound_->isTopLevel();


      render_panel_ = new rviz::RenderPanel(/*bound_*/);
//      render_panel_->move(20,0);

  // Construct render panel.
  manager_ = new rviz::VisualizationManager( render_panel_ );
  render_panel_->initialize( manager_->getSceneManager(), manager_ );

//  render_panel_->installEventFilter(this);
//  render_panel_->setMaximumHeight(parent->isFullScreen());
// RenderPanel::initialize ( manager_->getSceneManager(), manager_ );
// RenderPanel::onInitialize;

  main_layout->addWidget(render_panel_);
  main_layout->addWidget(status_label_);

  connect( this, SIGNAL( statusUpdate( const QString& )), status_label_, SLOT( setText( const QString& )));

  // Set the top-level layout for this MyViz widget.
  setLayout( main_layout );


  rviz::YamlConfigReader reader;
  rviz::Config config;
  std::string filename = ros::package::getPath("rvizglabre")+"/config/q2.rviz" ;
  reader.readFile( config, QString::fromStdString( filename ));
      if( !reader.error() )
      {
          manager_->load( config.mapGetChild( "Visualization Manager" ));
      }

  manager_->setFixedFrame (QString::fromStdString("base_link"));


  // Create an interaction tool..
  tm=new rviz::ToolManager(manager_);
  tm = manager_->getToolManager();
  interactTool_ = tm->addTool("rviz/Interact");
  pointTool_    = tm->addTool("rviz/PublishPoint");
  measureTool_  = tm->addTool("rviz/Measure");
  selectTool_   = tm->addTool("rviz/Select");
  moveCamera_   = tm->addTool("rviz/MoveCamera");
  focusCamera_  = tm->addTool("rviz/FocusCamera");
//  tm->addTool( "rviz/Interact");
//  default_tool = tm->getTool(0);
  tm->setDefaultTool(interactTool_);
  tm->setCurrentTool(interactTool_);
  QStringList tools = tm->getToolClasses();
  ROS_INFO("The current tools are");
  for (int i = 0; i < tools.size(); i++)
  {
      ROS_INFO("Tool: %s", tools.at(i).toStdString().c_str());
  }
  manager_->getToolManager()->setCurrentTool(interactTool_ );
  manager_->initialize();
  manager_->startUpdate();




  //rviz_cbf
//  rviz::Display::onInitialize();





// Set MoveIt! Robot
//                            robot_display_ = new moveit_rviz_plugin::MotionPlanningDisplay();
//                            robot_display_->setName("RobotModel");
//                      //      robot_display_ = new rvizRobot();
//                      //      robot_display_->setName("Robot Visualization");
//                      //      robot_display_->initialize(context_);
//                      //      robot_display_->setEnabled(true);
//                            manager_->addDisplay(robot_display_, false);





//      robot_display_->update(wall_dt, ros_dt);

//      robot_model_loader_.reset(new robot_model_loader::RobotModelLoader("robot_description"));
//      robot_model_ptr_ = robot_model_loader_->getModel();

//      if (robot_model_ptr_.get()){
//        robot_state_ptr_.reset(new robot_state::RobotState(robot_model_ptr_));
//      }
      //usado para refresh interactive

//   Vigir
//         int_marker_display_ = manager_->getDisplayFactory()->make("rviz/InteractiveMarkers");
//         int_marker_display_->initialize(manager_);
//      robot_interaction_.reset(new robot_interaction::RobotInteraction(robot_model_ptr_, "rviz_moveit_motion_planning_display"));
//      robot_interaction_.reset(new robot_interaction::RobotInteraction());



//          int_marker_display_ = manager_->createDisplay( "rviz/InteractiveMarkers", "Interactive markers", true );
      int_marker_display_ = new rviz::InteractiveMarkerDisplay();
//      int_marker_display_->context_->getDisplayFactory();
      int_marker_display_->setName( "Interactive Markers" );
      manager_->addDisplay(int_marker_display_, true);
      int_marker_display_->setFixedFrame("base_link");
//          int_marker_display_->initialize(manager_);
          //        int_marker_display_->update(wall_dt, ros_dt);

                    ROS_ASSERT( int_marker_display_ != NULL );
                    int_marker_display_->subProp("Update Topic")->setValue(QString::fromStdString("/rviz_moveit_motion_planning_display/robot_interaction_interactive_marker_topic/update"));
                    int_marker_display_->subProp( "Show Axes" )->setValue( true );
                    int_marker_display_->subProp( "Show Visual Aids" )->setValue( true );
          //        int_marker_display_->initialize(context_);




          rviz::Tool* current_tool = manager_->getToolManager()->getCurrentTool();
            if (current_tool->getClassId().toStdString() == "rviz/Interact") {
                  int_marker_display_->setEnabled(true);
                }

            //          robot_display_ = manager_->createDisplay( "moveit_rviz_plugin/MotionPlanning", "MoveIt", true );


//----------------------robot Model---------------------//

//            robot_display_->reset();

//            robot_display_ = manager_->createDisplay( "moveit_rviz_plugin/RobotState", "Robot Lab", true );




//            ROS_ASSERT( robot_display_ != NULL );
//            robot_display_->subProp( "Robot Description" )->setValue( "my_lab_uni/robot_description" );
//            robot_display_->subProp("Collision Enabled")->setValue (true);
//            //                //          robot_display_->subProp("Robot Description")->setValue("robot_description");
//            //                          robot_display_->subProp( "Planning Scene Topic" )->setValue( "/move_group/monitored_planning_scene" );
//            robot_display_->subProp( "Robot State Topic" )->setValue( "/my_lab_uni/robot_state" );
//----------------------robot Model---------------------//

            //                          robot_display_->subProp( "Robot Root Link" )->setValue( "base" );
              //                          robot_display_->subProp( "Robot Alpha" )->setValue( 0.5f );
              //                          robot_display_->subProp ("Scene Robot")->subProp("Show Robot Visual")->setValue(true);
              //                          robot_display_->subProp ("Planning Request")->subProp("Planning Group")->setValue("panda_arm_hand");
              //                          robot_display_->subProp ("Planning Request")->subProp("Interactive Marker Size")->setValue("0.2");
              //                          robot_display_->subProp ("Planning Request")->subProp("Query Goal State")->setValue(true);
              //                          robot_display_->subProp ("Planned Path")->subProp("Trajectory Topic")->setValue("/move_group/display_planned_path");
              //                          robot_display_->subProp ("Planned Path")->subProp("Show Robot Visual")->setValue(true);
              //                          robot_display_->subProp ("Planned Path")->subProp("Show Trail")->setValue(true);
              ////                          robot_display_->subProp ("Planned Path")->subProp("Loop Animation")->setValue(true);



//          robot_display_->subProp ("Show Workspace")->setValue(true);




//  robot_display_->setEnabled(true);



//   Vigir
// Set MoveIt! Robot


  connect( manager_, SIGNAL( statusUpdate( const QString& )), this, SIGNAL( statusUpdate( const QString& )));



//----------------------robot Model---------------------//

  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);
  robot_model_->subProp("Robot Description")->setValue(QString::fromStdString("my_lab_uni/robot_description"));

//----------------------robot Model---------------------//


//  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);
//  robot_display_->subProp("Robot Description")->setValue(QString::fromStdString("my_lab_uni/robot_description"));
  grid_ = manager_->createDisplay( "rviz/Grid", "Robot Preview", true );
  grid_->subProp( "Plane Cell Count" )->setValue( 30 );
  grid_->subProp( "Cell Size" )->setValue( .5 );
  grid_->subProp( "Line Style" )->setValue( "Billboards" );
  grid_->subProp( "Color" )->setValue( QColor( Qt::black ) );
  tF_   = manager_->createDisplay( "rviz/TF","TF", false); // active mode or disable at load model robot

  ROS_ASSERT( grid_ != NULL );
  this->refresh();
  this->refreshDH();



}

MyViz::~MyViz()
{
  delete manager_;
  delete tF_;
  delete grid_;
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
//    robot_display_->reset();

//  if(robot_model_ != NULL)
//    delete robot_model_;

//  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);

//  ROS_ASSERT(robot_model_ != NULL);

//  robot_model_->subProp("TF Prefix")->setValue("my_lab_uni");
//  robot_model_->subProp("Show Axes")->setValue("my_lab_uni");
//  robot_model_->subProp("Robot Description")->setValue("robot_description");

//  ROS_ASSERT( robot_display_ != NULL );


//  robot_display_->subProp("Robot Description")->setValue("my_lab_uni/robot_description");
//  robot_display_->subProp( "Robot State Topic" )->setValue( "/my_lab_uni/marker" );
//  robot_display_->subProp( "Robot Root Link" )->setValue( "base" );
//  robot_display_->subProp( "Robot Alpha" )->setValue( 0.9f );
//  robot_display_->subProp("TF Prefix")->setValue("my_lab_uni");
//  robot_display_->subProp("Show Axes")->setValue("my_lab_uni");

//                                        robot_display_->subProp( "Planning Scene Topic" )->setValue( "/move_group/monitored_planning_scene" );
//                                        robot_display_->subProp ("Show Robot Visual")->setValue(true);
//                                        robot_display_->subProp ("Scene Robot")->subProp("Show Robot Visual")->setValue(true);
//                                        robot_display_->subProp ("Planning Request")->subProp("Planning Group")->setValue("panda_arm_hand");
//                                        robot_display_->subProp ("Planning Request")->subProp("Interactive Marker Size")->setValue("0.2");
//                                        robot_display_->subProp ("Planning Request")->subProp("Query Goal State")->setValue(true);
//                                      //  robot_display_->subProp ("Planning Request")->subProp("Show Workspace")->setValue(true);
//                                        robot_display_->subProp ("Planned Path")->subProp("Trajectory Topic")->setValue("/move_group/display_planned_path");
//                                        robot_display_->subProp ("Planned Path")->subProp("Show Robot Visual")->setValue(true);

//  robot_display_->subProp ("Planned Path")->subProp("Show Trail")->setValue(true);
//  robot_display_->subProp ("Planned Path")->subProp("Loop Animation")->setValue(true);



// int_marker_display_ = manager_->createDisplay( "rviz/InteractiveMarkers", "Interactive markers", true );
// int_marker_display_->setFixedFrame("base_link");
// int_marker_display_->initialize(manager_);
// int_marker_display_->update(wall_dt, ros_dt);

 ROS_ASSERT( int_marker_display_ != NULL );
// int_marker_display_->subProp("Update Topic")->setValue(QString::fromStdString(robot_interaction_->getServerTopic() + "/update"));
 int_marker_display_->subProp("Update Topic")->setValue(QString::fromStdString("/rviz_moveit_motion_planning_display/robot_interaction_interactive_marker_topic/update"));

         int_marker_display_->subProp( "Show Axes" )->setValue( true );
         int_marker_display_->subProp( "Show Visual Aids" )->setValue( true );


//  try
//        {
//            robot_model_loader_.reset(new robot_model_loader::RobotModelLoader("robot_description"));
//            robot_model_ptr_ = robot_model_loader_->getModel();

//            if (robot_model_ptr_.get()){
//              robot_state_ptr_.reset(new robot_state::RobotState(robot_model_ptr_));
//              robot_state_vis_pub_ = nh_.advertise<moveit_msgs::DisplayRobotState>("/my_lab_uni/marker",1, true);
//              if(robot_model_ptr_->hasJointModelGroup("panda_arm_hand"))
//              {
//                Rjoint_names_.clear();
//                Rjoint_names_ = robot_model_ptr_->getJointModelGroup("panda_arm_hand")->getJointModelNames();// getActiveJointModelNames();
//                ROS_ERROR("NO JOINTS FOUND FOR ");

//              }else{
//                ROS_ERROR("NO JOINTS FOUND FOR GHOST RIGHT HAND USING: manipulator");
//              }
//              for(int i = 0; i < Rjoint_names_.size(); i++)
//                ROS_INFO("Base 3d widget loading right joint %d: %s",i,Rjoint_names_[i].c_str());
//            }
//              else{
//              ROS_ERROR("Right hand robot model null pointer!");
//            }
//        }
//        catch(...)
//        {
//            ROS_ERROR("Base3DView: MoveIt! failed to load right hand robot description.");
//        }
//  robot_display_->setEnabled(true);



  rviz::Tool* current_tool = manager_->getToolManager()->getCurrentTool();
    if (current_tool->getClassId().toStdString() == "rviz/Interact") {
          int_marker_display_->setEnabled(true);
        }
int_marker_display_->setEnabled(true);

//----------------------robot Model---------------------//


if(robot_model_ != NULL)
    delete robot_model_;

  robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);

  ROS_ASSERT(robot_model_ != NULL);

  robot_model_->subProp("TF Prefix")->setValue("my_lab_uni");
  robot_model_->subProp("Show Axes")->setValue("my_lab_uni");
  robot_model_->subProp("Robot Description")->setValue("my_lab_uni/robot_description");

//  robot_model_->setEnabled(true);

//----------------------robot Model---------------------//



}

void MyViz::refreshDH(const std::string &fixed_frame){
  manager_->setFixedFrame(QString::fromStdString(fixed_frame));

  if(robot_model_ != NULL)
      delete robot_model_;

    robot_model_ = manager_->createDisplay("rviz/RobotModel", "Robot Model", true);

    ROS_ASSERT(robot_model_ != NULL);

    robot_model_->subProp("TF Prefix")->setValue("my_lab_uni");
    robot_model_->subProp("Show Axes")->setValue("my_lab_uni");
}
void MyViz::refreshJoint(std::vector<double> joint){
  sensor_msgs::JointState joint_states;

//  joint_states.header.stamp = ros::Time::now();
//  joint_states.header.frame_id = std::string("/MOVEITJOINTS");

//  std::string J1 = ("joint_1");
//  std::string J2 = ("joint_2");
//  std::string J3 = ("joint_3");
//  std::string J4 = ("joint_4");
//  std::string J5 = ("joint_5");
//  std::string J6 = ("joint_6");

//  joint_states.name.push_back(J1);
//  joint_states.name.push_back(J2);
//  joint_states.name.push_back(J3);
//  joint_states.name.push_back(J4);
//  joint_states.name.push_back(J5);
//  joint_states.name.push_back(J6);

//  moveit_msgs::ObjectColor tmp;
////                    tmp.id = J1;
////                     tmp.id = J2;
////                      tmp.id = J3;
////                       tmp.id = J4;
//                      tmp.id = J5;
////                         tmp.id = J6;
//                  tmp.color.a = 0.0f;
//                  tmp.color.r = 0.0f;
//                  tmp.color.g = 0.0f;
//                  tmp.color.b = 0.0f;
//                  display_state_msg_.highlight_links.push_back(tmp);

//  joint_states.position.resize(6);
//  joint_states.effort.resize(6);
//  joint_states.velocity.resize(6);

//  for(unsigned int i = 0; i < 6; ++i)
//      {
//          joint_states.effort[i] = 23;
//          joint_states.velocity[i] = 12;
//          joint_states.position[i] = joint[i];
//      }
////moveit_core/robot_state/src/conversions.cpp
////    robot_state::jointStateToRobotState(joint_states, *robot_state_ptr_);
//  moveit::core::jointStateToRobotState(joint_states, *robot_state_ptr_);
//  robot_state::robotStateToRobotStateMsg(*robot_state_ptr_, display_state_msg_.state);
//  robot_state_vis_pub_.publish(display_state_msg_);
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
//  robot_display_->setEnabled(rbrv);

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
   tm->setCurrentTool(interactTool_);
//   int_marker_display_->setEnabled(true);

     break;
    }
     case 1:
   {
//   tm->addTool( "rviz/Interact");
//   default_tool = tm->getTool(1);
   tm->setCurrentTool(moveCamera_);
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
