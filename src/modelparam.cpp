#include "modelparam.h"
#include <ros/ros.h>


modelparam::modelparam()
{
//double readJntLimitsFromROSParamURDF();

}
bool modelparam::initmodel()
{

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
                                 //Parametro Robot Description
    nh.searchParam(param_nameR, full_param_name);
      if (nh.hasParam(full_param_name)){nh.getParam(full_param_name.c_str(), xml_string);}

      else { ROS_ERROR("Parameter %s not set, shutting down node... in model param" , full_param_name.c_str());
             nh.shutdown();
             //return false;
      }

      if (xml_string.size() == 0)
      {      ROS_ERROR("Unable to load robot model from parameter in model param %s",full_param_name.c_str());
             nh.shutdown();
             //return false;
      }

      ROS_DEBUG("%s content\n%s", full_param_name.c_str(), xml_string.c_str());
     // xml_string2 =  "/home/yesser/ros_qtc_plugin/src/rvizglabre/modelos/sia10f.urdf";
                               //Parametro Root Link KDL CHAIN

      nh.searchParam(param_nameCr, full_param_nameCr);
          if (nh.hasParam(full_param_nameCr)){nh.getParam(full_param_nameCr.c_str(), xml_stringCr);}

          else { ROS_ERROR("Parameter %s not set, shutting down node... in model param" , full_param_nameCr.c_str());
                 nh.shutdown();
                 //return false;
          }

          if (xml_stringCr.size() == 0)
          {      ROS_ERROR("Unable to load robot model from parameter in model param %s",full_param_nameCr.c_str());
                 nh.shutdown();
                 //return false;
          }

          ROS_DEBUG("%s content\n%s", full_param_nameCr.c_str(), xml_stringCr.c_str());
                               //Parametro Tip Link KDL CHAIN
       nh.searchParam(param_nameCt, full_param_nameCt);
          if (nh.hasParam(full_param_nameCt)){nh.getParam(full_param_nameCt.c_str(), xml_stringCt);}

          else { ROS_ERROR("Parameter %s not set, shutting down node... in model param" , full_param_nameCt.c_str());
          nh.shutdown();
          //return false;
          }

          if (xml_stringCt.size() == 0)
          {      ROS_ERROR("Unable to load robot model from parameter in model param %s",full_param_nameCt.c_str());
          nh.shutdown();
          //return false;
          }

          ROS_DEBUG("%s content\n%s", full_param_nameCt.c_str(), xml_stringCt.c_str());

      /// Get urdf model out of robot_description
          if (!urdf_model.initString(xml_string))    //Si se abre desde una direccion de ruta de archivo .initFile
          {
              ROS_ERROR("Failed to parse urdf file in model param");
              nh.shutdown();
              //return false;
          }
          ROS_DEBUG("Successfully parsed urdf file");

      /// Get KDL TREE
          if (!kdl_parser::treeFromUrdfModel(urdf_model, kdl_tree)){
                 ROS_ERROR("Failed to construct kdl tree");
                 nh.shutdown();
              }

      /// Get KDL CHAIN
          if(!kdl_tree.getChain(xml_stringCr, xml_stringCt, kdl_chain6))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain(xml_stringCr, "link_6", kdl_chain5))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain(xml_stringCr, "link_5", kdl_chain4))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain(xml_stringCr, "link_4", kdl_chain3))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain(xml_stringCr, "link_2", kdl_chain2))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain(xml_stringCr, "link_1", kdl_chain1))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          njnt = kdl_chain6.getNrOfJoints();
          return true;

}

bool modelparam::ForwardK(KDL::Frame &pos_mat6,
                          KDL::Frame &pos_mat5,
                          KDL::Frame &pos_mat4,
                          KDL::Frame &pos_mat3,
                          KDL::Frame &pos_mat2,
                          KDL::Frame &pos_mat1,
                          KDL::JntArray j,
                          unsigned int &nj)
{
//  if (!initmodel())
//  {ROS_ERROR("Failed to parse urdf file in model param");
//   }

  //  Obtaining FK
  nj = 0;
  nj = njnt;
  unsigned int nj_1 = kdl_chain1.getNrOfJoints();
  unsigned int nj_2 = kdl_chain2.getNrOfJoints();
  unsigned int nj_3 = kdl_chain3.getNrOfJoints();
  unsigned int nj_4 = kdl_chain4.getNrOfJoints();
  unsigned int nj_5 = kdl_chain5.getNrOfJoints();
//  ROS_INFO("[Segments,joints]:[%d]",nj);
  j1=j; //Datos de joints

  // fksolver = new KDL::ChainFkSolverPos_recursive(kdl_chain);
fksolver1= new KDL::ChainFkSolverPos_recursive(kdl_chain1);  //please check the inner of Code DH, Newton-Euler
fksolver2= new KDL::ChainFkSolverPos_recursive(kdl_chain2);
fksolver3= new KDL::ChainFkSolverPos_recursive(kdl_chain3);
fksolver4= new KDL::ChainFkSolverPos_recursive(kdl_chain4);
fksolver5= new KDL::ChainFkSolverPos_recursive(kdl_chain5);
fksolver6= new KDL::ChainFkSolverPos_recursive(kdl_chain6);

fksolvertree = new KDL::TreeFkSolverPos_recursive(kdl_tree); //probando el treeFk solver

    KDL::JntArray q6(nj),q5(nj_5),q4(nj_4),q3(nj_3),q2(nj_2),q1(nj_1);

for(unsigned int i = 0; i< nj; i++)
{
  q6(i)=j1(i);
}

for(unsigned int i = 0; i< nj_5; i++)
{
  q5(i)=j1(i);
}
for(unsigned int i = 0; i< nj_4; i++)
{
  q4(i)=j1(i);
}
for(unsigned int i = 0; i< nj_3; i++)
{
  q3(i)=j1(i);
}
for(unsigned int i = 0; i< nj_2; i++)
{
  q2(i)=j1(i);
}

for(unsigned int i = 0; i< nj_1; i++)
{
  q1(i)=j1(i);
}

 double roll = 0.0 , pitch = 0.0 , yaw = 0.0;
 fksolver6->JntToCart(q6, result6,nj);
 fksolver5->JntToCart(q5, result5,nj_5);
 fksolver4->JntToCart(q4, result4,nj_4);
 fksolver3->JntToCart(q3, result3,nj_3);
 fksolver2->JntToCart(q2, result2,nj_2);
 fksolver1->JntToCart(q1, result1,nj_1);

 fksolvertree->JntToCart(q6,resultTree,"link_1");  //probando el FK solver hasta el Link _ 1

 KDL::Rotation R;
   R = result6.M;
   //R= result.
   R.GetRPY(roll,pitch,yaw);
   pos_mat6 = result6;
   pos_mat5 = result5;
   pos_mat4 = result4;
   pos_mat3 = result3;
   pos_mat2 = result2;
   pos_mat1 = result1;

   std::cout << result6<< "\n" <<std::endl;
   std::cout << nj<< "\n"  << nj_5<< "\n" << nj_4<< "\n"  << nj_3<< "\n"  << nj_2<< "\n"  << nj_1<< "\n"<<std::endl;

//   std::cout << ""<< <<std::endl;



   return true;
}

bool modelparam::InverseK(KDL::Vector tcpXYZ, KDL::Rotation tcpRPY , KDL::JntArray &pos_joint)
{

KDL::ChainIkSolverVel_pinv iksolverV(kdl_chain6);
KDL::ChainIkSolverPos_NR   iksolver (kdl_chain6,*fksolver6,iksolverV,100,1e-3);
KDL::Frame cartpos(tcpRPY,tcpXYZ);
KDL::JntArray q_init(njnt);

q_init(njnt) = 0;
// q_init(1) = -0.62;
// q_init(2) = 0.36;
// q_init(3) = -0.12;
// q_init(4) = 1.1;
// q_init(5) = -0.35;
// q_init(6) = 0.75;
bool kinematics_status;
kinematics_status = iksolver.CartToJnt(q_init,cartpos,pos_joint);
if(kinematics_status>=0){
for(int i=0;i<njnt;i++)
      std::cout << pos_joint(i) <<std::endl;
    printf("%s \n","Succes, thanks KDL!");
    return true;
}else{
    printf("%s \n","Error: could not calculate forward kinematics :(");
    return false;
}


return true;

}


bool modelparam::readJntLimitsFromROSParamURDF(std::vector<double> &lower_limits, std::vector<double> &upper_limits)

{

//  if (!initmodel())
//  {ROS_ERROR("Failed to parse urdf file in model param");
//   }


  lower_limits.clear();
  upper_limits.clear();

  //KDL WRAPPER


          int nbr_segs = kdl_chain6.getNrOfSegments();
         // lower_limits.resize(kdl_chain.getNrOfJoints());
              std::vector<std::string> seg_names;

              for(int i=0; i<nbr_segs; i++)
                  seg_names.push_back(kdl_chain6.getSegment(i).getJoint().getName());

              for (std::map<std::string,boost::shared_ptr<urdf::Joint> >::iterator joint = urdf_model.joints_.begin(); joint != urdf_model.joints_.end(); ++joint) {
                  if ( joint->second->limits && std::find(seg_names.begin(), seg_names.end(),joint->second->name)!=seg_names.end() ) {
                      if (joint->second->limits->lower != joint->second->limits->upper) {
                         // limited_jnt_names.push_back(joint->second->name);
                          lower_limits.push_back(joint->second->limits->lower);
                          upper_limits.push_back(joint->second->limits->upper);
                }
               }
              }

           return true;
}
bool modelparam::treeforDH(KDL::Tree &model){
    KDL::Tree hand_tree("RootName");

    using namespace KDL;

    KDL::Chain chain_palm;

    KDL::Chain chain_finger_right_0;
    KDL::Chain chain_finger_left_0;
    KDL::Chain chain_finger_right_1;
    KDL::Chain chain_finger_left_1;
    KDL::Chain chain_finger_right_2;
    KDL::Chain chain_finger_left_2;

//    KDL::Chain chain_palm_finger_left_0; // return the result
//    KDL::Chain chain_palm_finger_left_1;
//    KDL::Chain chain_palm_finger_left_2;
//    KDL::Chain chain_palm_finger_right_0;
//    KDL::Chain chain_palm_finger_right_1;
//    KDL::Chain chain_palm_finger_right_2;

     chain_palm.addSegment(KDL::Segment("palm_trasl_x_link",Joint(Joint::TransX),Frame(Vector(0.0,0.0,3))));
     chain_palm.addSegment(KDL::Segment("palm_trasl_y_link",Joint(Joint::TransY),Frame(Vector(0.0,0.0,3))));
     chain_palm.addSegment(KDL::Segment("palm_trasl_z_link",Joint(Joint::TransZ),Frame(Vector(0.0,0.0,3))));
     chain_palm.addSegment(KDL::Segment("palm_rot_x_link",Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));
     chain_palm.addSegment(KDL::Segment("palm_rot_y_link",Joint(Joint::RotY),Frame(Vector(0.0,0.0,3))));
     chain_palm.addSegment(KDL::Segment("palm_rot_z_link",Joint(Joint::RotZ),Frame(Vector(0.0,0.0,3))));

     chain_finger_right_0.addSegment(KDL::Segment("finger_right_proximal_link_0",KDL::Joint(KDL::Joint::RotX),Frame(Vector(0.0,0.0,3))));
     chain_finger_right_0.addSegment(KDL::Segment("finger_right_distal_link_0",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));

     chain_finger_left_0.addSegment(KDL::Segment("finger_left_proximal_link_0",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));
     chain_finger_left_0.addSegment(KDL::Segment("finger_left_distal_link_0",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));

     chain_finger_right_1.addSegment(KDL::Segment("finger_right_proximal_link_1",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));
     chain_finger_right_1.addSegment(KDL::Segment("finger_right_distal_link_1",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));

     chain_finger_left_1.addSegment(KDL::Segment("finger_left_proximal_link_1",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));
     chain_finger_left_1.addSegment(KDL::Segment("finger_left_distal_link_1",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));

     chain_finger_right_2.addSegment(KDL::Segment("finger_right_proximal_link_2",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));
     chain_finger_right_2.addSegment(KDL::Segment("finger_right_distal_link_2",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,3))));

     chain_finger_left_2.addSegment(KDL::Segment("finger_left_proximal_link_2",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,2))));
     chain_finger_left_2.addSegment(KDL::Segment("finger_left_distal_link_2",KDL::Joint(Joint::RotX),Frame(Vector(0.0,0.0,2))));



     hand_tree.addChain(chain_palm,"RootName");
     hand_tree.addChain(chain_finger_right_0,"palm_rot_z_link");
     hand_tree.addChain(chain_finger_left_0, "palm_rot_z_link");
     hand_tree.addChain(chain_finger_right_1,"palm_rot_z_link");
     hand_tree.addChain(chain_finger_left_1, "palm_rot_z_link");
     hand_tree.addChain(chain_finger_right_2,"palm_rot_z_link");
     hand_tree.addChain(chain_finger_left_2, "palm_rot_z_link");
     model = hand_tree;
     return true;

}
