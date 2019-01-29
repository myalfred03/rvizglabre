#ifndef ROSGUI_H
#define ROSGUI_H

#include <QMainWindow>
#include <QWidget>
#include <QTreeWidget>
#include <QStyledItemDelegate>
#include <QItemDelegate>
#include <QList>
#include <QProcess>
#include <QVector>

//#include "include/secondwindow.h"
//#include "include/thirdwindow.h"
//#include "fourth.h"
#include "rvizg_render.h"
#include "rviz_main.h"
//#include "include/rvizg_node.h"
#include "ui_rosgui.h"
//#include "include/ui_secondwindow.h"
//#include "include/ui_thirdwindow.h"
//#include "include/ui_fourth.h"
//robot editor
#include <QObject>
#include <string>
#include <map>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp> //espera retardo
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
#include <urdf/model.h>


////robot editor
#include <trajectory_msgs/JointTrajectory.h>
#include <trajectory_msgs/JointTrajectoryPoint.h>

//----
#include <std_msgs/Float32.h>
#include <std_msgs/Float32MultiArray.h>
#include "std_msgs/String.h"

#include <tf/tf.h>
#include <tf/transform_broadcaster.h>
#include <tf_conversions/tf_kdl.h>
#include <tf/tfMessage.h>
#include <tf2/convert.h>
#include <tf2_msgs/TFMessage.h>
#include <tf2/LinearMath/Quaternion.h>

class QMainWindow;
class MyViz;
//class rvizMain;
namespace robot_state_publisher { class RobotStatePublisher; }
namespace boost { class thread; }
////robot editor
namespace Ui { class ROSGUI; }
class ROSGUI : public  QMainWindow
{
    Q_OBJECT

public:
      ROSGUI(QWidget *parent = 0);
      ~ROSGUI();
//      void show();
      //Show value of urdf
      bool init();
      std::vector<double> getJointLowerLimits();
      std::vector<double> getJointUpperLimits();
      std::vector<double> joints_lower_limit_;
      std::vector<double> joints_upper_limit_;
      std::vector< double > joint_upper;
      std::vector< double > joint_lower;
      std::vector< double > jointV;
//      std::vector<double> angleRot  = {0.0, 0.0, 0.0 , 0.0};
//      std::vector<double> anglePos  = {0.0, 0.0, 0.0 };



      void updatetoURDF();
      void FKdata(KDL::JntArray j);
      void resetvalue();
      KDL::JntArray j =KDL::JntArray(6);
      KDL::JntArray pos_joint;
      KDL::Frame pos_mat1;
      KDL::Frame pos_mat2;
      KDL::Frame pos_mat3;
      KDL::Frame pos_mat4;
      KDL::Frame pos_mat5;
      KDL::Frame pos_mat6;
      KDL::Tree model;

      KDL::Vector tcpXYZ  = KDL::Vector(0.0,0.0,0.0);
      KDL::Rotation tcpRPY= KDL::Rotation(0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0);
      double roll = 0.0 , pitch = 0.0 , yaw = 0.0;

      QString stringX, stringY, stringZ;
      QString stringYaw, stringPitch, stringRoll;
      QString dataM;
      std::string filePath;
      std::string filemap;
      QString filePathmap;

      double positions;
      unsigned int nj;
       int nj_2;

      void updateURDF(const std::string& urdf);
      void updatetreeforDH(KDL::Tree modelU);
      void timeOut();
      void publishJointStates(/*const trajectory_msgs::JointTrajectory &trajectory*/);

      ros::NodeHandle nh_;
      ros::Publisher joint_pub;
      ros::Publisher map_reuleaux;
      ros::Publisher joint_value_pub;
      ros::Subscriber joint_sub;
      ros::Publisher robot_state_vis_pub_;
      void trajectoryCallback(const trajectory_msgs::JointTrajectory & msg); // MoveIt
      moveit_msgs::DisplayRobotState display_state_msg_;
      std_msgs::Float32MultiArray send_val;

      std_msgs::Float32MultiArray valueDH;

      std_msgs::String map;
      geometry_msgs::TransformStamped odom_trans;
      tf::TransformBroadcaster broadcaster;



// void openDialoginfo();
 //      void openCI();
//      void openDH();
    //  ros::NodeHandle n;

//public slots:
//      void openCD(); //make a new function to call the window
//      void openCI();
//      void openDH();


//robot editor
//public Q_SLOTS:
//	void openTrigger();
//	void saveTrigger();
//	void saveAsTrigger();
//	void exitTrigger();
//robot editor

public Q_SLOTS:
//      void on_pushButton_SW_clicked();

      void on_pushButton_clicked();

//      void on_pushButton_2_clicked();

//      void on_pushButton_4_clicked();

      void on_actionOpen_triggered();

      void on_actionSave_triggered();

      void on_actionSave_as_triggered();

//      void on_actionExit_triggered();

     // void on_actionTF_RVIZ_triggered(bool checked);

      void updateSlider();

      void updateSpinboxes();

      void updateDialer();
      void updateSpinboxesD();
      void updateMatEuler();
      void updateMatQuat();

      //      void updateDH(double x);

      void on_spinBox_valueChanged(int arg1);
      //DH
      void on_pushButton_3_toggled();


      void on_1DOF();
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

      void on2DOFs_URDF();
      void on3DOFs_URDF();
      void on4DOFs_URDF();
      void on5DOFs_URDF();
      void on6DOFs_URDF();

      void on_enableW();


      void onKUKA1_URDF();
      void onKUKA2_URDF();
      void onKUKA3_URDF();
      void onKUKA4_URDF();
      void onABB1_URDF();
      void onABB2_URDF();
      void onABB3_URDF();
      void onABB4_URDF();
      void onFANUC1_URDF();
      void onFANUC2_URDF();
      void onFANUC3_URDF();
      void onMOTOM1_URDF();
      void onMOTOM2_URDF();
      void onKATANA_URDF();
      void onUR5_URDF();

      void onPrism_URDF();
      void onRevol_URDF();
      void onPris_Rev_URDF();
      void on_Puma_URDF();
      void on_Scara_URDF();
      void onCartesian_URDF();
      void onCylindrical_URDF();
      void on3DOF_URDF();

      void onMat1();


trajectory_msgs::JointTrajectory createArmPositionCommand(std::vector<double>& newPositions);

      //Herramientas de RVIZ
     // void toggleTFRVIZ(int checked);
//      void on_checkBox_2_toggled(int checked);
//      void on_checkBox_3_toggled(int checked);
    //  void on_comboBox_activated(int index);
      void on_comboBox_currentIndexChanged(int index);
      void on_comboBox_2_currentIndexChanged(int index);
      void on_checkBox_3_toggled(bool x);

Q_SIGNALS:
void statusTool(int message );


//private slots:

//private:

//    //robot editor

//   bool readJntLimitsFromROSParamURDF(/*std::vector<std::string>& limited_jnt_names,
//           std::vector<double>& lower_limits,
//           std::vector<double>& upper_limits,
//           KDL::Tree& kdl_tree,
//           KDL::Chain& kdl_chain*/

//                                      );

   //QMainWindow main_window_;
//protected:





private:


   //RobotPreview *robot_preview_;
   QString file_name_;          //llamar el STRING DEL URDF
   boost::mutex state_pub_mutex_;
   boost::shared_ptr<KDL::Tree>  robot_tree_ = NULL;
   boost::shared_ptr<robot_state_publisher::RobotStatePublisher> robot_state_pub_ = NULL;
//   KDL::Tree* robot_tree_ = NULL;
//   robot_state_publisher::RobotStatePublisher* robot_state_pub_ = NULL;
//   robot_state_publisher::RobotStatePublisher* robot_state_pubDH_ = NULL;


   sensor_msgs::JointState* msg;
   boost::thread* publisher_thread_;
   std::map<std::string, double> joint_positions_;
   std::map<std::string, double> joint_positions1_;

//   ros::Time itTime_;
   ros::Duration d_;
//   std::map<std::string, double> joint_positionsDH_;


   MyViz *mRviz;/* = new MyViz;*/

    //robot editor
//   QMainWindow main_window_;
   Ui::ROSGUI *main_window_ui_;
//   QMainWindow *secwindow;
//   QMainWindow *thwindow;
//   QMainWindow *fourwindow;
  // QNode *qnode;
   modelparam* jointsv;

//   rvizMain* showModel/* = new rvizMain*/;


   QProcess *proc;




};

#endif // ROSGUI_H
