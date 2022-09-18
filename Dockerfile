FROM osrf/ros:melodic-desktop-full

RUN apt-get -y update && apt-get install -y \
    iputils-ping \
    net-tools \
    wget \
    ros-melodic-joy \
    ros-melodic-teleop-twist-joy \
    ros-melodic-teleop-twist-keyboard \ 
    ros-melodic-laser-proc \
    ros-melodic-rgbd-launch \
    ros-melodic-depthimage-to-laserscan \
    ros-melodic-rosserial-arduino \ 
    ros-melodic-rosserial-python \
    ros-melodic-rosserial-server \ 
    ros-melodic-rosserial-client \ 
    ros-melodic-rosserial-msgs \
    ros-melodic-amcl \
    ros-melodic-map-server \
    ros-melodic-move-base \
    ros-melodic-urdf \
    ros-melodic-xacro \
    ros-melodic-compressed-image-transport \
    ros-melodic-rqt-image-view \
    ros-melodic-gmapping \
    ros-melodic-navigation \
    ros-melodic-interactive-markers \
    ros-melodic-tf2-geometry-msgs \
    ros-melodic-ackermann-msgs \
    ros-melodic-geographic-msgs \
    python-pip \
    python3-pip \
    python3-catkin-pkg-modules \
    python3-rospkg-modules \
    python3-empy

RUN pip3 install -U numpy pyyaml rospkg

COPY /simulator /root/simulator
RUN mkdir -p /root/catkin_ws/src
WORKDIR /root/catkin_ws
RUN /bin/bash -c "source /opt/ros/melodic/setup.bash"
RUN echo "source /opt/ros/melodic/setup.sh" >> /root/.bashrc
RUN echo "source /root/catkin_ws/devel/setup.bash" >> /root/.bashrc
WORKDIR /root/simulator