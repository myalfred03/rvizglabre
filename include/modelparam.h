
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
#include <kdl/chainiksolverpos_nr_jl.hpp>
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
#include <urdf_model/model.h>
#include <urdf_parser/urdf_parser.h>

#include <std_msgs/Float32MultiArray.h>

//namespace KDL  { class Tree; class Chain; class Frame;}
///// RTT/ROS
//namespace urdf { class ModelInterface;
//                 typedef JointSharedPtr JointPtr;
//                 typedef LinkSharedPtr  LinkPtr;
//                 typedef LinkConstSharedPtr  ConstLinkPtr;
//                 typedef InertialSharedPtr InertialPtr;
//                 typedef std::vector< LinkPtr > LinkVector;
//                 typedef ModelInterfaceSharedPtr ModelInterfacePtr;
//                 typedef std::map<std::string, JointPtr > JointPtrMap;
//                 template<class PtrType> inline void resetPtr(PtrType & ptr) { ptr.reset(); }
//                 template<class PtrType, class PlainType> inline void resetPtr(PtrType & ptr, PlainType * plain_ptr) { ptr.reset(plain_ptr); }
//               }


class modelparam
{
public:
  modelparam();
          bool initmodel(unsigned int &nj);
          bool ForwardK(KDL::Frame &pos_mat6,
                        KDL::Frame &pos_mat5,
                        KDL::Frame &pos_mat4,
                        KDL::Frame &pos_mat3,
                        KDL::Frame &pos_mat2,
                        KDL::Frame &pos_mat1,
                        KDL::JntArray j

                        );
         // bool InverseK(KDL::Vector tcp, KDL::JntArray &pos_joint);
          bool InverseK(KDL::Vector tcpXYZ, KDL::Rotation tcpRPY, KDL::JntArray &pos_joint);

          bool treeforDH(KDL::Tree &model, std_msgs::Float32MultiArray DH, int rot);
          
          bool treeforURDF(  urdf::Model urdf);

          bool treeforFK (KDL::Tree model);

          bool readJntLimitsFromROSParamURDF(std::vector<double>& lower_limits,
          std::vector<double>& upper_limits);
          unsigned int njnt;
          KDL::JntArray q_min_, q_max_, q_seed_;
          KDL::Chain kdl_chain6;

            std::string param_nameR = "my_lab_uni/robot_description";
  std::string full_param_name;
  std::string xml_string;
  //std::string xml_string2;

  std::string param_nameCr = "root_link";
  std::string full_param_nameCr;
  std::string xml_stringCr;
  std::string param_nameCt = "tip_link";
  std::string full_param_nameCt;
  std::string xml_stringCt;

//          bool treeToUrdfFile(const std::string& file, const KDL::Tree& tree, const std::string & robot_name="URDF_generated_by_kdl_format_io");
//          bool treeToUrdfXml(TiXmlDocument * & xml_doc,  const KDL::Tree& tree, const std::string & robot_name="URDF_generated_by_kdl_format_io");
//          bool treeToUrdfModel(const KDL::Tree& tree, const std::string & robot_name, urdf::ModelInterface& robot_model);

//          KDL::Frame getH_new_old(KDL::Joint jnt, KDL::Frame frameToTip);
//          KDL::Frame getH_new_old(KDL::Segment seg);

//          urdf::Joint toUrdf(const KDL::Joint & jnt,
//                             const KDL::Frame & frameToTip,
//                             const KDL::Frame & H_new_old_predecessor,
//                             KDL::Frame & H_new_old_successor);
//          urdf::Vector3 toUrdf(const KDL::Vector & v);

//          // construct rotation
//          urdf::Rotation toUrdf(const KDL::Rotation & r);

//          // construct pose
//          urdf::Pose toUrdf(const KDL::Frame & p);

//          urdf::Inertial toUrdf(KDL::RigidBodyInertia i);

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
//KDL::Chain kdl_chain6;
KDL::Chain kdl_chainDH;

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


  boost::shared_ptr<KDL::ChainFkSolverPos> fksolver_;
  boost::shared_ptr<KDL::ChainIkSolverVel> ik_vel_solver_;
  boost::shared_ptr<KDL::ChainIkSolverPos> ik_solver_;



};

//#endif // MODELPARAM_H
