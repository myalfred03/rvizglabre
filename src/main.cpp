#include "include/rosgui.h"
#include "include/ui_rosgui.h"
#include "include/secondwindow.h"
#include "include/thirdwindow.h"
#include "include/rvizg.h"
//#include "include/rvizg_node.h"
#include <QApplication>
#include <ros/ros.h>

int main(int argc, char **argv)
{

  if(!ros::isInitialized())
  {
    ros::init(argc, argv, "robot_editor", ros::init_options::AnonymousName);
  }
  QApplication a(argc, argv);
   ROSGUI z;




  //  QNode node(argc, argv, "GUI_ROS");
    //QNode node2(argc, argv, "GUI_ROS2");

    SecondWindow w;
    thirdwindow x;
    //w.show();
    //x.show();
    z.show();



    a.exec();


    return 0;
}
