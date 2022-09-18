#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/root/simulator/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/root/simulator/install/lib/python2.7/dist-packages:/root/simulator/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/root/simulator/build" \
    "/usr/bin/python2" \
    "/root/simulator/src/ros_drivers/jsk_rviz/jsk_rviz_plugins/setup.py" \
     \
    build --build-base "/root/simulator/build/ros_drivers/jsk_rviz/jsk_rviz_plugins" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/root/simulator/install" --install-scripts="/root/simulator/install/bin"
