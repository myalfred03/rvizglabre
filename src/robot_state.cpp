#include <string>
#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <tf/transform_broadcaster.h>
#include "modelparam.h"
#include<std_msgs/Float64.h>
#include<stdio.h>
#include <cstdio>
#include <iostream>
#include <vector>
class modelparam;

class robotstate
{
public:
 bool init();
 std::vector<double> getJointLowerLimits();
 std::vector<double> getJointUpperLimits();
 std::vector<double> joints_lower_limit_;
 std::vector<double> joints_upper_limit_;


private:
 modelparam joints;
 ros::NodeHandle np;

};






bool robotstate::init()
{

 // joints = new modelparam;
 if(!joints.readJntLimitsFromROSParamURDF(
                                      joints_lower_limit_
                                      , joints_upper_limit_))
 {
          std::cerr << "Error at rtt_ros_kdl_tools::readJntLimitsFromROSParamURDF" <<std::endl;
         return false;
      }

  return true;
}

std::vector<double> robotstate::getJointLowerLimits()
{   //joints= new modelparam;
      std::vector< double > readL = joints_lower_limit_;
    return readL;
}

std::vector< double > robotstate::getJointUpperLimits()
{
    std::vector< double > readU = joints_upper_limit_;
    return readU;
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "state_publisher");
    ros::NodeHandle nm;
    sensor_msgs::JointState desired_joint_state_msg;
    std::vector< double > test1;
    std::vector< double > test2;
    ros::Publisher joint_pub = nm.advertise<sensor_msgs::JointState>("joints_model", 10);
//    tf::TransformBroadcaster broadcaster;
    //double	read;

    ros::Rate loop_rate(30);
robotstate pub;
while (ros::ok()) {

  if(!pub.init()){
     ROS_ERROR("Error publisher");
  }
  test2 = pub.getJointLowerLimits();
  test1 = pub.getJointUpperLimits();



      //sr_core Joint_spline_trajectory_action_controller
      for (int i = 0; i < 7; ++i)
      {
        desired_joint_state_msg.position.push_back(test2[i]);
        desired_joint_state_msg.velocity.push_back(test1[i]);

      }
          joint_pub.publish(desired_joint_state_msg);
      //sr_core Joint_spline_trajectory_action_controller

        loop_rate.sleep();
    }


    return 0;
}


