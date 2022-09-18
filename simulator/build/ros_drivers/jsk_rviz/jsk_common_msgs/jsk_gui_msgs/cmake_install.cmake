# Install script for directory: /root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/simulator/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_gui_msgs/msg" TYPE FILE FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/Action.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/MagneticField.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/Touch.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/AndroidSensor.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/Gravity.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/MultiTouch.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/TouchEvent.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/DeviceSensor.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/Tablet.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/VoiceMessage.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/msg/SlackMessage.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_gui_msgs/srv" TYPE FILE FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/srv/Query.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/srv/YesNo.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_gui_msgs/cmake" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/catkin_generated/installspace/jsk_gui_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/simulator/devel/include/jsk_gui_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/roseus/ros/jsk_gui_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/common-lisp/ros/jsk_gui_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/gennodejs/ros/jsk_gui_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/root/simulator/devel/lib/python2.7/dist-packages/jsk_gui_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/root/simulator/devel/lib/python2.7/dist-packages/jsk_gui_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/catkin_generated/installspace/jsk_gui_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_gui_msgs/cmake" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/catkin_generated/installspace/jsk_gui_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_gui_msgs/cmake" TYPE FILE FILES
    "/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/catkin_generated/installspace/jsk_gui_msgsConfig.cmake"
    "/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/catkin_generated/installspace/jsk_gui_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_gui_msgs" TYPE FILE FILES "/root/simulator/src/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/package.xml")
endif()

