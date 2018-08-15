#include <QMessageBox>
#include <QMdiArea>
#include <QtGui>
#include <QMainWindow>
#include <QTreeWidget>
#include <QStyledItemDelegate>
#include <QItemDelegate>
#include <QList>
#include <QProcess>
#include <QVector>
#include <QString>
#include <QTemporaryDir>
#include <QCheckBox>
#include <QTextEdit>
#include <QTextStream>
#include <QTextCursor>
#include <QFileDialog>
#include <QFile>






#include "rosgui.h"
#include <ui_rosgui.h>

//#include "include/ui_rosgui.h"
//#include "rvizg.h"


//#include "include/secondwindow.h"
////#include "include/ui_secondwindow.h"
//#include "include/thirdwindow.h"
////#include "include/ui_thirdwindow.h"
//#include "include/fourth.h"
////#include "include/ui_fourth.h"
////#include "secondwindow.h"


#include <ros/ros.h>


////robot editor
#include <cstdlib>
#include <fstream>

#include <boost/thread/thread.hpp>
#include <boost/bind.hpp>

#include <XmlRpcValue.h>
#include <sensor_msgs/JointState.h>
#include <kdl_parser/kdl_parser.hpp>
#include <robot_state_publisher/robot_state_publisher.h>

#include <sstream>
////robot editor




#include "std_msgs/MultiArrayLayout.h"
#include "std_msgs/MultiArrayDimension.h"

#include "std_msgs/Int32MultiArray.h"
const double FACTOR = 1;
const double ToG    = 57.295779513;
const double resetv  = 0;


ROSGUI::ROSGUI(QWidget *parent)
  :QMainWindow(parent),
  main_window_ui_(new Ui::ROSGUI)

{
// proc = new QProcess();     //   <QtGui>
//  proc->start("gnome-terminal --geometry=50x10-0-10 -x bash -c \"roscore\" ");


    main_window_ui_->setupUi(this);

   // qnode->on_init();

    mRviz = new MyViz(main_window_ui_->mdiArea);

    main_window_ui_->mdiArea->addSubWindow(mRviz, Qt::FramelessWindowHint); //mdiarea various screen

   // mRviz->adjustSize();
//    mRviz->setMaximumHeight();

    mRviz->showMaximized();

//    showModel = new rvizMain(main_window_ui_->mdiArea);
    // Add rviz to mdiArea as a subwindow and maximize it
//    main_window_ui_->mdiArea->addSubWindow(showModel, Qt::FramelessWindowHint); // FramelessWindowHint removes close, minimize and maximize title bar
//    showModel->showMaximized();

    QPixmap pix(":/images/img/Uni.jpg");
    main_window_ui_->label_3->setPixmap(pix);


    // readJntLimitsFromROSParamURDF(&n);

    //Mostrando ventanas emergentes//

    //CD
//    secwindow = new QMainWindow();
//    Ui::SecondWindow SecondWindowUI;
//    SecondWindowUI.setupUi(secwindow);
//    QPixmap pix2(":/images/img/CD.png");
//    SecondWindowUI.label->setPixmap(pix2);
//    //CI
//    thwindow = new QMainWindow();
//    Ui::thirdwindow thWindowUI;
//    thWindowUI.setupUi(thwindow);
//    QPixmap pix3(":/images/img/CI.png");
//    thWindowUI.label_2->setPixmap(pix3);
//    //DH
//    fourwindow = new QMainWindow();
//    Ui::fourth frWindowUI;
//    frWindowUI.setupUi(fourwindow);
//    QPixmap pix4(":/images/img/dhparameter.png");
//    frWindowUI.label_2->setPixmap(pix4);

    //SIGNAL and SLOTS
    //Acciones de la GUI
//    QObject::connect(this, SIGNAL(statusTool(int )),showModel, SLOT(setTool(int )));
    connect(main_window_ui_->actionOpen,   SIGNAL(triggered()), this, SLOT(on_actionOpen_triggered()));
    connect(main_window_ui_->pushButton,   SIGNAL(clicked()),   this, SLOT(on_pushButton_clicked()));
//    connect(main_window_ui_.pushButton_2, SIGNAL(clicked()),   this, SLOT(on_pushButton_2_clicked()));
//    connect(main_window_ui_.pushButton_4, SIGNAL(clicked()),   this, SLOT(on_pushButton_4_clicked()));
//    connect(SecondWindowUI.pushButton,    SIGNAL(clicked()),   this, SLOT(on_pushButton_SW_clicked()));
//    connect(thWindowUI.pushButton,        SIGNAL(clicked()),   this, SLOT(on_pushButton_SW_clicked()));
//    connect(frWindowUI.pushButton,        SIGNAL(clicked()),   this, SLOT(on_pushButton_SW_clicked()));

    //Cinematica Inversa
    //Execute IK
    connect(main_window_ui_->checkBox,     SIGNAL(toggled(bool)),SLOT(executeIK()));
    //Execute IK
    connect(main_window_ui_->xSlider,      SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    connect(main_window_ui_->ySlider,      SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    connect(main_window_ui_->zSlider,      SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    connect(main_window_ui_->rollSlider,   SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    connect(main_window_ui_->pitchSlider,  SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    connect(main_window_ui_->yawSlider,    SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));

    connect(main_window_ui_->xBox,         SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    connect(main_window_ui_->yBox,         SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    connect(main_window_ui_->zBox,         SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    connect(main_window_ui_->rollBox,      SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    connect(main_window_ui_->pitchBox,     SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    connect(main_window_ui_->yawBox,       SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    //Cinematica Inversa

    //Control de dialer y spinbox activos
    connect(main_window_ui_->checkBox2DOFs, SIGNAL(toggled(bool)), SLOT(on_2DOF()));
    connect(main_window_ui_->checkBox2DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    connect(main_window_ui_->checkBox3DOFs, SIGNAL(toggled(bool)), SLOT(on_3DOF()));
    connect(main_window_ui_->checkBox3DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    connect(main_window_ui_->checkBox4DOFs, SIGNAL(toggled(bool)), SLOT(on_4DOF()));
    connect(main_window_ui_->checkBox4DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    connect(main_window_ui_->checkBox5DOFs, SIGNAL(toggled(bool)), SLOT(on_5DOF()));
    connect(main_window_ui_->checkBox5DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    connect(main_window_ui_->checkBox6DOFs, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    connect(main_window_ui_->checkBox6DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    //Cinematica Directa
    //Execute FK
    connect(main_window_ui_->checkBox_2,     SIGNAL(toggled(bool)),SLOT(executeFK()));
    //Execute FK
    connect(main_window_ui_->dial1DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    connect(main_window_ui_->dial2DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    connect(main_window_ui_->dial3DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    connect(main_window_ui_->dial4DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    connect(main_window_ui_->dial5DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    connect(main_window_ui_->dial6DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));

    connect(main_window_ui_->spinBox1DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    connect(main_window_ui_->spinBox2DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    connect(main_window_ui_->spinBox3DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    connect(main_window_ui_->spinBox4DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    connect(main_window_ui_->spinBox5DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    connect(main_window_ui_->spinBox6DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    //Cinematica Directa


    connect(main_window_ui_->checkBox6DOFI, SIGNAL(toggled(bool)), SLOT(on6DOFI_URDF()));
    connect(main_window_ui_->checkBox5DOFI, SIGNAL(toggled(bool)), SLOT(on5DOFI_URDF()));
    connect(main_window_ui_->checkBox4DOFI, SIGNAL(toggled(bool)), SLOT(on4DOFI_URDF()));
    connect(main_window_ui_->checkBox3DOFI, SIGNAL(toggled(bool)), SLOT(on3DOFI_URDF()));
    connect(main_window_ui_->checkBox2DOFI, SIGNAL(toggled(bool)), SLOT(on2DOFI_URDF()));
    connect(main_window_ui_->checkBox2DOFs, SIGNAL(toggled(bool)), SLOT(on2DOFs_URDF()));
    connect(main_window_ui_->checkBox3DOFs, SIGNAL(toggled(bool)), SLOT(on3DOFs_URDF()));
    connect(main_window_ui_->checkBox4DOFs, SIGNAL(toggled(bool)), SLOT(on4DOFs_URDF()));

    //KeySecuence
//    main_window_ui_->checkBox4DOFI->setShortcut( QKeySequence( QString( "Ctrl+1" )));

//    //ToolTip
//    main_window_ui_->checkBox4DOFI->setToolTip("Robot - Kuka Modelo KR2100, Ctrl+1");
//    main_window_ui_->comboBox->setToolTip("Elige los perfiles de /nvisualización de tu modelo");



//   QObject::connect(main_window_ui_.checkBox_3,    SIGNAL(stateChanged(int)), this, SLOT(on_checkBox_3_toggled(int)));
//   QObject::connect(main_window_ui_.checkBox_2,    SIGNAL(stateChanged(int)), this, SLOT(on_checkBox_2_toggled(int)));
 //  QObject::connect(main_window_ui_.comboBox,      SIGNAL(activated(int)), this, SLOT(on_comboBox_activated(int)));
   connect(main_window_ui_->comboBox,      SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_currentIndexChanged(int)));
   connect(main_window_ui_->comboBox_2,    SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_2_currentIndexChanged(int)));
//   connect(main_window_ui_->comboBox_2,    SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_2_currentIndexChanged(int)));



//offWidgets();

QTemporaryDir temporaryDir2;
QFile::copy(":/robots/URDF/modelos/uni.urdf", temporaryDir2.path() + "/uni.urdf");
std::ifstream selected_file(QString(temporaryDir2.path() + "/uni.urdf").toStdString().c_str());
std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
this->updateURDF(file_contents);

//QProcess *proc = new QProcess();
//proc->start("gnome-terminal --geometry=50x10-0-10 -x bash -c \"rosrun rvizglabre talker\"");


//main_window_ui_.dial1DOF->setMinimum(0);
//main_window_ui_.dial1DOF->setMaximum(10);

//     mRviz->datameasure(dataM);
//     main_window_ui_->label_60->setText(dataM);

publisher_thread_ = new boost::thread(boost::bind(&ROSGUI::publishJointStates, this));

}

ROSGUI::~ROSGUI()
{
  delete mRviz;
  if(publisher_thread_ != NULL)
    {
      publisher_thread_->interrupt();
      publisher_thread_->join();

      delete publisher_thread_;
    }

  if(robot_tree_ != NULL)
    delete robot_tree_;
  if(robot_state_pub_ != NULL)
    delete robot_state_pub_;
  delete main_window_ui_;
//  delete showModel;
}

//Funcionalidades Ventana principal
//Ventanas EMERGENTES TUTORIALES

//void ROSGUI::show()
//{
//  main_window_.show();
//}

//void ROSGUI::openDialoginfo()
//{
//   /* QMessageBox::StandardButton reply;
//    reply =*/ QMessageBox::information(this, tr("Teoria de Cinematica"), tr("<p>Se encuentra toda la informacion de cinematica directa, " \
//                                                                                "y Cinematica inversa en la pagina principal de este laboratorio virtual." \
//                                                                                "<p>Sigue las instrucciones de la guia del uso y ejemplos  " \
//                                                                                "Para el adecuado uso de esta ventana de practicas.")
//                                    );
////    if (reply == QMessageBox::Ok)
////        informationLabel->setText(tr("OK"));
////    else
////        informationLabel->setText(tr("Escape"));
//}

//void ROSGUI::openCI()
//{
//   thwindow->show();
//}

//void ROSGUI::openDH()
//{
//  fourwindow->show();
//}

void ROSGUI::on_pushButton_clicked()
{

//  ROSGUI::openDialoginfo();
  QMessageBox::information(this, tr("Teoria de Cinematica"), tr("<p>Se encuentra toda la informacion de cinematica directa, " \
                                                                                  "y Cinematica inversa en la pagina principal de este laboratorio virtual." \
                                                                                  "<p>Sigue las instrucciones de la guia del uso y ejemplos  " \
                                                                                  "Para el adecuado uso de esta ventana de practicas.")
                                      );

}


//void ROSGUI::on_pushButton_2_clicked()
//{

// openCI();

//}
//void ROSGUI::on_pushButton_4_clicked()
//{
//    openDH();
//}

//void ROSGUI::on_pushButton_SW_clicked()
//{
//  secwindow->close();
//  thwindow->close();
//  fourwindow->close();

//}

void ROSGUI::on_actionOpen_triggered()
{
//    file_name_ = QFileDialog::getOpenFileName(0, tr("Open URDF File Laboratory"), "/home/yesser/ros_qtc_plugin/src/urdf/", tr("URDF Files (*.urdf *.xml)"));
//                                                  //Nombre de ventana           //path de archivos                           //tipos de archivos
//    if(file_name_.isEmpty())
//        return;
//    printf("file selected: %s\n", qPrintable(file_name_));  //manda la informacion del archivo seleccionado

//    // convert the file to a string
//      std::ifstream selected_file(file_name_.toStdString().c_str());
//      std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
//      this->updateURDF(file_contents);
}

void ROSGUI::on_actionSave_triggered()
{

}

void ROSGUI::on_actionSave_as_triggered()
{

}


//void ROSGUI::on_actionExit_triggered()
//{
// main_window_.close();
//}


void ROSGUI::on2DOFI_URDF()
{
  main_window_ui_->comboBox->setCurrentIndex(0); // Shwo All Options Robot Arrows TF
  resetvalue();
  nh_.deleteParam("root_link");
  nh_.deleteParam("tip_link");
  nh_.setParam("root_link","base_link");
  nh_.setParam("tip_link","tool0");
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/irb5400.urdf", temporaryDir.path() + "/irb5400.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/irb5400.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);
  updatetoURDF();


}

void ROSGUI::on3DOFI_URDF()
{
  main_window_ui_->comboBox->setCurrentIndex(0); // Shwo All Options Robot Arrows TF
  resetvalue();
  nh_.deleteParam("root_link");
  nh_.deleteParam("tip_link");
  nh_.setParam("root_link","base_link");
  nh_.setParam("tip_link","link_7");
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/sia10f.urdf", temporaryDir.path() + "/sia10f.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/sia10f.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);
  updatetoURDF();

}

void ROSGUI::on4DOFI_URDF()
{
  main_window_ui_->comboBox->setCurrentIndex(0); // Shwo All Options Robot Arrows TF
  resetvalue();
  nh_.deleteParam("root_link");
  nh_.deleteParam("tip_link");
  nh_.setParam("root_link","base_link");
  nh_.setParam("tip_link","tool0");
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/kr210l150.urdf", temporaryDir.path() + "/kr210l150.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/kr210l150.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);
  updatetoURDF();

}

void ROSGUI::on5DOFI_URDF()
{
  main_window_ui_->comboBox->setCurrentIndex(0); // Shwo All Options Robot Arrows TF
  resetvalue();
  nh_.deleteParam("root_link");
  nh_.deleteParam("tip_link");
  nh_.setParam("root_link","base_link");
  nh_.setParam("tip_link","link_6");
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/mh5.urdf", temporaryDir.path() + "/mh5.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/mh5.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);
  updatetoURDF();

}
void ROSGUI::on6DOFI_URDF()
{

//  // SIN COPIA DE ARCHIVO

//    file_name_ = "/home/udp/ros_qtc_plugin/src/rvizglabre/modelos/irb120_3_58.urdf";


//    std::ifstream selected_file(file_name_.toStdString().c_str());


//  // SIN COPIA DE ARCHIVO

// CON COPIA DE ARCHIVO
  main_window_ui_->comboBox->setCurrentIndex(0); // Shwo All Options Robot Arrows TF
  resetvalue();
  nh_.deleteParam("root_link");
  nh_.deleteParam("tip_link");
  nh_.setParam("root_link","base_link");
  nh_.setParam("tip_link","tool0");
   QTemporaryDir temporaryDir;
   QFile::copy(":/robots/URDF/modelos/irb120_3_58.urdf", temporaryDir.path() + "/irb120_3_58.urdf");
   std::ifstream selected_file(QString(temporaryDir.path() + "/irb120_3_58.urdf").toStdString().c_str());

// CON COPIA DE ARCHIVO

  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());

//  msg->name = {"joint_1","joint_2","joint_3","joint_4","joint_5","joint_6"};
//  msg->position = {0.0, 0.05235092341899872, 0.0, 1.518426775932312, 0.0, 0.9599822759628296, 0.0};
  this->updateURDF(file_contents);
  updatetoURDF();


}


void ROSGUI::on4DOFs_URDF()
{

//  file_name_ = "/home/udp/ros_qtc_plugin/src/urdf/urdf/robot1.urdf";
////  std::string file_contents =
//  std::ifstream selected_file(file_name_.toStdString().c_str());
//  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
//  this->updateURDF(file_contents);

  QTemporaryDir temporaryDir2;
  QFile::copy(":/robots/URDF/modelos/irb5400.urdf", temporaryDir2.path() + "/irb5400.urdf");
  std::ifstream selected_file(QString(temporaryDir2.path() + "/irb5400.urdf").toStdString().c_str());

// CON COPIA DE ARCHIVO

 std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());

 this->updateURDF(file_contents);
 updatetoURDF();

}

void ROSGUI::on2DOFs_URDF()
{
  main_window_ui_->comboBox->setCurrentIndex(0); // Shwo All Options Robot Arrows TF
  resetvalue();
  nh_.deleteParam("root_link");
  nh_.deleteParam("tip_link");
  nh_.setParam("root_link","base_link");
  nh_.setParam("tip_link","tool0");
  QTemporaryDir temporaryDir2;
  QFile::copy(":/robots/URDF/modelos/two_link.urdf", temporaryDir2.path() + "/two_link.urdf");
  std::ifstream selected_file(QString(temporaryDir2.path() + "/two_link.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);
  updatetoURDF();

}
void ROSGUI::on3DOFs_URDF()
{
  main_window_ui_->comboBox->setCurrentIndex(0); // Shwo All Options Robot Arrows TF
  resetvalue();
  nh_.deleteParam("root_link");
  nh_.deleteParam("tip_link");
  nh_.setParam("root_link","base_link");
  nh_.setParam("tip_link","tool0");
  QTemporaryDir temporaryDir2;
  QFile::copy(":/robots/URDF/modelos/3dof.urdf", temporaryDir2.path() + "/3dof.urdf");
  std::ifstream selected_file(QString(temporaryDir2.path() + "/3dof.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);
  updatetoURDF();

}




void ROSGUI::updateURDF(const std::string& urdf)
{

//  std::string param_nameR = "robot_description";
//  std::string full_param_name;
//  std::string xml_string;
//  urdf::Model urdf_model;
//  nh_.searchParam(param_nameR, full_param_name);
//    if (nh_.hasParam(full_param_name)){nh_.getParam(full_param_name.c_str(), xml_string);}
//    if (!urdf_model.initString(xml_string))    //Si se abre desde una direccion de ruta de archivo .initFile
//    {
//        ROS_ERROR("Failed to parse urdf file in model param");
//        nh_.shutdown();
//        //return false;
//    }

//  XmlRpc::XmlRpcValue robot_description(xml_string);
//  nh_.setParam("my_lab_uni/robot_description", robot_description);   // nh_. Node handle publicador de los parametros urdf del robot
////  boost::mutex::scoped_lock state_pub_lock(state_pub_mutex_);
///
  XmlRpc::XmlRpcValue robot_description(urdf);
    nh_.setParam("my_lab_uni/robot_description", robot_description);   // nh_. Node handle publicador de los parametros urdf del robot
  //  boost::mutex::scoped_lock state_pub_lock(state_pub_mutex_);

    if(robot_tree_ != NULL)
      delete robot_tree_;
    if(robot_state_pub_ != NULL)
      delete robot_state_pub_;

    robot_tree_ = new KDL::Tree();
    if(!kdl_parser::treeFromString(urdf, *robot_tree_))
    {
      ROS_ERROR("Failed to construct KDL tree");
      return;
    }




//  if(robot_tree_ != NULL)
//    delete robot_tree_;
//  if(robot_state_pub_ != NULL)
//    delete robot_state_pub_;

//  robot_tree_ = new KDL::Tree();
//  if(!kdl_parser::treeFromString(xml_string, *robot_tree_))
//  {
//    ROS_ERROR("Failed to construct KDL tree");
//    return;
//  }

  // create a robot state publisher from the tree
  robot_state_pub_ = new robot_state_publisher::RobotStatePublisher(*robot_tree_);

  // now create a map with joint name and positions
  joint_positions_.clear();
  const std::map<std::string, KDL::TreeElement>& segments = robot_tree_->getSegments();
  for(std::map<std::string, KDL::TreeElement>::const_iterator it=segments.begin();
    it != segments.end(); it++)
  {
    joint_positions_[it->second.segment.getJoint().getName()] = 0.0;

  }

  // refresh the preview
  mRviz->refresh("my_lab_uni/" + robot_tree_->getRootSegment()->first);

 // mRviz->subscribeTopics("joint_states");

}

void ROSGUI::publishJointStates()
{
  ros::Rate loop_rate(10);

  while(true)
  {
    { // lock the state publisher objects and run
      boost::mutex::scoped_lock state_pub_lock(state_pub_mutex_);
      if(robot_state_pub_ != NULL)
      {
         robot_state_pub_->publishTransforms(joint_positions_, ros::Time::now(), "my_lab_uni");
         robot_state_pub_->publishFixedTransforms("my_lab_uni");
//         auto it2 = joint_positions_.rbegin();
//         std::cout << it2->first << " : " << it2->second << std::endl;
//         it2++;
//         std::cout << it2->first << " : " << it2->second << std::endl;
//         it2++;
//         std::cout << it2->first << " : " << it2->second << std::endl;
//         it2++;
//         std::cout << it2->first << " : " << it2->second << std::endl;
//         it2++;
//         std::cout << it2->first << " : " << it2->second << std::endl;
//         it2++;
//         std::cout << it2->first << " : " << it2->second << std::endl;
//         it2++;


//         for(int i,)
         //ROS_INFO_STREAM(joint_positions_.size());
        //  ROS_INFO(joint_positions_);
        // sensor_msgs::JointState::ConstPtr& msg;
        // msg->fl;
         //msg->name = {"joint_1","joint_2","joint_3","joint_4","joint_5","joint_6"};

         //msg->position = {0.0, 0.05235092341899872, 0.0, 1.518426775932312, 0.0, 0.9599822759628296, 0.0};
       //  ROS_INFO("Joint1=%f Joint2=%f", msg, msg);
        // ROS_INFO("Published joint state info");

        // ROS_INFO(" Lower %f \n Upper %f",ROSGUI::lower_limits[1], ROSGUI::upper_limits[1]);
      }
    }
    try {
      boost::this_thread::interruption_point();
    } catch(const boost::thread_interrupted& o) {
      break; // quit the thread's loop
    }


    loop_rate.sleep();
  }

}

void ROSGUI::updateSpinboxes()
{
        main_window_ui_->yBox->    blockSignals(true);
        main_window_ui_->zBox->    blockSignals(true);
        main_window_ui_->rollBox-> blockSignals(true);
        main_window_ui_->pitchBox->blockSignals(true);
        main_window_ui_->yawBox->  blockSignals(true);

        main_window_ui_->xBox->    setValue((main_window_ui_->xSlider->value() * FACTOR));
        main_window_ui_->yBox->    setValue((main_window_ui_->ySlider->value() * FACTOR));
        main_window_ui_->zBox->    setValue((main_window_ui_->zSlider->value() * FACTOR));
        main_window_ui_->rollBox-> setValue((main_window_ui_->rollSlider->value() * FACTOR));
        main_window_ui_->pitchBox->setValue((main_window_ui_->pitchSlider->value() * FACTOR));
        main_window_ui_->yawBox->  setValue((main_window_ui_->yawSlider->value() * FACTOR));


        main_window_ui_->xBox->    blockSignals(false);
        main_window_ui_->yBox->    blockSignals(false);
        main_window_ui_->zBox->    blockSignals(false);
        main_window_ui_->rollBox-> blockSignals(false);
        main_window_ui_->pitchBox->blockSignals(false);
        main_window_ui_->yawBox->  blockSignals(false);

}
void ROSGUI::updateSlider()
{
        main_window_ui_->xSlider->    blockSignals(true);
        main_window_ui_->ySlider->    blockSignals(true);
        main_window_ui_->zSlider->    blockSignals(true);
        main_window_ui_->rollSlider-> blockSignals(true);
        main_window_ui_->pitchSlider->blockSignals(true);
        main_window_ui_->yawSlider->  blockSignals(true);

        main_window_ui_->xSlider->    setValue((main_window_ui_->xBox->value() / FACTOR));
        main_window_ui_->ySlider->    setValue((main_window_ui_->yBox->value() / FACTOR));
        main_window_ui_->zSlider->    setValue((main_window_ui_->zBox->value() / FACTOR));
        main_window_ui_->rollSlider-> setValue((main_window_ui_->rollBox->value() / FACTOR));
        main_window_ui_->pitchSlider->setValue((main_window_ui_->pitchBox->value() / FACTOR));
        main_window_ui_->yawSlider->  setValue((main_window_ui_->yawBox->value() / FACTOR));



        main_window_ui_->xSlider->    blockSignals(false);
        main_window_ui_->ySlider->    blockSignals(false);
        main_window_ui_->zSlider->    blockSignals(false);
        main_window_ui_->rollSlider-> blockSignals(false);
        main_window_ui_->pitchSlider->blockSignals(false);
        main_window_ui_->yawSlider->  blockSignals(false);

}

void ROSGUI::updateDialer()
{


  main_window_ui_->dial1DOF->    blockSignals(true);
  main_window_ui_->dial2DOF->    blockSignals(true);
  main_window_ui_->dial3DOF->    blockSignals(true);
  main_window_ui_->dial4DOF->    blockSignals(true);
  main_window_ui_->dial5DOF->    blockSignals(true);
  main_window_ui_->dial6DOF->    blockSignals(true);

  main_window_ui_->dial1DOF->    setValue((main_window_ui_->spinBox1DOF->value() / FACTOR));
  main_window_ui_->dial2DOF->    setValue((main_window_ui_->spinBox2DOF->value() / FACTOR));
  main_window_ui_->dial3DOF->    setValue((main_window_ui_->spinBox3DOF->value() / FACTOR));
  main_window_ui_->dial4DOF->    setValue((main_window_ui_->spinBox4DOF->value() / FACTOR));
  main_window_ui_->dial5DOF->    setValue((main_window_ui_->spinBox5DOF->value() / FACTOR));
  main_window_ui_->dial6DOF->    setValue((main_window_ui_->spinBox6DOF->value() / FACTOR));

//  joint_positions_["joint_1"]= main_window_ui_.spinBox1DOF->value()/ToG;
//  joint_positions_["joint_2"]= main_window_ui_.spinBox2DOF->value()/ToG;
//  joint_positions_["joint_3"]= main_window_ui_.spinBox3DOF->value()/ToG;
//  joint_positions_["joint_4"]= main_window_ui_.spinBox4DOF->value()/ToG;
//  joint_positions_["joint_5"]= main_window_ui_.spinBox5DOF->value()/ToG;
//  joint_positions_["joint_6"]= main_window_ui_.spinBox6DOF->value()/ToG;


  main_window_ui_->dial1DOF->    blockSignals(false);
  main_window_ui_->dial2DOF->    blockSignals(false);
  main_window_ui_->dial3DOF->    blockSignals(false);
  main_window_ui_->dial4DOF->    blockSignals(false);
  main_window_ui_->dial5DOF->    blockSignals(false);
  main_window_ui_->dial6DOF->    blockSignals(false);

//  j(nj)=0;
//  j(0) = main_window_ui_.spinBox1DOF->value()/ToG;
//  j(1) = main_window_ui_.spinBox2DOF->value()/ToG;
//  j(2) = main_window_ui_.spinBox3DOF->value()/ToG;
//  j(3) = main_window_ui_.spinBox4DOF->value()/ToG;
//  j(4) = main_window_ui_.spinBox5DOF->value()/ToG;
//  j(5) = main_window_ui_.spinBox6DOF->value()/ToG;

//  if(!jointsv->ForwardK(pos_mat, j, nj))
//  {
//           std::cerr << "Error at Publish Joint for FKinematics" <<std::endl;
//  }
//  stringX = QString::number(pos_mat.p.x()); //Convert Double to String
//  stringY = QString::number(pos_mat.p.y());
//  stringZ = QString::number(pos_mat.p.z());

//  pos_mat.M.GetRPY(roll, pitch, yaw);
//  stringYaw   = QString::number(yaw); //Convert Double to String
//  stringPitch = QString::number(pitch);
//  stringRoll  = QString::number(roll);

//   main_window_ui_.fkX->setText(stringX);
//   main_window_ui_.fkY->setText(stringY);
//   main_window_ui_.fkZ->setText(stringZ);

//   main_window_ui_.fkYaw->setText(stringYaw);
//   main_window_ui_.fkPitch->setText(stringPitch);
//   main_window_ui_.fkRoll->setText(stringRoll);


}

void ROSGUI::updateSpinboxesD()
{


    main_window_ui_->spinBox1DOF->    blockSignals(true);
    main_window_ui_->spinBox2DOF->    blockSignals(true);
    main_window_ui_->spinBox3DOF->    blockSignals(true);
    main_window_ui_->spinBox4DOF->    blockSignals(true);
    main_window_ui_->spinBox5DOF->    blockSignals(true);
    main_window_ui_->spinBox6DOF->    blockSignals(true);

    main_window_ui_->spinBox1DOF->    setValue((main_window_ui_->dial1DOF->value() * FACTOR));
    main_window_ui_->spinBox2DOF->    setValue((main_window_ui_->dial2DOF->value() * FACTOR));
    main_window_ui_->spinBox3DOF->    setValue((main_window_ui_->dial3DOF->value() * FACTOR));
    main_window_ui_->spinBox4DOF->    setValue((main_window_ui_->dial4DOF->value() * FACTOR));
    main_window_ui_->spinBox5DOF->    setValue((main_window_ui_->dial5DOF->value() * FACTOR));
    main_window_ui_->spinBox6DOF->    setValue((main_window_ui_->dial6DOF->value() * FACTOR));

    joint_positions_["joint_1"]= main_window_ui_->dial1DOF->value()/ToG;
    joint_positions_["joint_2"]= main_window_ui_->dial2DOF->value()/ToG;
    joint_positions_["joint_3"]= main_window_ui_->dial3DOF->value()/ToG;
    joint_positions_["joint_4"]= main_window_ui_->dial4DOF->value()/ToG;
    joint_positions_["joint_5"]= main_window_ui_->dial5DOF->value()/ToG;
    joint_positions_["joint_6"]= main_window_ui_->dial6DOF->value()/ToG;


    main_window_ui_->spinBox1DOF->    blockSignals(false);
    main_window_ui_->spinBox2DOF->    blockSignals(false);
    main_window_ui_->spinBox3DOF->    blockSignals(false);
    main_window_ui_->spinBox4DOF->    blockSignals(false);
    main_window_ui_->spinBox5DOF->    blockSignals(false);
    main_window_ui_->spinBox6DOF->    blockSignals(false);

    j(nj)=0;
    j(0) = main_window_ui_->spinBox1DOF->value()/ToG;
    j(1) = main_window_ui_->spinBox2DOF->value()/ToG;
    j(2) = main_window_ui_->spinBox3DOF->value()/ToG;
    j(3) = main_window_ui_->spinBox4DOF->value()/ToG;
    j(4) = main_window_ui_->spinBox5DOF->value()/ToG;
    j(5) = main_window_ui_->spinBox6DOF->value()/ToG;

    if(!jointsv->ForwardK(pos_mat, j, nj))
    {
             std::cerr << "Error at Publish Joint for FKinematics" <<std::endl;
    }
    stringX = QString::number(pos_mat.p.x()); //Convert Double to String
    stringY = QString::number(pos_mat.p.y());
    stringZ = QString::number(pos_mat.p.z());

    pos_mat.M.GetRPY(roll, pitch, yaw);
    stringYaw   = QString::number(yaw*ToG); //Convert Double to String
    stringPitch = QString::number(pitch*ToG);
    stringRoll  = QString::number(roll*ToG);

     main_window_ui_->fkX->setText(stringX);
     main_window_ui_->fkY->setText(stringY);
     main_window_ui_->fkZ->setText(stringZ);

     main_window_ui_->fkYaw->setText(stringYaw);
     main_window_ui_->fkPitch->setText(stringPitch);
     main_window_ui_->fkRoll->setText(stringRoll);

//Vigir
     jointV.resize(6);
     jointV[0] = main_window_ui_->spinBox1DOF->value()/ToG;
     jointV[1] = main_window_ui_->spinBox2DOF->value()/ToG;
     jointV[2] = main_window_ui_->spinBox3DOF->value()/ToG;
     jointV[3] = main_window_ui_->spinBox4DOF->value()/ToG;
     jointV[4] = main_window_ui_->spinBox5DOF->value()/ToG;
     jointV[5] = main_window_ui_->spinBox6DOF->value()/ToG;
     mRviz->refreshJoint(jointV);

}





void ROSGUI::on_2DOF()
{
        main_window_ui_->dial1DOF->   setEnabled(true);
        main_window_ui_->dial2DOF->   setEnabled(true);
        main_window_ui_->dial3DOF->   setEnabled(false);
        main_window_ui_->dial4DOF->   setEnabled(false);
        main_window_ui_->dial5DOF->   setEnabled(false);
        main_window_ui_->dial6DOF->   setEnabled(false);
        main_window_ui_->spinBox1DOF->setEnabled(true);
        main_window_ui_->spinBox2DOF->setEnabled(true);
        main_window_ui_->spinBox3DOF->setEnabled(false);
        main_window_ui_->spinBox4DOF->setEnabled(false);
        main_window_ui_->spinBox5DOF->setEnabled(false);
        main_window_ui_->spinBox6DOF->setEnabled(false);
}

void ROSGUI::on_3DOF()
{
        main_window_ui_->dial1DOF->   setEnabled(true);
        main_window_ui_->dial2DOF->   setEnabled(true);
        main_window_ui_->dial3DOF->   setEnabled(true);
        main_window_ui_->dial4DOF->   setEnabled(false);
        main_window_ui_->dial5DOF->   setEnabled(false);
        main_window_ui_->dial6DOF->   setEnabled(false);
        main_window_ui_->spinBox1DOF->setEnabled(true);
        main_window_ui_->spinBox2DOF->setEnabled(true);
        main_window_ui_->spinBox3DOF->setEnabled(true);
        main_window_ui_->spinBox4DOF->setEnabled(false);
        main_window_ui_->spinBox5DOF->setEnabled(false);
        main_window_ui_->spinBox6DOF->setEnabled(false);
}

void ROSGUI::on_4DOF()
{
        main_window_ui_->dial1DOF->   setEnabled(true);
        main_window_ui_->dial2DOF->   setEnabled(true);
        main_window_ui_->dial3DOF->   setEnabled(true);
        main_window_ui_->dial4DOF->   setEnabled(true);
        main_window_ui_->dial5DOF->   setEnabled(false);
        main_window_ui_->dial6DOF->   setEnabled(false);
        main_window_ui_->spinBox1DOF->setEnabled(true);
        main_window_ui_->spinBox2DOF->setEnabled(true);
        main_window_ui_->spinBox3DOF->setEnabled(true);
        main_window_ui_->spinBox4DOF->setEnabled(true);
        main_window_ui_->spinBox5DOF->setEnabled(false);
        main_window_ui_->spinBox6DOF->setEnabled(false);

}


void ROSGUI::on_5DOF()
{
        main_window_ui_->dial1DOF->   setEnabled(true);
        main_window_ui_->dial2DOF->   setEnabled(true);
        main_window_ui_->dial3DOF->   setEnabled(true);
        main_window_ui_->dial4DOF->   setEnabled(true);
        main_window_ui_->dial5DOF->   setEnabled(true);
        main_window_ui_->dial6DOF->   setEnabled(false);
        main_window_ui_->spinBox1DOF->setEnabled(true);
        main_window_ui_->spinBox2DOF->setEnabled(true);
        main_window_ui_->spinBox3DOF->setEnabled(true);
        main_window_ui_->spinBox4DOF->setEnabled(true);
        main_window_ui_->spinBox5DOF->setEnabled(true);
        main_window_ui_->spinBox6DOF->setEnabled(false);

}


void ROSGUI::on_6DOF()
{
       main_window_ui_->dial1DOF->   setEnabled(true);
       main_window_ui_->dial2DOF->   setEnabled(true);
       main_window_ui_->dial3DOF->   setEnabled(true);
       main_window_ui_->dial4DOF->   setEnabled(true);
       main_window_ui_->dial5DOF->   setEnabled(true);
       main_window_ui_->dial6DOF->   setEnabled(true);
       main_window_ui_->spinBox1DOF->setEnabled(true);
       main_window_ui_->spinBox2DOF->setEnabled(true);
       main_window_ui_->spinBox3DOF->setEnabled(true);
       main_window_ui_->spinBox4DOF->setEnabled(true);
       main_window_ui_->spinBox5DOF->setEnabled(true);
       main_window_ui_->spinBox6DOF->setEnabled(true);
}

void ROSGUI::offWidgets(){
  main_window_ui_->dial1DOF->   setEnabled(false);
  main_window_ui_->dial2DOF->   setEnabled(false);
  main_window_ui_->dial3DOF->   setEnabled(false);
  main_window_ui_->dial4DOF->   setEnabled(false);
  main_window_ui_->dial5DOF->   setEnabled(false);
  main_window_ui_->dial6DOF->   setEnabled(false);
  main_window_ui_->spinBox1DOF->setEnabled(false);
  main_window_ui_->spinBox2DOF->setEnabled(false);
  main_window_ui_->spinBox3DOF->setEnabled(false);
  main_window_ui_->spinBox4DOF->setEnabled(false);
  main_window_ui_->spinBox5DOF->setEnabled(false);
  main_window_ui_->spinBox6DOF->setEnabled(false);
}


//void ROSGUI::on_checkBox_2_toggled(int checked)
//{
//  if (checked==Qt::Checked)
//  {
//   mRviz->refreshTF(true);
//  }
//   else
//  {
// //tfrv=true;
//   mRviz->refreshTF(false);
//  }
//}

//void ROSGUI::on_checkBox_3_toggled(int checked=1)
//{
//  if (checked==Qt::Checked)
//  {
//   mRviz->refreshRM(true);
//  }
//   else
//  {
//    mRviz->refreshRM(false);
//  }
//}

void ROSGUI::on_comboBox_currentIndexChanged(int index=0)
{
  switch (index){
   case 0:
  {
    mRviz->refreshTF(false, false, false);
    mRviz->refreshRM(true);

   break;
  }
   case 1:
 {
    mRviz->refreshTF(true, true, false);
    mRviz->refreshRM(true);
   break;
 }
   case 2:
  {
    mRviz->refreshTF(true, true, true);
    mRviz->refreshRM(false);
   break;
  }
   case 3:
 {
    mRviz->refreshTF(true, true, false);
    mRviz->refreshRM(false);
   break;
 }
   case 4:
 {
    mRviz->refreshTF(true, true, true);
    mRviz->refreshRM(true);

   break;
   }
  }
}

void ROSGUI::on_comboBox_2_currentIndexChanged(int index=0)
{
  mRviz->setTool(index);
  if (index==4 || index==5){
  main_window_ui_->comboBox_2->setCurrentIndex(0);
  }
  Q_EMIT statusTool(index) ;

}


bool ROSGUI::init()
{


  jointsv = new modelparam;

 if(!jointsv->initmodel())
 {
          std::cerr << "Error at init model" <<std::endl;
         return false;
 }



 if(!jointsv->readJntLimitsFromROSParamURDF(
                                      joints_lower_limit_
                                      , joints_upper_limit_
                                      ))
 {
          std::cerr << "Error at readJntLimitsFromROSParamURDF" <<std::endl;
         return false;
 }


  if(!jointsv->ForwardK(pos_mat, j, nj))
  {
           std::cerr << "Error at Publish Joint for FKinematics" <<std::endl;
          return false;
  }
  KDL::Vector tcpXYZ  = KDL::Vector(0.0,0.0,0.0);
  KDL::Rotation tcpRPY= KDL::Rotation(0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0);


//  if (!jointsv->InverseK(tcpXYZ, tcpRPY, pos_joint));
//  {
//    std::cerr << "Error at Publish Joint for IKinematics" <<std::endl;
//   return false;
//  }

  j(nj) =  0;
//  j(1) =  0;
//  j(2) =  0;
//  j(3) =  0;
//  j(4) =  0;
//  j(5) =  0;
   return true;

}

std::vector<double> ROSGUI::getJointLowerLimits()
{   //joints= new modelparam;
      std::vector< double > readL = joints_lower_limit_;
    return readL;
}

std::vector< double > ROSGUI::getJointUpperLimits()
{
    std::vector< double > readU = joints_upper_limit_;
    return readU;
}


void ROSGUI::updatetoURDF()
{
  if(!init())
  {
     ROS_ERROR("Error publisher");
  }
  //radians for revolute, meters for prismatic
  joint_lower = getJointLowerLimits();
  joint_upper = getJointUpperLimits();
 // chainFK     = chain();


 std::cout << " px "<< pos_mat.p.x() <<	" py "<< pos_mat.p.y() <<	" pz "<< pos_mat.p.z() <<std::endl;

 // std::cout << std::setprecision(3) << pos_mat << "\t\t";

 stringX = QString::number(pos_mat.p.x()); //Convert Double to String
 stringY = QString::number(pos_mat.p.y());
 stringZ = QString::number(pos_mat.p.z());

 pos_mat.M.GetRPY(roll, pitch, yaw);
 stringYaw   = QString::number(yaw*ToG); //Convert Double to String
 stringPitch = QString::number(pitch*ToG);
 stringRoll  = QString::number(roll*ToG);

  main_window_ui_->fkX->setText(stringX);
  main_window_ui_->fkY->setText(stringY);
  main_window_ui_->fkZ->setText(stringZ);

  main_window_ui_->fkYaw->setText(stringYaw);
  main_window_ui_->fkPitch->setText(stringPitch);
  main_window_ui_->fkRoll->setText(stringRoll);



  main_window_ui_->dial1DOF->setMinimum(joint_lower[0]*ToG);
  main_window_ui_->dial1DOF->setMaximum(joint_upper[0]*ToG);
  main_window_ui_->dial1DOF->setSingleStep(1);
  main_window_ui_->spinBox1DOF->setMinimum(joint_lower[0]*ToG);
  main_window_ui_->spinBox1DOF->setMaximum(joint_upper[0]*ToG);
  main_window_ui_->spinBox1DOF->setSingleStep(1);

  main_window_ui_->dial2DOF->setMinimum(joint_lower[1]*ToG);
  main_window_ui_->dial2DOF->setMaximum(joint_upper[1]*ToG);
  main_window_ui_->dial2DOF->setSingleStep(1);
  main_window_ui_->spinBox2DOF->setMinimum(joint_lower[1]*ToG);
  main_window_ui_->spinBox2DOF->setMaximum(joint_upper[1]*ToG);
  main_window_ui_->spinBox2DOF->setSingleStep(1);

  main_window_ui_->dial3DOF->setMinimum(joint_lower[2]*ToG);
  main_window_ui_->dial3DOF->setMaximum(joint_upper[2]*ToG);
  main_window_ui_->dial3DOF->setSingleStep(1);
  main_window_ui_->spinBox3DOF->setMinimum(joint_lower[2]*ToG);
  main_window_ui_->spinBox3DOF->setMaximum(joint_upper[2]*ToG);
  main_window_ui_->spinBox3DOF->setSingleStep(1);

  main_window_ui_->dial4DOF->setMinimum(joint_lower[3]*ToG);
  main_window_ui_->dial4DOF->setMaximum(joint_upper[3]*ToG);
  main_window_ui_->dial4DOF->setSingleStep(1);
  main_window_ui_->spinBox4DOF->setMinimum(joint_lower[3]*ToG);
  main_window_ui_->spinBox4DOF->setMaximum(joint_upper[3]*ToG);
  main_window_ui_->spinBox4DOF->setSingleStep(1);

  main_window_ui_->dial5DOF->setMinimum(joint_lower[4]*ToG);
  main_window_ui_->dial5DOF->setMaximum(joint_upper[4]*ToG);
  main_window_ui_->dial5DOF->setSingleStep(1);
  main_window_ui_->spinBox5DOF->setMinimum(joint_lower[4]*ToG);
  main_window_ui_->spinBox5DOF->setMaximum(joint_upper[4]*ToG);
  main_window_ui_->spinBox5DOF->setSingleStep(1);

  main_window_ui_->dial6DOF->setMinimum(joint_lower[5]*ToG);
  main_window_ui_->dial6DOF->setMaximum(joint_upper[5]*ToG);
  main_window_ui_->dial6DOF->setSingleStep(1);
  main_window_ui_->spinBox6DOF->setMinimum(joint_lower[5]*ToG);
  main_window_ui_->spinBox6DOF->setMaximum(joint_upper[5]*ToG);
  main_window_ui_->spinBox6DOF->setSingleStep(1);
}

void ROSGUI::resetvalue(){
  main_window_ui_->dial1DOF->    setValue(resetv);
  main_window_ui_->dial2DOF->    setValue(resetv);
  main_window_ui_->dial3DOF->    setValue(resetv);
  main_window_ui_->dial4DOF->    setValue(resetv);
  main_window_ui_->dial5DOF->    setValue(resetv);
  main_window_ui_->dial6DOF->    setValue(resetv);


  main_window_ui_->spinBox1DOF->    setValue(resetv);
  main_window_ui_->spinBox2DOF->    setValue(resetv);
  main_window_ui_->spinBox3DOF->    setValue(resetv);
  main_window_ui_->spinBox4DOF->    setValue(resetv);
  main_window_ui_->spinBox5DOF->    setValue(resetv);
  main_window_ui_->spinBox6DOF->    setValue(resetv);
}
void ROSGUI::executeIK(){
//KDL::Vector tcpXYZ= KDL::Vector(main_window_ui_.xBox->value(),main_window_ui_.yBox->value(),main_window_ui_.zBox->value());
//KDL::Rotation tcpRPY= KDL::Rotation::RPY(main_window_ui_.xSlider->value(),main_window_ui_.ySlider->value(),main_window_ui_.zSlider->value());

  KDL::Vector tcpXYZ  = KDL::Vector(0.3,0.0,0.0);
  //KDL::Rotation tcpRPY= KDL::Rotation(0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0);
  KDL::Rotation tcpRPY= KDL::Rotation::RPY(0.7,0.0,0.0);

    if (!jointsv->InverseK(tcpXYZ, tcpRPY, pos_joint));
    {
      std::cerr << "Error at Publish Joint for IKinematics" <<std::endl;

    }


}

void ROSGUI::executeFK(){

  j(nj)=0;
  j(0) = main_window_ui_->spinBox1DOF->value()/ToG;
  j(1) = main_window_ui_->spinBox2DOF->value()/ToG;
  j(2) = main_window_ui_->spinBox3DOF->value()/ToG;
  j(3) = main_window_ui_->spinBox4DOF->value()/ToG;
  j(4) = main_window_ui_->spinBox5DOF->value()/ToG;
  j(5) = main_window_ui_->spinBox6DOF->value()/ToG;

  if(!jointsv->ForwardK(pos_mat, j, nj))
  {
           std::cerr << "Error at Publish Joint for FKinematics" <<std::endl;
  }
  stringX = QString::number(pos_mat.p.x()); //Convert Double to String
  stringY = QString::number(pos_mat.p.y());
  stringZ = QString::number(pos_mat.p.z());

  pos_mat.M.GetRPY(roll, pitch, yaw);
  stringYaw   = QString::number(yaw*ToG); //Convert Double to String
  stringPitch = QString::number(pitch*ToG);
  stringRoll  = QString::number(roll*ToG);

   main_window_ui_->fkX->setText(stringX);
   main_window_ui_->fkY->setText(stringY);
   main_window_ui_->fkZ->setText(stringZ);

   main_window_ui_->fkYaw->setText(stringYaw);
   main_window_ui_->fkPitch->setText(stringPitch);
   main_window_ui_->fkRoll->setText(stringRoll);

   joint_positions_["joint_1"]= main_window_ui_->dial1DOF->value()/ToG;
   joint_positions_["joint_2"]= main_window_ui_->dial2DOF->value()/ToG;
   joint_positions_["joint_3"]= main_window_ui_->dial3DOF->value()/ToG;
   joint_positions_["joint_4"]= main_window_ui_->dial4DOF->value()/ToG;
   joint_positions_["joint_5"]= main_window_ui_->dial5DOF->value()/ToG;
   joint_positions_["joint_6"]= main_window_ui_->dial6DOF->value()/ToG;


}


//void ROSGUI::on_comboBox_currentIndexChanged(int index)
//{

//}
