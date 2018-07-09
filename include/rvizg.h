#ifndef RVIZG_H
#define RVIZG_H
#include <QObject>
#include <QWidget>
#include <QString>
#include <QLabel>
#include <rviz/viewport_mouse_event.h>

#include <rviz/default_plugin/interactive_marker_display.h>
//#include <moveit/robot_state_rviz_plugin/robot_state_display.h>
#include <rviz/view_manager.h>
#include <rviz/default_plugin/tools/measure_tool.h>
#include <rviz/tool.h>
#include <rviz/tool_manager.h>
#include <rviz/yaml_config_reader.h>
#include <rviz/yaml_config_writer.h>
//#define private public
//#define protected public
#include <moveit/robot_state_rviz_plugin/robot_state_display.h>
//#undef protected
//#undef private
namespace moveit_rviz_plugin
{
  class RobotStateDisplay;
}
namespace rviz
{
class Display;
class RenderPanel;
class VisualizationManager;
class Tool;
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

  ~MyViz();

//  rviz::InteractionTool * interaction_tool;
//  rviz::VisualizationManager* manager_;

  void subscribeTopics(const QString qnode_name);
  void refresh(const std::string& fixed_frame = "/map");  // Para la inicializacion de una variable siempre indicar el estado ex.: True or False/
  void refreshTF(bool tfrv = true, bool tfa = true, bool tfnm=true);
  void refreshRM(bool rbrv = true);
  void setTool (int tool=0);
  QLabel* status_label_;
//  void datameasure(QString &data);
//  QString datam;

  public Q_SLOTS:
  virtual void setStatus( const QString & message );

//  QMouseEvent event;

Q_SIGNALS:
  void statusUpdate( const QString& message );

private Q_SLOTS:

private:
  rviz::VisualizationManager* manager_;
  rviz::RenderPanel* render_panel_;
  rviz::Display* grid_;
  rviz::Display* robot_model_;
//  moveit_rviz_plugin::RobotStateDisplay* robot_display_;
  rviz::Display* tF_;
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

};
#endif // RVIZG_H
