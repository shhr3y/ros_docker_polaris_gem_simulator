# Install script for directory: /root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins/msg" TYPE FILE FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/OverlayText.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/OverlayMenu.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/TransformableMarkerOperate.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/ObjectFitCommand.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/Pictogram.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/PictogramArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/RecordCommand.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/msg/StringStamped.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins/srv" TYPE FILE FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/srv/RequestMarkerOperate.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/srv/EusCommand.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/srv/Screenshot.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/safe_execute_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/jsk_rviz_plugins" TYPE FILE FILES "/root/simulator/devel/include/jsk_rviz_plugins/ClassificationResultVisualizerConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/jsk_rviz_plugins" TYPE FILE FILES "/root/simulator/devel/include/jsk_rviz_plugins/ContactStateMarkerConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/jsk_rviz_plugins" TYPE FILE FILES "/root/simulator/devel/include/jsk_rviz_plugins/OverlayTextInterfaceConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/root/simulator/devel/lib/python2.7/dist-packages/jsk_rviz_plugins/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages/jsk_rviz_plugins" TYPE DIRECTORY FILES "/root/simulator/devel/lib/python2.7/dist-packages/jsk_rviz_plugins/cfg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins/cmake" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/installspace/jsk_rviz_plugins-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/simulator/devel/include/jsk_rviz_plugins")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/roseus/ros/jsk_rviz_plugins")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/common-lisp/ros/jsk_rviz_plugins")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/gennodejs/ros/jsk_rviz_plugins")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/root/simulator/devel/lib/python2.7/dist-packages/jsk_rviz_plugins")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/root/simulator/devel/lib/python2.7/dist-packages/jsk_rviz_plugins" REGEX "/\\_\\_init\\_\\_\\.py$" EXCLUDE REGEX "/\\_\\_init\\_\\_\\.pyc$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/root/simulator/devel/lib/python2.7/dist-packages/jsk_rviz_plugins" FILES_MATCHING REGEX "/root/simulator/devel/lib/python2.7/dist-packages/jsk_rviz_plugins/.+/__init__.pyc?$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/installspace/jsk_rviz_plugins.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins/cmake" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/installspace/jsk_rviz_plugins-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins/cmake" TYPE FILE FILES
    "/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/installspace/jsk_rviz_pluginsConfig.cmake"
    "/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/installspace/jsk_rviz_pluginsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins" TYPE FILE FILES "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjsk_rviz_plugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjsk_rviz_plugins.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjsk_rviz_plugins.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/simulator/devel/lib/libjsk_rviz_plugins.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjsk_rviz_plugins.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjsk_rviz_plugins.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjsk_rviz_plugins.so"
         OLD_RPATH "/opt/ros/melodic/lib:/root/simulator/devel/lib:/usr/lib/x86_64-linux-gnu/hdf5/openmpi:/usr/lib/x86_64-linux-gnu/openmpi/lib:/opt/ros/melodic/share/rviz/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libjsk_rviz_plugins.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/jsk_rviz_plugins" TYPE DIRECTORY FILES "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/scripts/" USE_SOURCE_PERMISSIONS)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins" TYPE FILE FILES "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/plugin_description.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_rviz_plugins" TYPE DIRECTORY FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/cfg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/config"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/icons"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/launch"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/samples"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/test"
    USE_SOURCE_PERMISSIONS)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/jsk_rviz_plugins" TYPE DIRECTORY FILES "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/src/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

