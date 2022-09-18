# Install script for directory: /root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_recognition_msgs/msg" TYPE FILE FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Accuracy.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/BoundingBoxArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/BoundingBoxMovement.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/BoundingBox.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/BoundingBoxArrayWithCameraInfo.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Circle2DArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Circle2D.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ClassificationResult.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ClusterPointIndices.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ColorHistogramArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ColorHistogram.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/DepthCalibrationParameter.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/DepthErrorResult.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/HeightmapConfig.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Histogram.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/HistogramWithRangeBin.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/HistogramWithRange.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/HistogramWithRangeArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/HumanSkeleton.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/HumanSkeletonArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ICPResult.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ImageDifferenceValue.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Int32Stamped.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Label.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/LabelArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/LineArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Line.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ModelCoefficientsArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Object.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ObjectArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ParallelEdgeArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ParallelEdge.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/PlotData.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/PointsArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/PolygonArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/PosedCameraInfo.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/RectArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Rect.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/RotatedRect.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/RotatedRectStamped.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SimpleHandle.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SimpleOccupancyGridArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SimpleOccupancyGrid.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SlicedPointCloud.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SnapItRequest.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SparseImage.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SparseOccupancyGridArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SparseOccupancyGridCell.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SparseOccupancyGridColumn.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SparseOccupancyGrid.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Spectrum.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/TimeRange.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/TorusArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Torus.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/TrackerStatus.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/TrackingStatus.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/BoolStamped.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/VectorArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/WeightedPoseArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ContactSensor.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/ContactSensorArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/PlotDataArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/Segment.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SegmentStamped.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/SegmentArray.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/PeoplePose.msg"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/msg/PeoplePoseArray.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_recognition_msgs/srv" TYPE FILE FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/CallPolygon.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/CallSnapIt.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/CheckCircle.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/CheckCollision.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/EnvironmentLock.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/EuclideanSegment.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/ICPAlign.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/ICPAlignWithBox.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/NonMaximumSuppression.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/PolygonOnEnvironment.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/RobotPickupReleasePoint.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/SaveMesh.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/SetDepthCalibrationParameter.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/SetLabels.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/SetPointCloud2.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/SetTemplate.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/SnapFootstep.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/SwitchTopic.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/TowerPickUp.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/TowerRobotMoveCommand.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/TransformScreenpoint.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/UpdateOffset.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/WhiteBalancePoints.srv"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/srv/WhiteBalance.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_recognition_msgs/cmake" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/catkin_generated/installspace/jsk_recognition_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/root/simulator/devel/include/jsk_recognition_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/roseus/ros/jsk_recognition_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/common-lisp/ros/jsk_recognition_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/root/simulator/devel/share/gennodejs/ros/jsk_recognition_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/root/simulator/devel/lib/python2.7/dist-packages/jsk_recognition_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/root/simulator/devel/lib/python2.7/dist-packages/jsk_recognition_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/catkin_generated/installspace/jsk_recognition_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_recognition_msgs/cmake" TYPE FILE FILES "/root/simulator/build/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/catkin_generated/installspace/jsk_recognition_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_recognition_msgs/cmake" TYPE FILE FILES
    "/root/simulator/build/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/catkin_generated/installspace/jsk_recognition_msgsConfig.cmake"
    "/root/simulator/build/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/catkin_generated/installspace/jsk_recognition_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_recognition_msgs" TYPE FILE FILES "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/jsk_recognition_msgs" TYPE DIRECTORY FILES
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/sample"
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_recoginition/jsk_recognition_msgs/scripts"
    USE_SOURCE_PERMISSIONS)
endif()

