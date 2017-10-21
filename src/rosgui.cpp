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




#include "include/rosgui.h"
#include "include/ui_rosgui.h"
#include <include/rvizg.h>


#include "include/secondwindow.h"
#include "include/ui_secondwindow.h"
#include "include/thirdwindow.h"
#include "include/ui_thirdwindow.h"
#include "include/fourth.h"
#include "include/ui_fourth.h"
//#include "secondwindow.h"


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
const double FACTOR = 1;



ROSGUI::ROSGUI()
 : QMainWindow()
{
// proc = new QProcess();     //   <QtGui>
//  proc->start("gnome-terminal --geometry=50x10-0-10 -x bash -c \"roscore\" ");


    main_window_ui_.setupUi(&main_window_);

   // qnode->on_init();

    mRviz = new MyViz(main_window_ui_.mdiArea);


    // Add rviz to mdiArea as a subwindow and maximize it
//    ui->mdiArea->addSubWindow(mRviz, Qt::FramelessWindowHint); // FramelessWindowHint removes close, minimize and maximize title bar
//    mRviz->showMaximized();

    QPixmap pix(":/images/img/ROS_INDUSTRIAL.png");
    main_window_ui_.label_3->setPixmap(pix);
    publisher_thread_ = new boost::thread(boost::bind(&ROSGUI::publishJointStates, this));

    //Mostrando ventanas emergentes//

    //CD
    secwindow = new QMainWindow();
    Ui::SecondWindow SecondWindowUI;
    SecondWindowUI.setupUi(secwindow);
    QPixmap pix2(":/images/img/CD.png");
    SecondWindowUI.label->setPixmap(pix2);
    //CI
    thwindow = new QMainWindow();
    Ui::thirdwindow thWindowUI;
    thWindowUI.setupUi(thwindow);
    QPixmap pix3(":/images/img/CI.png");
    thWindowUI.label_2->setPixmap(pix3);
    //DH
    fourwindow = new QMainWindow();
    Ui::fourth frWindowUI;
    frWindowUI.setupUi(fourwindow);
    QPixmap pix4(":/images/img/dhparameter.png");
    frWindowUI.label_2->setPixmap(pix4);


    //QObject::connect(ui->)

    QObject::connect(main_window_ui_.actionOpen,   SIGNAL(triggered()), this, SLOT(on_actionOpen_triggered()));
    QObject::connect(main_window_ui_.pushButton_3, SIGNAL(clicked()),   this, SLOT(on_pushButton_3_clicked()));
    QObject::connect(main_window_ui_.pushButton_2, SIGNAL(clicked()),   this, SLOT(on_pushButton_2_clicked()));
    QObject::connect(main_window_ui_.pushButton_4, SIGNAL(clicked()),   this, SLOT(on_pushButton_4_clicked()));
    QObject::connect(SecondWindowUI.pushButton,    SIGNAL(clicked()),   this, SLOT(on_pushButton_SW_clicked()));
    QObject::connect(thWindowUI.pushButton,        SIGNAL(clicked()),   this, SLOT(on_pushButton_SW_clicked()));
    QObject::connect(frWindowUI.pushButton,        SIGNAL(clicked()),   this, SLOT(on_pushButton_SW_clicked()));


    QObject::connect(main_window_ui_.xSlider,      SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    QObject::connect(main_window_ui_.ySlider,      SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    QObject::connect(main_window_ui_.zSlider,      SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    QObject::connect(main_window_ui_.rollSlider,   SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    QObject::connect(main_window_ui_.pitchSlider,  SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));
    QObject::connect(main_window_ui_.yawSlider,    SIGNAL(valueChanged(int)), SLOT(updateSpinboxes()));

    QObject::connect(main_window_ui_.xBox,         SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    QObject::connect(main_window_ui_.yBox,         SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    QObject::connect(main_window_ui_.zBox,         SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    QObject::connect(main_window_ui_.rollBox,      SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    QObject::connect(main_window_ui_.pitchBox,     SIGNAL(valueChanged(double)), SLOT(updateSlider()));
    QObject::connect(main_window_ui_.yawBox,       SIGNAL(valueChanged(double)), SLOT(updateSlider()));

    QObject::connect(main_window_ui_.checkBox2DOFs, SIGNAL(toggled(bool)), SLOT(on_2DOF()));
    QObject::connect(main_window_ui_.checkBox2DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    QObject::connect(main_window_ui_.checkBox3DOFs, SIGNAL(toggled(bool)), SLOT(on_3DOF()));
    QObject::connect(main_window_ui_.checkBox3DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    QObject::connect(main_window_ui_.checkBox4DOFs, SIGNAL(toggled(bool)), SLOT(on_4DOF()));
    QObject::connect(main_window_ui_.checkBox4DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    QObject::connect(main_window_ui_.checkBox5DOFs, SIGNAL(toggled(bool)), SLOT(on_5DOF()));
    QObject::connect(main_window_ui_.checkBox5DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    QObject::connect(main_window_ui_.checkBox6DOFs, SIGNAL(toggled(bool)), SLOT(on_6DOF()));
    QObject::connect(main_window_ui_.checkBox6DOFI, SIGNAL(toggled(bool)), SLOT(on_6DOF()));

    QObject::connect(main_window_ui_.dial1DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    QObject::connect(main_window_ui_.dial2DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    QObject::connect(main_window_ui_.dial3DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    QObject::connect(main_window_ui_.dial4DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    QObject::connect(main_window_ui_.dial5DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));
    QObject::connect(main_window_ui_.dial6DOF, SIGNAL(valueChanged(int)), SLOT(updateSpinboxesD()));

    QObject::connect(main_window_ui_.spinBox1DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    QObject::connect(main_window_ui_.spinBox2DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    QObject::connect(main_window_ui_.spinBox3DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    QObject::connect(main_window_ui_.spinBox4DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    QObject::connect(main_window_ui_.spinBox5DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));
    QObject::connect(main_window_ui_.spinBox6DOF, SIGNAL(valueChanged(double)), SLOT(updateDialer()));


    QObject::connect(main_window_ui_.checkBox6DOFI, SIGNAL(toggled(bool)), SLOT(on6DOFI_URDF()));
    QObject::connect(main_window_ui_.checkBox5DOFI, SIGNAL(toggled(bool)), SLOT(on5DOFI_URDF()));
    QObject::connect(main_window_ui_.checkBox4DOFI, SIGNAL(toggled(bool)), SLOT(on4DOFI_URDF()));
    QObject::connect(main_window_ui_.checkBox3DOFI, SIGNAL(toggled(bool)), SLOT(on3DOFI_URDF()));
    QObject::connect(main_window_ui_.checkBox2DOFI, SIGNAL(toggled(bool)), SLOT(on2DOFI_URDF()));

    QObject::connect(main_window_ui_.checkBox4DOFs, SIGNAL(toggled(bool)), SLOT(on4DOFs_URDF()));




}

ROSGUI::~ROSGUI()
{
   // delete ui;
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

}

void ROSGUI::show()
{
  main_window_.show();
}

void ROSGUI::openCD()
{
    secwindow->show();
}

void ROSGUI::openCI()
{
   thwindow->show();
}

void ROSGUI::openDH()
{
  fourwindow->show();
}

void ROSGUI::on_pushButton_3_clicked()
{

  openCD();

}


void ROSGUI::on_pushButton_2_clicked()
{

 openCI();

}
void ROSGUI::on_pushButton_4_clicked()
{
    openDH();
}

void ROSGUI::on_pushButton_SW_clicked()
{
  secwindow->close();
  thwindow->close();
  fourwindow->close();

}

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


void ROSGUI::on_actionExit_triggered()
{
 main_window_.close();
}


void ROSGUI::on2DOFI_URDF()
{
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/irb5400.urdf", temporaryDir.path() + "/irb5400.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/irb5400.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);


}

void ROSGUI::on3DOFI_URDF()
{
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/bmda3.urdf", temporaryDir.path() + "/bmda3.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/bmda3.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);

}

void ROSGUI::on4DOFI_URDF()
{
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/kr210l150.urdf", temporaryDir.path() + "/kr210l150.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/kr210l150.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);

}

void ROSGUI::on5DOFI_URDF()
{
  QTemporaryDir temporaryDir;
  QFile::copy(":/robots/URDF/modelos/mh5.urdf", temporaryDir.path() + "/mh5.urdf");
  std::ifstream selected_file(QString(temporaryDir.path() + "/mh5.urdf").toStdString().c_str());
  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
  this->updateURDF(file_contents);

}
void ROSGUI::on6DOFI_URDF()
{

//  // SIN COPIA DE ARCHIVO

//    file_name_ = "/home/udp/ros_qtc_plugin/src/abb_experimental/abb_irb120_support/urdf/irb120_3_58.urdf";
//  //  std::string file_contents =
//    std::ifstream selected_file(file_name_.toStdString().c_str());

//  // SIN COPIA DE ARCHIVO

// CON COPIA DE ARCHIVO

   QTemporaryDir temporaryDir;
   QFile::copy(":/robots/URDF/modelos/irb120_3_58.urdf", temporaryDir.path() + "/irb120_3_58.urdf");
   std::ifstream selected_file(QString(temporaryDir.path() + "/irb120_3_58.urdf").toStdString().c_str());

// CON COPIA DE ARCHIVO

  std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());


  this->updateURDF(file_contents);


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






}



void ROSGUI::updateURDF(const std::string& urdf)
{
  XmlRpc::XmlRpcValue robot_description(urdf);
  nh_.setParam("robot_editor/robot_description", robot_description);
  boost::mutex::scoped_lock state_pub_lock(state_pub_mutex_);

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
  mRviz->refresh("robot_editor/" + robot_tree_->getRootSegment()->first);
// // // //
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
         robot_state_pub_->publishTransforms(joint_positions_, ros::Time::now(), "robot_editor");
         robot_state_pub_->publishFixedTransforms("robot_editor");
         ROS_INFO_STREAM(joint_positions_.size());
         ROS_INFO("Published joint state info");
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
        main_window_ui_.yBox->    blockSignals(true);
        main_window_ui_.zBox->    blockSignals(true);
        main_window_ui_.rollBox-> blockSignals(true);
        main_window_ui_.pitchBox->blockSignals(true);
        main_window_ui_.yawBox->  blockSignals(true);

        main_window_ui_.xBox->    setValue((main_window_ui_.xSlider->value() * FACTOR));
        main_window_ui_.yBox->    setValue((main_window_ui_.ySlider->value() * FACTOR));
        main_window_ui_.zBox->    setValue((main_window_ui_.zSlider->value() * FACTOR));
        main_window_ui_.rollBox-> setValue((main_window_ui_.rollSlider->value() * FACTOR));
        main_window_ui_.pitchBox->setValue((main_window_ui_.pitchSlider->value() * FACTOR));
        main_window_ui_.yawBox->  setValue((main_window_ui_.yawSlider->value() * FACTOR));


        main_window_ui_.xBox->    blockSignals(false);
        main_window_ui_.yBox->    blockSignals(false);
        main_window_ui_.zBox->    blockSignals(false);
        main_window_ui_.rollBox-> blockSignals(false);
        main_window_ui_.pitchBox->blockSignals(false);
        main_window_ui_.yawBox->  blockSignals(false);

}
void ROSGUI::updateSlider()
{
        main_window_ui_.xSlider->    blockSignals(true);
        main_window_ui_.ySlider->    blockSignals(true);
        main_window_ui_.zSlider->    blockSignals(true);
        main_window_ui_.rollSlider-> blockSignals(true);
        main_window_ui_.pitchSlider->blockSignals(true);
        main_window_ui_.yawSlider->  blockSignals(true);

        main_window_ui_.xSlider->    setValue((main_window_ui_.xBox->value() / FACTOR));
        main_window_ui_.ySlider->    setValue((main_window_ui_.yBox->value() / FACTOR));
        main_window_ui_.zSlider->    setValue((main_window_ui_.zBox->value() / FACTOR));
        main_window_ui_.rollSlider-> setValue((main_window_ui_.rollBox->value() / FACTOR));
        main_window_ui_.pitchSlider->setValue((main_window_ui_.pitchBox->value() / FACTOR));
        main_window_ui_.yawSlider->  setValue((main_window_ui_.yawBox->value() / FACTOR));


        main_window_ui_.xSlider->    blockSignals(false);
        main_window_ui_.ySlider->    blockSignals(false);
        main_window_ui_.zSlider->    blockSignals(false);
        main_window_ui_.rollSlider-> blockSignals(false);
        main_window_ui_.pitchSlider->blockSignals(false);
        main_window_ui_.yawSlider->  blockSignals(false);

}

void ROSGUI::updateDialer()
{


  main_window_ui_.dial1DOF->    blockSignals(true);
  main_window_ui_.dial2DOF->    blockSignals(true);
  main_window_ui_.dial3DOF->    blockSignals(true);
  main_window_ui_.dial4DOF->    blockSignals(true);
  main_window_ui_.dial5DOF->    blockSignals(true);
  main_window_ui_.dial6DOF->    blockSignals(true);

  main_window_ui_.dial1DOF->    setValue((main_window_ui_.spinBox1DOF->value() / FACTOR));
  main_window_ui_.dial2DOF->    setValue((main_window_ui_.spinBox2DOF->value() / FACTOR));
  main_window_ui_.dial3DOF->    setValue((main_window_ui_.spinBox3DOF->value() / FACTOR));
  main_window_ui_.dial4DOF->    setValue((main_window_ui_.spinBox4DOF->value() / FACTOR));
  main_window_ui_.dial5DOF->    setValue((main_window_ui_.spinBox5DOF->value() / FACTOR));
  main_window_ui_.dial6DOF->    setValue((main_window_ui_.spinBox6DOF->value() / FACTOR));


  main_window_ui_.dial1DOF->    blockSignals(false);
  main_window_ui_.dial2DOF->    blockSignals(false);
  main_window_ui_.dial3DOF->    blockSignals(false);
  main_window_ui_.dial4DOF->    blockSignals(false);
  main_window_ui_.dial5DOF->    blockSignals(false);
  main_window_ui_.dial6DOF->    blockSignals(false);

}

void ROSGUI::updateSpinboxesD()
{

    main_window_ui_.spinBox1DOF->    blockSignals(true);
    main_window_ui_.spinBox2DOF->    blockSignals(true);
    main_window_ui_.spinBox3DOF->    blockSignals(true);
    main_window_ui_.spinBox4DOF->    blockSignals(true);
    main_window_ui_.spinBox5DOF->    blockSignals(true);
    main_window_ui_.spinBox6DOF->    blockSignals(true);

    main_window_ui_.spinBox1DOF->    setValue((main_window_ui_.dial1DOF->value() * FACTOR));
    main_window_ui_.spinBox2DOF->    setValue((main_window_ui_.dial2DOF->value() * FACTOR));
    main_window_ui_.spinBox3DOF->    setValue((main_window_ui_.dial3DOF->value() * FACTOR));
    main_window_ui_.spinBox4DOF->    setValue((main_window_ui_.dial4DOF->value() * FACTOR));
    main_window_ui_.spinBox5DOF->    setValue((main_window_ui_.dial5DOF->value() * FACTOR));
    main_window_ui_.spinBox6DOF->    setValue((main_window_ui_.dial6DOF->value() * FACTOR));


    main_window_ui_.spinBox1DOF->    blockSignals(false);
    main_window_ui_.spinBox2DOF->    blockSignals(false);
    main_window_ui_.spinBox3DOF->    blockSignals(false);
    main_window_ui_.spinBox4DOF->    blockSignals(false);
    main_window_ui_.spinBox5DOF->    blockSignals(false);
    main_window_ui_.spinBox6DOF->    blockSignals(false);


}





void ROSGUI::on_2DOF()
{
        main_window_ui_.dial3DOF->   setEnabled(false);
        main_window_ui_.dial4DOF->   setEnabled(false);
        main_window_ui_.dial5DOF->   setEnabled(false);
        main_window_ui_.dial6DOF->   setEnabled(false);
        main_window_ui_.spinBox3DOF->setEnabled(false);
        main_window_ui_.spinBox4DOF->setEnabled(false);
        main_window_ui_.spinBox5DOF->setEnabled(false);
        main_window_ui_.spinBox6DOF->setEnabled(false);
}

void ROSGUI::on_3DOF()
{
        main_window_ui_.dial3DOF->   setEnabled(true);
        main_window_ui_.dial4DOF->   setEnabled(false);
        main_window_ui_.dial5DOF->   setEnabled(false);
        main_window_ui_.dial6DOF->   setEnabled(false);
        main_window_ui_.spinBox3DOF->setEnabled(true);
        main_window_ui_.spinBox4DOF->setEnabled(false);
        main_window_ui_.spinBox5DOF->setEnabled(false);
        main_window_ui_.spinBox6DOF->setEnabled(false);
}

void ROSGUI::on_4DOF()
{

        main_window_ui_.dial3DOF->   setEnabled(true);
        main_window_ui_.dial4DOF->   setEnabled(true);
        main_window_ui_.dial5DOF->   setEnabled(false);
        main_window_ui_.dial6DOF->   setEnabled(false);
        main_window_ui_.spinBox3DOF->setEnabled(true);
        main_window_ui_.spinBox4DOF->setEnabled(true);
        main_window_ui_.spinBox5DOF->setEnabled(false);
        main_window_ui_.spinBox6DOF->setEnabled(false);

}


void ROSGUI::on_5DOF()
{
        main_window_ui_.dial3DOF->   setEnabled(true);
        main_window_ui_.dial4DOF->   setEnabled(true);
        main_window_ui_.dial5DOF->   setEnabled(true);
        main_window_ui_.dial6DOF->   setEnabled(false);
        main_window_ui_.spinBox3DOF->setEnabled(true);
        main_window_ui_.spinBox4DOF->setEnabled(true);
        main_window_ui_.spinBox5DOF->setEnabled(true);
        main_window_ui_.spinBox6DOF->setEnabled(false);

}


void ROSGUI::on_6DOF()
{
       main_window_ui_.dial3DOF->   setEnabled(true);
       main_window_ui_.dial4DOF->   setEnabled(true);
       main_window_ui_.dial5DOF->   setEnabled(true);
       main_window_ui_.dial6DOF->   setEnabled(true);
       main_window_ui_.spinBox3DOF->setEnabled(true);
       main_window_ui_.spinBox4DOF->setEnabled(true);
       main_window_ui_.spinBox5DOF->setEnabled(true);
       main_window_ui_.spinBox6DOF->setEnabled(true);
}











//void ROSGUI::on_checkBox6DOFI_toggled(bool checked)
//{
//  if (checked == true){

//    file_name_ = "/home/yesser/ros_qtc_plugin/src/abb_experimental/abb_irb120_support/urdf/irb120_3_58.urdf";
//                    //  std::string file_contents =
//    std::ifstream selected_file(file_name_.toStdString().c_str());
//    std::string file_contents((std::istreambuf_iterator<char>(selected_file)), std::istreambuf_iterator<char>());
//    this->updateURDF(file_contents);

//  }
//  else{
//  delete robot_tree_;
//  delete robot_state_pub_;
//  }

//}
