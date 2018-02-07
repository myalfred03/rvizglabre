#ifndef ROSGUI_H
#define ROSGUI_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QStyledItemDelegate>
#include <QItemDelegate>
#include <QList>
#include <QProcess>
#include <QVector>

#include "include/secondwindow.h"
#include "include/thirdwindow.h"
#include "fourth.h"
#include "include/rvizg.h"
//#include "include/rvizg_node.h"
#include "include/ui_rosgui.h"
#include "include/ui_secondwindow.h"
#include "include/ui_thirdwindow.h"
#include "include/ui_fourth.h"
//robot editor
#include <QObject>
#include <string>
#include <map>
#include <boost/thread/mutex.hpp>
#include <QFileDialog>
#include <QString>
#include <kdl_parser/kdl_parser.hpp>
#include <robot_state_publisher/robot_state_publisher.h>
#include <sensor_msgs/JointState.h>

//RVIZ
#include "rviz/visualization_manager.h"
#include "rviz/render_panel.h"
#include "rviz/display.h"

#include "rviz/default_plugin/grid_display.h"
#include <rviz/default_plugin/robot_model_display.h>
#include <rviz/frame_manager.h>

//Show value of urdf
#include "modelparam.h"


////robot editor


class QMainWindow;
class MyViz;
namespace robot_state_publisher { class RobotStatePublisher; }
namespace boost { class thread; }
////robot editor

namespace Ui { class ROSGUI; }
class ROSGUI : public QMainWindow
{
    Q_OBJECT

public:
      ROSGUI();
      ~ROSGUI(void);
      void show();
      //Show value of urdf
      bool init();
      std::vector<double> getJointLowerLimits();
      std::vector<double> getJointUpperLimits();
      std::vector<double> joints_lower_limit_;
      std::vector<double> joints_upper_limit_;
      std::vector< double > joint_upper;
      std::vector< double > joint_lower;
      void updatetoURDF();
      void resetvalue();
      KDL::JntArray j =KDL::JntArray(6);
      KDL::JntArray pos_joint;
      KDL::Frame pos_mat;
      KDL::Vector tcpXYZ  = KDL::Vector(0.0,0.0,0.0);
      KDL::Rotation tcpRPY= KDL::Rotation(0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0);
      double roll = 0.0 , pitch = 0.0 , yaw = 0.0;

      QString stringX, stringY, stringZ;
      QString stringYaw, stringPitch, stringRoll;

      double positions;
      unsigned int nj;








//      void openCD(); //make a new function to call the window
//      void openCI();
//      void openDH();
    //  ros::NodeHandle n;

public slots:
      void openCD(); //make a new function to call the window
      void openCI();
      void openDH();


//robot editor
//public Q_SLOTS:
//	void openTrigger();
//	void saveTrigger();
//	void saveAsTrigger();
//	void exitTrigger();
//robot editor

public Q_SLOTS:
      void on_pushButton_SW_clicked();

      void on_pushButton_3_clicked();

      void on_pushButton_2_clicked();

      void on_pushButton_4_clicked();

      void on_actionOpen_triggered();

      void on_actionSave_triggered();

      void on_actionSave_as_triggered();

      void on_actionExit_triggered();

     // void on_actionTF_RVIZ_triggered(bool checked);

      void updateSlider();

      void updateSpinboxes();

      void updateDialer();

      void updateSpinboxesD();

      void on_2DOF();
      void on_3DOF();
      void on_4DOF();
      void on_5DOF();
      void on_6DOF();
      void executeIK();
      void executeFK();
     // void on_checkBox6DOFI_toggled(bool checked);


      // Cargando Robots
      void offWidgets();
      void on2DOFI_URDF();
      void on3DOFI_URDF();
      void on4DOFI_URDF();
      void on5DOFI_URDF();
      void on6DOFI_URDF();
      void on4DOFs_URDF();
      void on2DOFs_URDF();
      void on3DOFs_URDF();

      //Herramientas de RVIZ
     // void toggleTFRVIZ(int checked);
//      void on_checkBox_2_toggled(int checked);
//      void on_checkBox_3_toggled(int checked);
    //  void on_comboBox_activated(int index);
      void on_comboBox_currentIndexChanged(int index);


private slots:

private:

    //robot editor
   void updateURDF(const std::string& urdf);
   void publishJointStates();

//   bool readJntLimitsFromROSParamURDF(/*std::vector<std::string>& limited_jnt_names,
//           std::vector<double>& lower_limits,
//           std::vector<double>& upper_limits,
//           KDL::Tree& kdl_tree,
//           KDL::Chain& kdl_chain*/

//                                      );

   //QMainWindow main_window_;

private:


   //RobotPreview *robot_preview_;
   QString file_name_;          //llamar el STRING DEL URDF
   boost::mutex state_pub_mutex_;
   KDL::Tree* robot_tree_ = NULL;
   robot_state_publisher::RobotStatePublisher* robot_state_pub_ = NULL;
   sensor_msgs::JointState* msg;
   boost::thread* publisher_thread_;
   std::map<std::string, double> joint_positions_;
   ros::NodeHandle nh_;
   MyViz *mRviz;

    //robot editor
   QMainWindow main_window_;
   Ui::ROSGUI main_window_ui_;
   QMainWindow *secwindow;
   QMainWindow *thwindow;
   QMainWindow *fourwindow;
  // QNode *qnode;
   modelparam* jointsv;


   QProcess *proc;




};

#endif // ROSGUI_H
