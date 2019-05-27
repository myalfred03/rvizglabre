cmake_minimum_required(VERSION 2.8.3)
project(rvizglabre)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
#  gazebo_plugins
#  gazebo_ros
  roscpp
  roslib
  std_msgs
  rviz
  rqt_gui
  rqt_gui_cpp
  actionlib
  moveit_ros_visualization
  #JogController
  moveit_core
  moveit_ros_planning
  moveit_visual_tools
  moveit_msgs
  pluginlib
  visualization_marker_tutorials
  interactive_markers
  #roboteditor
  urdf
  tf
  kdl_parser
  robot_state_publisher
  #roboteditor
  #Book
  #fake_localization
  laser_filters
  #map_server
  #book
  # FK KDL::ChainFkSolverPos_recursive
  kdl_conversions

  workspace_visualization
  # FK
)

#KDL WRAPPER
find_package(orocos_kdl REQUIRED)
#KDL WRAPPER

#roboteditor
find_package(Boost REQUIRED COMPONENTS thread)
#roboteditor
#add_definitions(-DQT_NO_KEYWORDS)

#find_package(gazebo REQUIRED)

#for GUI visualization
#find_package(Qt5 REQUIRED COMPONENTS Core Widgets X11Extras1)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5PrintSupport REQUIRED)

set(QT_LIBRARIES Qt5::Widgets)
set(QT_LIBRARIES Qt5::Core)
set(QT_LIBRARIES Qt5::Gui)
set(QT_LIBRARIES Qt5::PrintSupport)




find_library(KDL_LIBRARY REQUIRED NAMES orocos-kdl HINTS ${orocos_kdl_LIBRARY_DIRS})

catkin_package(
  INCLUDE_DIRS include   #Include propio del Nodo o Proyecto.
  LIBRARIES MyProject_Lib
  CATKIN_DEPENDS
  roscpp
  roslib
  std_msgs
  rqt_gui
  rqt_gui_cpp
  kdl_parser
  kdl_conversions
  actionlib
  moveit_ros_visualization
  moveit_core
  moveit_ros_planning
  moveit_visual_tools
  moveit_msgs
  workspace_visualization
  DEPENDS
  orocos_kdl
#roscpp
#gazebo_ros
#gazebp_plugins
#std_msgs
#roslib

)


link_directories(
#     ${GAZEBO_LIBRARY_DIRS}
     ${GTKMM_LIBRARY_DIRS}  #es la interfaz C++ oficial para
                            #la popular biblioteca de interfaz gráfica GTK+.
     ${orocos_kdl_LIBRARY_DIRS}
     ${catkin_LIBRARY_DIRS}
    )
include_directories( 
     ${CMAKE_CURRENT_BINARY_DIR}
     include
     ${Qt5Core_INCLUDE_DIRS}
     ${Qt5Widgets_INCLUDE_DIRS}
     ${Qt5Widgets_INCLUDE_DIRS}
     ${Qt5PrintSupport_INCLUDE_DIRS}
     ${QT_INCLUDES}
   #  ${Qt5X11Extras_INCLUDE_DIRS}
     ${orocos_kdl_INCLUDE_DIRS}
     ${Boost_INCLUDE_DIRS}
     ${catkin_INCLUDE_DIRS}
#     ${GAZEBO_INCLUDE_DIRS}
     ${roscpp_INCLUDE_DIRS}

)


# accediendo al RVIZ con QT VERSION




## Declare a C++ library
# add_library(${PROJECT_NAME}
#        src/rvizg.cpp


#        )

set (MyProject_Lib
          ##CPP
          src/modelparam.cpp
          ##Headers
          include/modelparam.h
    )

#set
 QT5_WRAP_UI (MyProjectLib_ui
               ui/rosgui.ui
#            ui/thirdwindow.ui
#            ui/fourth.ui
            #src/options.ui
            )

#set
 QT5_WRAP_CPP (MyProjectLib_hdr

                include/rosgui.h
		include/rviz_main.h
		include/rvizg_render.h
		include/rvizg_robot_motion.h
		include/qcustomplot.h
		include/tuning_ui_add.h
#	        include/plot.h
#                include/plotmodel.h
#                include/plotfiltermodel.h
#             include/secondwindow.h
#             include/thirdwindow.h
#             include/fourth.h
#                include/ui_rosgui.h
#             include/ui_secondwindow.h
#             include/ui_thirdwindow.h
#             include/ui_fourth.h
            )

#set 
QT5_ADD_RESOURCES(MyProjectLib_qrc
           resources.qrc
            )


set (MyProject_src
	  src/main.cpp
	  src/rosgui.cpp
          src/rviz_main.cpp
	  src/rvizg_render.cpp
          src/rvizg_robot_motion.cpp
	  src/qcustomplot.cpp
#	  src/plotwidget.cpp
#	  src/plot.cpp
#          src/plotmodel.cpp
#          src/plotfiltermodel.cpp
#	  src/secondwindow.cpp
#	  src/thirdwindow.cpp
#          src/fourth.cpp
	  ${MyProjectLib_ui}
          ${MyProjectLib_hdr}
	  ${MyProjectLib_qrc}
    )

#  add_executable(rvizg ${MyProject_src})
  #QT5_WRAP_CPP(MyProjectLib_hdr_MOC ${MyProjectLib_hdr})
 # QT5_WRAP_UI(MyProjectLib_ui_MOC ${MyProjectLib_ui})
  #QT5_ADD_RESOURCES(MyProjectLib_qrc_MOC ${MyProjectLib_qrc})

#endif()
add_library(lib ${MyProject_Lib})

target_link_libraries(lib /opt/ros/kinetic/lib/liborocos-kdl.so.1.3 ${catkin_LIBRARIES} ${orocos_kdl_LIBRARIES}    )

add_executable(rvizglabre  ${MyProject_src}  )# ${MyProjectLib_qrc_MOC} ${MyProjectLib_hdr_MOC} ${MyProjectLib_ui_MOC}

#add_executable(talker  src/robot_state.cpp)

#target_link_libraries(talker lib ${catkin_LIBRARIES} ${orocos_kdl_LIBRARIES})
#  add_dependencies(talker beginner_tutorials_generate_messages_cpp)
add_library(rvizglabrelib 	  src/rosgui.cpp ${UI_HEADERS})
target_link_libraries(rvizglabrelib Qt5::Widgets)

## Specify libraries to link a library or executable target against
target_link_libraries(rvizglabre
                         ${QT_LIBRARIES}   #Llamado QT Libraries
                         lib
                         ${catkin_LIBRARIES}
                         ${Boost_LIBRARIES}
                         ${orocos_kdl_LIBRARIES}
                         Qt5::Widgets
                         Qt5::Core
                         Qt5::Gui
                         rvizglabrelib
 )


add_definitions(-std=c++11
                )




