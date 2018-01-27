
//#ifndef MODELPARAM_H
//#define MODELPARAM_H
//#pragma once
#include <boost/scoped_ptr.hpp>


#include <kdl_parser/kdl_parser.hpp>
/// RTT/ROS
#include <kdl/chain.hpp>
#include <kdl/tree.hpp>
#include <kdl/segment.hpp>
#include <kdl/jntarray.hpp>
#include <urdf/model.h>

#include <vector>

//ANRO URDF_ROBOT
#include <kdl/chainfksolver.hpp>
#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/frames_io.hpp>

#include <kdl/tree.hpp>
#include <kdl_parser/kdl_parser.hpp>
//ANRO URDF_ROBOT

namespace KDL { class Tree; class Chain; }
/// RTT/ROS


class modelparam
{
public:
  modelparam();
          bool initmodel();
          bool ForwardK(KDL::Vector &pos_mat, KDL::JntArray j, unsigned int &nj);

          bool readJntLimitsFromROSParamURDF(std::vector<double>& lower_limits,
          std::vector<double>& upper_limits);
//  std::vector<double> lower_limits;
//    std::vector<double> upper_limits;


private:
  ros::NodeHandle nh;
  std::vector<std::string> limited_jnt_names;
//   std::vector<double> lower_limits;
//   std::vector<double> upper_limits;
  KDL::Tree  kdl_tree;
  KDL::Chain kdl_chain;
 // KDL::ChainFkSolverPos_recursive fksolver;
//  KDL::ChainFkSolverPos_recursive* fksolver;
  KDL::Chain kdl_chain2;
  KDL::Frame result = KDL::Frame::Identity();
  //KDL::JntArray j =KDL::JntArray(6);
  KDL::Rotation rot_mat ;
  urdf::Model urdf_model;
  KDL::JntArray j1 =KDL::JntArray(6);


};

//#endif // MODELPARAM_H
