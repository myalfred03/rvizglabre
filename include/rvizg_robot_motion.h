#ifndef RVIZ_MAIN_H
#define RVIZ_MAIN_H

//#include <QWidget>
//#include <moveit/robot_state_rviz_plugin/robot_state_display.h>
//#include <moveit/motion_planning_rviz_plugin/motion_planning_display.h>
//#include <interactive_markers/interactive_marker_server.h>

////VIGIR
//#include <moveit/robot_model_loader/robot_model_loader.h>
//#include <moveit/robot_model/robot_model.h>
//#include <moveit/robot_state/conversions.h>
//#include <moveit_msgs/RobotState.h>
//#include <moveit_msgs/DisplayRobotState.h>
////File original
//#include <moveit/motion_planning_rviz_plugin/motion_planning_frame.h>
//#include <moveit/robot_interaction/robot_interaction.h>
//#include <moveit/robot_interaction/interaction_handler.h>
//#include <moveit/planning_scene_monitor/planning_scene_monitor.h>
//#include <moveit/kinematics_metrics/kinematics_metrics.h>
//#include <moveit/dynamics_solver/dynamics_solver.h>
//#include <moveit/planning_scene_rviz_plugin/planning_scene_display.h>
//#include <moveit/rviz_plugin_render_tools/trajectory_visualization.h>
//#include <moveit/rviz_plugin_render_tools/robot_state_visualization.h>
//#include <moveit/rviz_plugin_render_tools/planning_link_updater.h>
//#include <moveit/robot_state/conversions.h>
//#include <moveit/trajectory_processing/trajectory_tools.h>

////giskard_ide
//#include <rviz/default_plugin/interactive_marker_display.h>

////rviz_cbf_plugin
//#include <moveit/macros/class_forward.h>
//namespace moveit_rviz_plugin
//{
////  class RobotStateVisualization;
////  class RobotStateDisplay;
////  class MotionPlanningDisplay;
//  MOVEIT_CLASS_FORWARD(RobotStateVisualization);
//  MOVEIT_CLASS_FORWARD(MotionPlanningDisplay);
//}
//namespace moveit {
//namespace core {
//MOVEIT_CLASS_FORWARD(RobotState);
//}}

class rvizRobot/*: public QWidget*/
{
//  Q_OBJECT
public:
  rvizRobot();
  ~rvizRobot();
//protected:
//  void onInitialize();
//  void onEnable();
//  void onDisable();
//  moveit_rviz_plugin::MotionPlanningDisplay *robot_display_;
//  robot_model_loader::RobotModelLoaderPtr robot_model_loader_;
//  robot_model::RobotModelPtr robot_model_ptr_;
////  robot_model::RobotModelConstPtr &kmodel;
//  robot_state::RobotStatePtr robot_state_ptr_;
// moveit_msgs::DisplayRobotState display_state_msg_;
//  rviz::InteractiveMarkerDisplay* int_marker_display_;
//  moveit_rviz_plugin::RobotStateVisualizationPtr robot_;
};

#endif // RVIZ_MAIN_H
