
//#ifndef MODELPARAM_H
//#define MODELPARAM_H
#pragma once

#include <kdl_parser/kdl_parser.hpp>
/// RTT/ROS
#include <kdl/chain.hpp>
#include <kdl/tree.hpp>
#include <kdl/segment.hpp>
#include <kdl/jntarray.hpp>
#include <urdf/model.h>

#include <vector>

namespace KDL { class Tree; class Chain; }
/// RTT/ROS


class modelparam
{
public:
  modelparam();
bool readJntLimitsFromROSParamURDF(
          std::vector<double>& lower_limits,
          std::vector<double>& upper_limits
          /*std::vector<std::string>& limited_jnt_names,
          KDL::Tree& kdl_tree,
          KDL::Chain& kdl_chain*/
                                     /*  const std::string& robot_description_ros_name = "robot_description",
          const std::string& root_link_ros_name = "root_link",
          const std::string& tip_link_ros_name = "tip_link"*/
                                     );
  std::vector<double> lower_limits;
//    std::vector<double> upper_limits;


private:
  ros::NodeHandle nh;
  std::vector<std::string> limited_jnt_names;
//   std::vector<double> lower_limits;
//   std::vector<double> upper_limits;
  KDL::Tree  kdl_tree;
  KDL::Chain kdl_chain;

};

//#endif // MODELPARAM_H
