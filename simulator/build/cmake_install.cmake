# Install script for directory: /root/simulator/src

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/simulator/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/simulator/install" TYPE PROGRAM FILES "/root/simulator/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/simulator/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/simulator/install" TYPE PROGRAM FILES "/root/simulator/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/simulator/install/setup.bash;/root/simulator/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/simulator/install" TYPE FILE FILES
    "/root/simulator/build/catkin_generated/installspace/setup.bash"
    "/root/simulator/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/simulator/install/setup.sh;/root/simulator/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/simulator/install" TYPE FILE FILES
    "/root/simulator/build/catkin_generated/installspace/setup.sh"
    "/root/simulator/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/simulator/install/setup.zsh;/root/simulator/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/simulator/install" TYPE FILE FILES
    "/root/simulator/build/catkin_generated/installspace/setup.zsh"
    "/root/simulator/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/simulator/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/simulator/install" TYPE FILE FILES "/root/simulator/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/simulator/build/gtest/cmake_install.cmake")
  include("/root/simulator/build/gem_simulator/src/gem_launch/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/hector_gazebo/hector_gazebo/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/hector_gazebo/hector_gazebo_worlds/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/hector_gazebo/hector_sensors_gazebo/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/sicktoolbox/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_footstep_msgs/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_hark_msgs/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/people_msgs/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/velodyne_simulator/velodyne_description/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/velodyne_simulator/velodyne_simulator/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/view_controller_msgs/cmake_install.cmake")
  include("/root/simulator/build/vehicle_drivers/gem_pure_pursuit_sim/cmake_install.cmake")
  include("/root/simulator/build/vehicle_drivers/gem_stanley_sim/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_common_msgs/jsk_gui_msgs/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/sicktoolbox_wrapper/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/actor_collision/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/hector_gazebo/hector_gazebo_plugins/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_topic_tools/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_utils/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/hector_gazebo/hector_gazebo_thermal_camera/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/velodyne_simulator/velodyne_gazebo_plugins/cmake_install.cmake")
  include("/root/simulator/build/ros_drivers/waypoint_logger/cmake_install.cmake")
  include("/root/simulator/build/gem_simulator/src/gem_description/cmake_install.cmake")
  include("/root/simulator/build/gem_simulator/src/gem_gazebo/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/simulator/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
