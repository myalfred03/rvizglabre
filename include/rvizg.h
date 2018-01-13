#ifndef RVIZG_H
#define RVIZG_H
#include <QWidget>
#include <rviz/default_plugin/interactive_marker_display.h>
//#include <moveit/robot_state_rviz_plugin/robot_state_display.h>
#include <rviz/view_manager.h>
#include <rviz/default_plugin/tools/interaction_tool.h>
#include <rviz/tool_manager.h>
//#define private public
//#define protected public
//#include <moveit/robot_state_rviz_plugin/robot_state_display.h>
//#undef protected
//#undef private

namespace rviz
{
class Display;
class RenderPanel;
class VisualizationManager;
}
/**
   \class MyViz
   \brief Creates a 3D visualizer based on Rviz and subscribes to relevant topics.

 */


class MyViz: public QWidget           //LIKE RobotPreview of roboteditor.h
{
Q_OBJECT
public:
  MyViz( QWidget* parent = 0 );

  //moveit_rviz_plugin::RobotStateDisplay* robot_state_display_;
 // rviz::InteractiveMarkerDisplay * interactive_marker_display_;

  virtual ~MyViz();

//  rviz::InteractionTool * interaction_tool;
//  rviz::VisualizationManager* manager_;

  void subscribeTopics(const QString qnode_name);
  void refresh(const std::string& fixed_frame = "/map");  // Para la inicializacion de una variable siempre indicar el estado ex.: True or False/
  void refreshTF(bool tfrv = true, bool tfa = true, bool tfnm=false);
  void refreshRM(bool rbrv = true);




private Q_SLOTS:

private:
  rviz::VisualizationManager* manager_;
  rviz::RenderPanel* render_panel_;
  rviz::Display* grid_;
  rviz::Display* robot_model_;
  rviz::Display* tF_;
};

#endif // RVIZG_H
