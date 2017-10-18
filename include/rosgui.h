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
////robot editor

////robot editor
class QMainWindow;
class MyViz;
namespace robot_state_publisher { class RobotStatePublisher; }
namespace KDL { class Tree; }
namespace boost { class thread; }
////robot editor

namespace Ui { class ROSGUI; }
class ROSGUI : public QMainWindow
{
    Q_OBJECT

public:
      ROSGUI();
      ~ROSGUI();
      void show();
//      void openCD(); //make a new function to call the window
//      void openCI();
//      void openDH();

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

      void updateSlider();

      void updateSpinboxes();

      void updateDialer();

      void updateSpinboxesD();

      void on_2DOF();
      void on_3DOF();
      void on_4DOF();
      void on_5DOF();
      void on_6DOF();
     // void on_checkBox6DOFI_toggled(bool checked);


      // Cargando Robots
      void on2DOFI_URDF();
      void on3DOFI_URDF();
      void on4DOFI_URDF();
      void on5DOFI_URDF();
      void on6DOFI_URDF();
      void on4DOFs_URDF();


//private slots:
//      void on_checkBox6DOFI_toggled(bool checked);

private:

    //robot editor
   void updateURDF(const std::string& urdf);
   void publishJointStates();
   //QMainWindow main_window_;

private:


   //RobotPreview *robot_preview_;
   QString file_name_;          //llamar el STRING DEL URDF
   boost::mutex state_pub_mutex_;
   KDL::Tree* robot_tree_ = NULL;
   robot_state_publisher::RobotStatePublisher* robot_state_pub_ = NULL;
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


   QProcess *proc;

};

#endif // ROSGUI_H
