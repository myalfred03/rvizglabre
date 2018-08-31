
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

#include <kdl/chainiksolver.hpp>
#include <kdl/chainiksolverpos_nr.hpp>
#include <kdl/chainiksolvervel_pinv.hpp>

#include <kdl/treefksolverpos_recursive.hpp>


//ANRO URDF_ROBOT
#include <kdl/chainfksolver.hpp>
#include <kdl/chainfksolverpos_recursive.hpp>
#include <kdl/frames_io.hpp>

#include <kdl/tree.hpp>
#include <kdl_parser/kdl_parser.hpp>
//ANRO URDF_ROBOT

#include <kdl/joint.hpp>
#include <urdf/model.h>

namespace KDL { class Tree; class Chain; }
/// RTT/ROS

class modelparam
{
public:
  modelparam();
          bool initmodel();
          bool ForwardK(KDL::Frame &pos_mat6,
                        KDL::Frame &pos_mat5,
                        KDL::Frame &pos_mat4,
                        KDL::Frame &pos_mat3,
                        KDL::Frame &pos_mat2,
                        KDL::Frame &pos_mat1,
                        KDL::JntArray j,
                        unsigned int &nj
                        );
         // bool InverseK(KDL::Vector tcp, KDL::JntArray &pos_joint);
          bool InverseK(KDL::Vector tcpXYZ, KDL::Rotation tcpRPY, KDL::JntArray &pos_joint);

          bool treeforDH(KDL::Tree &model);

          bool readJntLimitsFromROSParamURDF(std::vector<double>& lower_limits,
          std::vector<double>& upper_limits);
          unsigned int njnt;
//  std::vector<double> lower_limits;
//    std::vector<double> upper_limits;


private:
  ros::NodeHandle nh;
  std::vector<std::string> limited_jnt_names;
//   std::vector<double> lower_limits;
//   std::vector<double> upper_limits;
  KDL::Tree  kdl_tree;
KDL::Chain kdl_chain1;
KDL::Chain kdl_chain2;
KDL::Chain kdl_chain3;
KDL::Chain kdl_chain4;
KDL::Chain kdl_chain5;
KDL::Chain kdl_chain6;
 // KDL::ChainFkSolverPos_recursive fksolver;
  KDL::ChainFkSolverPos_recursive* fksolver1;
  KDL::ChainFkSolverPos_recursive* fksolver2;
  KDL::ChainFkSolverPos_recursive* fksolver3;
  KDL::ChainFkSolverPos_recursive* fksolver4;
  KDL::ChainFkSolverPos_recursive* fksolver5;
  KDL::ChainFkSolverPos_recursive* fksolver6;

  KDL::TreeFkSolverPos_recursive* fksolvertree;
  KDL::Frame result1 = KDL::Frame::Identity();
  KDL::Frame result2 = KDL::Frame::Identity();
  KDL::Frame result3 = KDL::Frame::Identity();
  KDL::Frame result4 = KDL::Frame::Identity();
  KDL::Frame result5 = KDL::Frame::Identity();
  KDL::Frame result6 = KDL::Frame::Identity();

  KDL::Frame resultTree = KDL::Frame::Identity();


  //KDL::JntArray j =KDL::JntArray(6);
  KDL::Rotation rot_mat ;
  urdf::Model urdf_model;
  KDL::JntArray j1 =KDL::JntArray(6);


};

//#endif // MODELPARAM_H
