cmake_minimum_required(VERSION 2.8.11)
project(rvizglabre)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  gazebo_plugins
  gazebo_ros
  roscpp
  roslib
  std_msgs
  rviz
  rqt_gui
  rqt_gui_cpp
  moveit_ros_visualization
  pluginlib
  visualization_marker_tutorials
  #roboteditor
  urdf
  tf
  kdl_parser
  robot_state_publisher
  #roboteditor
  #Book
  fake_localization
  laser_filters
  map_server
  #book
  # FK KDL::ChainFkSolverPos_recursive
  kdl_conversions
  # FK
)

#KDL WRAPPER
find_package(orocos_kdl REQUIRED)
#KDL WRAPPER

#roboteditor
find_package(Boost REQUIRED COMPONENTS thread)
#roboteditor
#add_definitions(-DQT_NO_KEYWORDS)


find_package(gazebo REQUIRED)

#for GUI visualization
#find_package(Qt5 REQUIRED COMPONENTS Core Widgets X11Extras1)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)

find_library(KDL_LIBRARY REQUIRED NAMES orocos-kdl HINTS ${orocos_kdl_LIBRARY_DIRS})

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES MyProject_Lib
  CATKIN_DEPENDS roscpp roslib std_msgs rqt_gui rqt_gui_cpp kdl_parser kdl_conversions
  DEPENDS
  orocos_kdl
#roscpp
gazebo_ros
gazebp_plugins
#std_msgs
#roslib

)


link_directories(
     ${GAZEBO_LIBRARY_DIRS}
     ${GTKMM_LIBRARY_DIRS}  #es la interfaz C++ oficial para
                            #la popular biblioteca de interfaz gráfica GTK+.
     ${orocos_kdl_LIBRARY_DIRS}
     ${catkin_LIBRARY_DIRS}
    )
include_directories(
 include
     ${Qt5Core_INCLUDE_DIRS}
     ${Qt5Widgets_INCLUDE_DIRS}
   #  ${Qt5X11Extras_INCLUDE_DIRS}
     ${orocos_kdl_INCLUDE_DIRS}
     ${Boost_INCLUDE_DIRS}
     ${catkin_INCLUDE_DIRS}
     ${GAZEBO_INCLUDE_DIRS}
     ${roscpp_INCLUDE_DIRS}
     ${Qt5Widgets_INCLUDE_DIRS}

)

include_directories (${PROJECT_SOURCE_DIR})
include_directories (${PROJECT_BINARY_DIR})
# accediendo al RVIZ con QT VERSION


set(QT_LIBRARIES Qt5::Widgets)


## Declare a C++ library
# add_library(${PROJECT_NAME}
#        src/rvizg.cpp


#        )

set (MyProject_src
	  src/rvizg.cpp
	  src/main.cpp
	  src/rosgui.cpp
	  src/secondwindow.cpp
	  src/thirdwindow.cpp
	  src/fourth.cpp

	 # ${MOC_FILES}
    )

set (MyProject_Lib
          ##CPP
          src/modelparam.cpp
          ##Headers
          include/modelparam.h
    )

set (MyProjectLib_ui
	    ui/rosgui.ui
	    ui/secondwindow.ui
	    ui/thirdwindow.ui
	    ui/fourth.ui
	    #src/options.ui
	    )

set (MyProjectLib_hdr

	     include/rvizg.h
	     include/rosgui.h
	     include/secondwindow.h
	     include/thirdwindow.h
             include/fourth.h
	     include/ui_rosgui.h
	     include/ui_secondwindow.h
	     include/ui_thirdwindow.h
             include/ui_fourth.h
	    )

set (MyProjectLib_qrc
	   resources.qrc
	    )



#  add_executable(rvizg ${MyProject_src})
  QT5_WRAP_CPP(MyProjectLib_hdr_MOC ${MyProjectLib_hdr})
  QT5_WRAP_UI(MyProjectLib_ui_MOC ${MyProjectLib_ui})
  QT5_ADD_RESOURCES(MyProjectLib_qrc_MOC ${MyProjectLib_qrc})

#endif()
add_library(lib ${MyProject_Lib})

target_link_libraries(lib /opt/ros/kinetic/lib/liborocos-kdl.so.1.3 ${catkin_LIBRARIES} ${orocos_kdl_LIBRARIES}    )

add_executable(rvizglabre  ${MyProject_src} ${MyProjectLib_hdr_MOC} ${MyProjectLib_ui_MOC} ${MyProjectLib_qrc_MOC})

add_executable(talker  src/robot_state.cpp)

target_link_libraries(talker lib ${catkin_LIBRARIES} ${orocos_kdl_LIBRARIES})
#  add_dependencies(talker beginner_tutorials_generate_messages_cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(rvizglabre lib 
                         ${QT_LIBRARIES}   #Llamado QT Libraries
                         ${catkin_LIBRARIES}
                         ${Boost_LIBRARIES}
                         ${orocos_kdl_LIBRARIES}
                         Qt5::Widgets
 )

add_definitions(-std=c++11
                )




