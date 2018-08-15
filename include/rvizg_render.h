#ifndef RVIZG_H
#define RVIZG_H
#include <QObject>
#include <QWidget>
#include <QString>
#include <QLabel>
#include <QVBoxLayout>
//#include "rvizg_robot_motion.h"


#include <rviz/viewport_mouse_event.h>
//#include <moveit/robot_state_rviz_plugin/robot_state_display.h>
#include <rviz/view_manager.h>
#include <rviz/default_plugin/tools/measure_tool.h>
#include <rviz/tool.h>
#include <rviz/tool_manager.h>
#include <rviz/yaml_config_reader.h>
#include <rviz/yaml_config_writer.h>
//#define private public
//#define protected public

#include <sensor_msgs/JointState.h>

//VIGIR
#include <rviz/render_panel.h>
#include <rviz/robot/robot.h>
#include <rviz/robot/robot_link.h>

//giskard_ide
#include <rviz/default_plugin/interactive_marker_display.h>

#include <moveit/robot_state_rviz_plugin/robot_state_display.h>
#include <moveit/motion_planning_rviz_plugin/motion_planning_display.h>
#include <interactive_markers/interactive_marker_server.h>

//VIGIR
#include <moveit/robot_model_loader/robot_model_loader.h>
#include <moveit/robot_model/robot_model.h>
#include <moveit/robot_state/conversions.h>
#include <moveit_msgs/RobotState.h>
#include <moveit_msgs/DisplayRobotState.h>
//File original
#include <moveit/motion_planning_rviz_plugin/motion_planning_frame.h>
#include <moveit/robot_interaction/robot_interaction.h>
#include <moveit/robot_interaction/interaction_handler.h>
#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
#include <moveit/kinematics_metrics/kinematics_metrics.h>
#include <moveit/dynamics_solver/dynamics_solver.h>
#include <moveit/planning_scene_rviz_plugin/planning_scene_display.h>
#include <moveit/rviz_plugin_render_tools/trajectory_visualization.h>
#include <moveit/rviz_plugin_render_tools/robot_state_visualization.h>
#include <moveit/rviz_plugin_render_tools/planning_link_updater.h>
#include <moveit/robot_state/conversions.h>
#include <moveit/trajectory_processing/trajectory_tools.h>

//giskard_ide
#include <rviz/default_plugin/interactive_marker_display.h>

//rviz_cbf_plugin
#include <moveit/macros/class_forward.h>
namespace moveit_rviz_plugin
{
//  class RobotStateVisualization;
//  class RobotStateDisplay;
//  class MotionPlanningDisplay;
  MOVEIT_CLASS_FORWARD(RobotStateVisualization);
  MOVEIT_CLASS_FORWARD(MotionPlanningDisplay);
}
namespace moveit {
namespace core {
MOVEIT_CLASS_FORWARD(RobotState);
}}


namespace rviz
{
class Robot;
class Display;
class RenderPanel;
class VisualizationManager;
class Tool;
class DisplayContext;
class InteractiveMarkerDisplay;

}
/**
   \class MyViz
   \brief Creates a 3D visualizer based on Rviz and subscribes to relevant topics.

 */



class MyViz: public QWidget /*rviz::RenderPanel*/ /*, public rviz::Display  */       //LIKE RobotPreview of roboteditor.h
{
Q_OBJECT
public:
 MyViz( QWidget* parent = 0 );

  //moveit_rviz_plugin::RobotStateDisplay* robot_state_display_;
 // rviz::InteractiveMarkerDisplay * interactive_marker_display_;

   ~MyViz();

//  rviz::InteractionTool * interaction_tool;
//  rviz::VisualizationManager* manager_;

  void subscribeTopics(const QString qnode_name);
  void refresh(const std::string& fixed_frame = "/map");  // Para la inicializacion de una variable siempre indicar el estado ex.: True or False/
  void refreshTF(bool tfrv = true, bool tfa = true, bool tfnm=true);
  void refreshRM(bool rbrv = true);
  void refreshJoint(std::vector< double > joint);
  QLabel* status_label_;

//  void datameasure(QString &data);
//  QString datam;
float wall_dt, ros_dt;

public Q_SLOTS:
virtual void setStatus( const QString & message );
void setTool (int tool=0);

//  QMouseEvent event;

Q_SIGNALS:
void statusUpdate( const QString& message );

private Q_SLOTS:

protected:
rviz::VisualizationManager* manager_;
//  moveit_rviz_plugin::RobotStateDisplay* robot_display_;

 std::vector<std::string>   Rjoint_names_;

// robot_interaction::RobotInteractionPtr robot_interaction_;


  ros::Publisher robot_state_vis_pub_;
  ros::NodeHandle nh_;
  //CatVisualizer
//  boost::shared_ptr<tf::TransformListener> transformer_;


//  rviz::Display* robot_display_;
//  rviz::InteractiveMarkerDisplay* int_marker_display_;
//  rviz::Display* int_marker_display_;
  QLabel* bound_;

  rviz::Display* tF_;
  rviz::Display* grid_;
  rviz::ToolManager* tm;
  rviz::Tool* default_tool;
  rviz::Tool* measureTool_;
  rviz::Tool* moveCamera_;
  rviz::Tool* pointTool_;
  rviz::Tool* interactTool_;
  rviz::Tool* selectTool_;
  rviz::Tool* focusCamera_;
//  rviz::Tool* mapInteractTool_;
//  rviz::Tool* setGoalTool_;
//  rviz::Tool* setMapGoalTool_;
//  rviz::Tool* setInitialPoseTool_;
//  rviz::Tool* setMapInitialPoseTool_;
//  rviz::Tool *measure;

private:
  rviz::RenderPanel* render_panel_;
//  rviz::Display* grid_;
//  rviz::Display* robot_model_;
//  rvizRobot * robot_display_;
    moveit_rviz_plugin::MotionPlanningDisplay *robot_display_;
    robot_model_loader::RobotModelLoaderPtr robot_model_loader_;
    robot_model::RobotModelPtr robot_model_ptr_;
  //  robot_model::RobotModelConstPtr &kmodel;
    robot_state::RobotStatePtr robot_state_ptr_;
   moveit_msgs::DisplayRobotState display_state_msg_;
    rviz::InteractiveMarkerDisplay* int_marker_display_;
//    moveit_rviz_plugin::RobotStateVisualizationPtr robot_;

};
#endif // RVIZG_H
