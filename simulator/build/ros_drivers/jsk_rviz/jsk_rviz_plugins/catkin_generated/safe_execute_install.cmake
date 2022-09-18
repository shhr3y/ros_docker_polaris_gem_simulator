execute_process(COMMAND "/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
