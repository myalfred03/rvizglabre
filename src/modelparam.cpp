#include "modelparam.h"
#include <ros/ros.h>

double ToG    = 57.295779513;

modelparam::modelparam()
{
//double readJntLimitsFromROSParamURDF();

}
bool modelparam::initmodel(unsigned int &nj, bool K)
{

if (!K) {
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
          if (!urdf_model.initString(xml_string))    //Si se abre desde una direccion de ruta de archivo (//home/user//..//name.urdf) .initFile
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
          if(!kdl_tree.getChain(xml_stringCr, "link_5", kdl_chain5))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain(xml_stringCr, "link_4", kdl_chain4))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain(xml_stringCr, "link_3", kdl_chain3))
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
          nj = njnt;

        }

        else
{

 std::cout << "I have de Tree of DH" << std::endl;

//KDL::Tree modelx;
 kdl_tree = modelU; //this->treeF();
          if(!kdl_tree.getChain("mbase_link", "tool0", kdl_chain6))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain("mbase_link", "link_5", kdl_chain5))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain("mbase_link", "link_4", kdl_chain4))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain("mbase_link", "link_3", kdl_chain3))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain("mbase_link", "link_2", kdl_chain2))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          if(!kdl_tree.getChain("mbase_link", "link_1", kdl_chain1))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }
          njnt = kdl_chain6.getNrOfJoints();
          nj = njnt;

//kdl_chain6 = kdl_chainU;


}

          return true;

//          const std::string& file = "prueba";
//          const std::string & robot_name ="robot_1";
//          if (!this->treeToUrdfFile(file,kdl_tree,robot_name))
//          {
//                   std::cerr << "Error at Model URDF from Tree" <<std::endl;
//          }

}

bool modelparam::ForwardK(KDL::Frame &pos_mat6,
                          KDL::Frame &pos_mat5,
                          KDL::Frame &pos_mat4,
                          KDL::Frame &pos_mat3,
                          KDL::Frame &pos_mat2,
                          KDL::Frame &pos_mat1,
                          KDL::JntArray j)
{
        //  if (!initmodel())
        //  {ROS_ERROR("Failed to parse urdf file in model param");
        //   }

          //  Obtaining FK
//          nj = 0;
//          nj = njnt;
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

            KDL::JntArray q6(njnt),q5(nj_5),q4(nj_4),q3(nj_3),q2(nj_2),q1(nj_1);

        for(unsigned int i = 0; i< njnt; i++)
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
         fksolver6->JntToCart(q6, result6,njnt);
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
           std::cout << njnt<< "\n"  << nj_5<< "\n" << nj_4<< "\n"  << nj_3<< "\n"  << nj_2<< "\n"  << nj_1<< "\n"<<std::endl;

        //   std::cout << ""<< <<std::endl;



           return true;
}

bool modelparam::InverseK(KDL::Vector tcpXYZ, KDL::Rotation tcpRPY , KDL::JntArray &pos_joint)
{

//        KDL::ChainIkSolverVel_pinv iksolverV(kdl_chain6);
//        KDL::ChainIkSolverPos_NR   iksolver (kdl_chain6,*fksolver6,iksolverV,100,1e-2);
        KDL::Frame cartpos(tcpRPY,tcpXYZ);

//        KDL::Frame(KDL::Rotation::EulerZYX(0, 0, 0), KDL::Vector(0.5, -0.2, 0.8));

//        KDL::JntArray q_init(njnt);






        std::vector<std::string> joint_names_;
        q_min_.resize(njnt);
        q_max_.resize(njnt);
        q_seed_.resize(njnt);

        joint_names_.resize(njnt);

        unsigned int j = 0;
        for(unsigned int i = 0; i < njnt; ++i)
        {
            const KDL::Joint& kdl_joint = kdl_chain6.getSegment(i).getJoint();
            if (kdl_joint.getType() != KDL::Joint::None)
            {
    //            std::cout << chain_.getSegment(i).getName() << " -> " << kdl_joint.getName() << " -> " << chain_.getSegment(i + 1).getName() << std::endl;

                boost::shared_ptr<const urdf::Joint> joint = urdf_model.getJoint(kdl_joint.getName());
                if (joint && joint->limits)
                {
                    q_min_(j) = joint->limits->lower;
                    q_max_(j) = joint->limits->upper;
                    q_seed_(j) = (q_min_(j) + q_max_(j)) / 2;
                }
                else
                {
                    q_min_(j) = -1e9;
                    q_max_(j) = 1e9;
                    q_seed_(j) = 0;

                }

                joint_names_[j] = kdl_joint.getName();
    //            std::cout << j << ": " << q_min_(j) << " - " << q_max_(j) << std::endl;

                ++j;
            }
        }

        fksolver_.reset(new KDL::ChainFkSolverPos_recursive(kdl_chain6));
        ik_vel_solver_.reset(new KDL::ChainIkSolverVel_pinv(kdl_chain6));
               ik_solver_.reset(new KDL::ChainIkSolverPos_NR_JL(kdl_chain6, q_min_, q_max_, *fksolver_, *ik_vel_solver_, 500));
               std::cout << "Using normal solver" << std::endl;



//        q_init(njnt) = 0.0;
        // q_init(1) = -0.62;
        // q_init(2) = 0.36;
        // q_init(3) = -0.12;
        // q_init(4) = 1.1;
        // q_init(5) = -0.35;
        // q_init(6) = 0.75;


        bool kinematics_status;
        kinematics_status = ik_solver_->CartToJnt(q_seed_,cartpos,pos_joint);
        if(kinematics_status>=0){
        for(int i=0;i<njnt;i++)
              std::cout << pos_joint(i) <<std::endl;
            printf("%s \n","Succes, thanks KDL!");
            return true;
        }else{
            printf("%s \n","Error: could not calculate forward kinematics :(");
            return false;
        }

//        int status = ik_solver_->CartToJnt(q_seed_, cartpos, pos_joint);
//                for(int i=0;i<njnt;i++){
//                      std::cout << pos_joint(i) <<std::endl;
//                }
//                    printf("%s \n","Succes, thanks KDL!");


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


// KDL::Tree modelparam::treeF(){
// return modelU;

// }


bool modelparam::treeforDH(KDL::Tree &model, std_msgs::Float32MultiArray DH, int rot){
using namespace KDL;

  //test with TreeToURDF

//const std::string& file = "prueba";
//const std::string & robot_name ="robot_1";
KDL::Frame RotBase;
KDL::Frame BaseX = KDL::Frame(Rotation::RotX(-M_PI/2));
KDL::Frame BaseY = KDL::Frame(Rotation::RotY(-M_PI/2));
KDL::Frame BaseZ = KDL::Frame(Rotation::RotZ(0));

switch (rot){

case 0:
{
 RotBase = BaseX;
  break;
}
case 1:
{
 RotBase = BaseY;
  break;
}
case 2:
{
 RotBase = BaseZ;
  break;
}

}

   //--------------Documentation of FRAME::DH----------------------------//

    //  KDL::Frame::DH 	( 	double  	a,
    //                      double  	alpha,
    //                      double  	d,
    //                      double  	theta
    //                  )


   //--------------Documentation of FRAME::DH----------------------------//

    KDL::Tree hand_tree ("my_lab_world");




    // grasp_learning/src/test_file_2_fingers.cpp


    KDL::Chain chain_dh_robot;
     chain_dh_robot.addSegment(KDL::Segment("world",Joint(Joint::RotZ),RotBase));
     chain_dh_robot.addSegment(KDL::Segment("mbase_link",Joint("joint_1",Joint::RotZ),Frame::DH(DH.data[0],  DH.data[1]/ToG,  DH.data[2],  DH.data[3]/ToG)));
     chain_dh_robot.addSegment(KDL::Segment("link_1",    Joint("joint_2",Joint::RotZ),Frame::DH(DH.data[4],  DH.data[5]/ToG,  DH.data[6],  DH.data[7]/ToG)));
     chain_dh_robot.addSegment(KDL::Segment("link_2",    Joint("joint_3",Joint::RotZ),Frame::DH(DH.data[8],  DH.data[9]/ToG,  DH.data[10], DH.data[11]/ToG)));
     chain_dh_robot.addSegment(KDL::Segment("link_3",    Joint("joint_4",Joint::RotZ),Frame::DH(DH.data[12], DH.data[13]/ToG, DH.data[14], DH.data[15]/ToG)));
     chain_dh_robot.addSegment(KDL::Segment("link_4",    Joint("joint_5",Joint::RotZ),Frame::DH(DH.data[16],  DH.data[17]/ToG,  DH.data[18], DH.data[19]/ToG)));
     chain_dh_robot.addSegment(KDL::Segment("link_5",    Joint("joint_6",Joint::RotZ),Frame::DH(DH.data[20],  DH.data[21]/ToG,  DH.data[22], DH.data[23]/ToG)));
//     chain_dh_robot.addSegment(KDL::Segment("link_5",   Joint(Joint::RotY),Frame(Vector(0.0,0.0,3))));
//     chain_dh_robot.addSegment(KDL::Segment("link_6",   Joint(Joint::TransX),Frame(Vector(0.0,0.0,3))));
     chain_dh_robot.addSegment(KDL::Segment("tool0",     Joint("joint_tool",Joint::RotZ),Frame(Vector(0.0,0.0,0))));





     hand_tree.addChain(chain_dh_robot,"my_lab_world");
     //njnt=chain_dh_robot.getNrOfJoints();
     model = hand_tree;
modelU = hand_tree;

if(!modelU.getChain("mbase_link", "tool0", kdl_chain6))
              {
                  ROS_ERROR("Error getting KDL chain");
                   nh.shutdown();
              }

    njnt = kdl_chain6.getNrOfJoints();
     std::cout << "I have of Tree of DH NJNT" << njnt << std::endl;

//KDL::ChainFkSolverPos_recursive FKSolver = KDL::ChainFkSolverPos_recursive(chain_dh_robot);
//Frame eeFrame;
//FKSolver.JntToCart(jointAngles, eeFrame);

//kdl_chain6 = chain_dh_robot;


//if (!this->treeToUrdfFile(file,model,robot_name))
//{
//         std::cerr << "Error at Model URDF from Tree" <<std::endl;
//}
     return true;

}

//bool modelparam::treeToUrdfFile(const std::string& file, const KDL::Tree& tree, const std::string & robot_name)
//{
//  bool ok = false;
//  TiXmlDocument * urdf_xml;
//  if( !treeToUrdfXml(urdf_xml, tree, robot_name) ) return ok;
//  ok = urdf_xml->SaveFile(file);
////  delete urdf_xml;
//  return ok;
//}

//bool modelparam::treeToUrdfXml(TiXmlDocument* & xml_doc, const KDL::Tree& tree, const std::string & robot_name)
//{
//    urdf::ModelInterface robot_model;
//    if( !treeToUrdfModel(tree,robot_name,robot_model) ) return false;
//    xml_doc =  urdf::exportURDF(robot_model);
//    return true;
//}

//bool modelparam::treeToUrdfModel(const KDL::Tree& tree, const std::string & robot_name, urdf::ModelInterface& robot_model)
//{
//    robot_model.clear();
//    robot_model.name_ = robot_name;

//    //Add all links
//    KDL::SegmentMap::iterator seg;
//    KDL::SegmentMap segs;
//    KDL::SegmentMap::const_iterator root_seg;
//    root_seg = tree.getRootSegment();
//    segs = tree.getSegments();
//    for( seg = segs.begin(); seg != segs.end(); seg++ ) {
//        if (robot_model.getLink(seg->first))
//        {
//            std::cerr << "[ERR] link " << seg->first << " is not unique." << std::endl;
//            robot_model.clear();
//            return false;
//        }
//        else
//        {
//            urdf::LinkPtr link;
//            resetPtr(link, new urdf::Link);

//            //add name
//            link->name = seg->first;

//            //insert link
//            robot_model.links_.insert(make_pair(seg->first,link));
//            std::cerr << "[DEBUG] successfully added a new link " << link->name << std::endl;
//        }

//        //inserting joint
//        //The fake root segment has no joint to add
//        if( seg->first != root_seg->first ) {
//            KDL::Joint jnt;
//            jnt = GetTreeElementSegment(seg->second).getJoint();
//            if (robot_model.getJoint(jnt.getName()))
//            {
//                std::cerr << "[ERR] joint " <<  jnt.getName() << " is not unique." << std::endl;
//                robot_model.clear();
//                return false;
//            }
//            else
//            {
//                urdf::JointPtr joint;
//                urdf::LinkPtr link = robot_model.links_[seg->first];
//                //This variable will be set by toUrdf
//                KDL::Frame H_new_old_successor;
//                KDL::Frame H_new_old_predecessor = this->getH_new_old(GetTreeElementSegment(GetTreeElementParent(seg->second)->second));
//                urdf::resetPtr(joint, new urdf::Joint());

//                //convert joint
//                *joint = toUrdf(jnt, GetTreeElementSegment(seg->second).getFrameToTip(),H_new_old_predecessor,H_new_old_successor);

//                //insert parent
//                joint->parent_link_name = GetTreeElementParent(seg->second)->first;

//                //insert child
//                joint->child_link_name = seg->first;

//                //insert joint
//                robot_model.joints_.insert(make_pair(seg->first,joint));
//                std::cerr << "[DEBUG] successfully added a new joint" << jnt.getName() << std::endl;

//                //add inertial, taking in account an eventual change in the link frame
//                resetPtr(link->inertial, new urdf::Inertial());
//                *(link->inertial) = this->toUrdf(H_new_old_successor * GetTreeElementSegment(seg->second).getInertia());
//            }
//        }

//    }

//    // every link has children links and joints, but no parents, so we create a
//    // local convenience data structure for keeping child->parent relations
//    std::map<std::string, std::string> parent_link_tree;
//    parent_link_tree.clear();

//    // building tree: name mapping
//    //try
//    //{
//        robot_model.initTree(parent_link_tree);
//    //}
//    /*
//    catch(ParseError &e)
//    {
//        logError("Failed to build tree: %s", e.what());
//        robot_model.clear();
//        return false;
//    }*/

//    // find the root link
//    //try
//    //{
//        robot_model.initRoot(parent_link_tree);
//    //}
//    /*
//    catch(ParseError &e)
//    {
//        logError("Failed to find root link: %s", e.what());
//        robot_model.reset();
//        return false;
//    }
//    */
//    return true;
//}

//KDL::Frame modelparam::getH_new_old(KDL::Joint jnt, KDL::Frame frameToTip)
//{
//    KDL::Frame H_new_old;
//    if( (jnt.JointOrigin()-frameToTip.p).Norm() < 1e-12 || jnt.getType() == KDL::Joint::None ) {
//        //No need of changing link frame
//        H_new_old = KDL::Frame::Identity();
//    } else {
//        std::cerr << "[WARN] the reference frame of link connected to joint " << jnt.getName()  << "  has to be shifted to comply to URDF constraints" << std::endl;
//        //H_new_old = (KDL::Frame(jnt.JointOrigin())*KDL::Frame(frameToTip.M)).Inverse()*frameToTip;
//        H_new_old = KDL::Frame(frameToTip.M.Inverse()*(frameToTip.p-jnt.JointOrigin()));
//    }
//    return H_new_old;
//}


//KDL::Frame modelparam::getH_new_old(KDL::Segment seg)
//{
//    KDL::Joint jnt =  seg.getJoint();
//    KDL::Frame frameToTip = seg.getFrameToTip();
//    return getH_new_old(jnt,frameToTip);
//}

//urdf::Joint modelparam::toUrdf(const KDL::Joint & jnt,
//                   const KDL::Frame & frameToTip,
//                   const KDL::Frame & H_new_old_predecessor,
//                   KDL::Frame & H_new_old_successor)
//{
//    //URDF constaints the successor link frame origin to lay on the axis
//    //of the joint ( see : http://www.ros.org/wiki/urdf/XML/joint )
//    //Then if the JointOrigin of the KDL joint is not zero, it is necessary
//    //to move the link frame (then it is necessary to change also the spatial inertia)
//    //and the definition of the childrens of the successor frame
//    urdf::Joint ret;
//    ret.name = jnt.getName();

//    H_new_old_successor = getH_new_old(jnt,frameToTip);

//    ret.parent_to_joint_origin_transform = toUrdf(H_new_old_predecessor*frameToTip*(H_new_old_successor.Inverse()));

//    switch(jnt.getType())
//    {
//        case KDL::Joint::RotAxis:
//        case KDL::Joint::RotX:
//        case KDL::Joint::RotY:
//        case KDL::Joint::RotZ:
//            //using continuos if no joint limits are specified
//            ret.type = urdf::Joint::CONTINUOUS;
//            //in urdf, the joint axis is expressed in the joint/successor frame
//            //in kdl, the joint axis is expressed in the predecessor rame
//            ret.axis = toUrdf(((frameToTip).M.Inverse((jnt.JointAxis()))));
//        break;
//        case KDL::Joint::TransAxis:
//        case KDL::Joint::TransX:
//        case KDL::Joint::TransY:
//        case KDL::Joint::TransZ:
//            ret.type = urdf::Joint::PRISMATIC;
//            //in urdf, the joint axis is expressed in the joint/successor frame
//            //in kdl, the joint axis is expressed in the predecessor rame
//            ret.axis = toUrdf((frameToTip.M.Inverse(jnt.JointAxis())));
//        break;
//        default:
//            std::cerr << "[WARN] Converting unknown joint type of joint " << jnt.getTypeName() << " into a fixed joint" << std::endl;
//        case KDL::Joint::None:
//            ret.type = urdf::Joint::FIXED;
//    }
//    return ret;
//}

//urdf::Vector3 modelparam::toUrdf(const KDL::Vector & v)
//{
//    return urdf::Vector3(v.x(), v.y(), v.z());
//}

//// construct rotation
//urdf::Rotation modelparam::toUrdf(const KDL::Rotation & r)
//{
//    double x,y,z,w;
//    r.GetQuaternion(x,y,z,w);
//    return urdf::Rotation(x,y,z,w);
//}

//// construct pose
//urdf::Pose modelparam::toUrdf(const KDL::Frame & p)
//{
//    urdf::Pose ret;
//    ret.rotation = toUrdf(p.M);
//    ret.position = toUrdf(p.p);
//    return ret;
//}

//urdf::Inertial modelparam::toUrdf(KDL::RigidBodyInertia i)
//{
//  urdf::Inertial ret;
//  ret.mass = i.getMass();
//  ret.origin = toUrdf(KDL::Frame(KDL::Rotation::Identity(),i.getCOG()));
//  // kdl specifies the inertia in the reference frame of the link, the urdf specifies the inertia in the inertia reference frame
//  // however the kdl RigidBodyInertia constructor take the inertia with the COG as reference point,
//  // but the getInertia
//  KDL::RotationalInertia Ic;
//  Ic = i.RefPoint(i.getCOG()).getRotationalInertia();
//  ret.ixx = Ic.data[0];
//  ret.ixy = Ic.data[1];
//  ret.ixz = Ic.data[2];
//  ret.iyy = Ic.data[4];
//  ret.iyz = Ic.data[5];
//  ret.izz = Ic.data[8];
//  return ret;
//}
