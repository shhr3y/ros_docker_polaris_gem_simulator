// Generated by gencpp from file view_controller_msgs/CameraPlacement.msg
// DO NOT EDIT!


#ifndef VIEW_CONTROLLER_MSGS_MESSAGE_CAMERAPLACEMENT_H
#define VIEW_CONTROLLER_MSGS_MESSAGE_CAMERAPLACEMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/Vector3Stamped.h>

namespace view_controller_msgs
{
template <class ContainerAllocator>
struct CameraPlacement_
{
  typedef CameraPlacement_<ContainerAllocator> Type;

  CameraPlacement_()
    : interpolation_mode(0)
    , target_frame()
    , time_from_start()
    , eye()
    , focus()
    , up()
    , mouse_interaction_mode(0)
    , interaction_disabled(false)
    , allow_free_yaw_axis(false)  {
    }
  CameraPlacement_(const ContainerAllocator& _alloc)
    : interpolation_mode(0)
    , target_frame(_alloc)
    , time_from_start()
    , eye(_alloc)
    , focus(_alloc)
    , up(_alloc)
    , mouse_interaction_mode(0)
    , interaction_disabled(false)
    , allow_free_yaw_axis(false)  {
  (void)_alloc;
    }



   typedef uint8_t _interpolation_mode_type;
  _interpolation_mode_type interpolation_mode;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _target_frame_type;
  _target_frame_type target_frame;

   typedef ros::Duration _time_from_start_type;
  _time_from_start_type time_from_start;

   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _eye_type;
  _eye_type eye;

   typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _focus_type;
  _focus_type focus;

   typedef  ::geometry_msgs::Vector3Stamped_<ContainerAllocator>  _up_type;
  _up_type up;

   typedef uint8_t _mouse_interaction_mode_type;
  _mouse_interaction_mode_type mouse_interaction_mode;

   typedef uint8_t _interaction_disabled_type;
  _interaction_disabled_type interaction_disabled;

   typedef uint8_t _allow_free_yaw_axis_type;
  _allow_free_yaw_axis_type allow_free_yaw_axis;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(LINEAR)
  #undef LINEAR
#endif
#if defined(_WIN32) && defined(SPHERICAL)
  #undef SPHERICAL
#endif
#if defined(_WIN32) && defined(NO_CHANGE)
  #undef NO_CHANGE
#endif
#if defined(_WIN32) && defined(ORBIT)
  #undef ORBIT
#endif
#if defined(_WIN32) && defined(FPS)
  #undef FPS
#endif

  enum {
    LINEAR = 0u,
    SPHERICAL = 1u,
    NO_CHANGE = 0u,
    ORBIT = 1u,
    FPS = 2u,
  };


  typedef boost::shared_ptr< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> const> ConstPtr;

}; // struct CameraPlacement_

typedef ::view_controller_msgs::CameraPlacement_<std::allocator<void> > CameraPlacement;

typedef boost::shared_ptr< ::view_controller_msgs::CameraPlacement > CameraPlacementPtr;
typedef boost::shared_ptr< ::view_controller_msgs::CameraPlacement const> CameraPlacementConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::view_controller_msgs::CameraPlacement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::view_controller_msgs::CameraPlacement_<ContainerAllocator1> & lhs, const ::view_controller_msgs::CameraPlacement_<ContainerAllocator2> & rhs)
{
  return lhs.interpolation_mode == rhs.interpolation_mode &&
    lhs.target_frame == rhs.target_frame &&
    lhs.time_from_start == rhs.time_from_start &&
    lhs.eye == rhs.eye &&
    lhs.focus == rhs.focus &&
    lhs.up == rhs.up &&
    lhs.mouse_interaction_mode == rhs.mouse_interaction_mode &&
    lhs.interaction_disabled == rhs.interaction_disabled &&
    lhs.allow_free_yaw_axis == rhs.allow_free_yaw_axis;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::view_controller_msgs::CameraPlacement_<ContainerAllocator1> & lhs, const ::view_controller_msgs::CameraPlacement_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace view_controller_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "38be6efe15caa86e2c835dd05ab88393";
  }

  static const char* value(const ::view_controller_msgs::CameraPlacement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x38be6efe15caa86eULL;
  static const uint64_t static_value2 = 0x2c835dd05ab88393ULL;
};

template<class ContainerAllocator>
struct DataType< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "view_controller_msgs/CameraPlacement";
  }

  static const char* value(const ::view_controller_msgs::CameraPlacement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The interpolation mode to use during this step\n"
"uint8 interpolation_mode\n"
"uint8 LINEAR    = 0 # Positions will be linearly interpolated\n"
"uint8 SPHERICAL = 1 # Position and orientation will be interpolated in a spherical sense.\n"
"\n"
"# Sets this as the camera attached (fixed) frame before movement.\n"
"# An empty string will leave the attached frame unchanged. \n"
"string target_frame\n"
"\n"
"# When should this pose be reached?\n"
"# A negative value will disable the pose command altogether.\n"
"duration time_from_start\n"
"\n"
"# The frame-relative point for the camera.\n"
"geometry_msgs/PointStamped eye\n"
"\n"
"# The frame-relative point for the focus (or pivot for an Orbit controller).\n"
"geometry_msgs/PointStamped focus\n"
"\n"
"# The frame-relative vector that maps to \"up\" in the view plane.\n"
"# The zero-vector will default to +Z in the view controller's \"Target Frame\".\n"
"geometry_msgs/Vector3Stamped up\n"
"\n"
"# ------------------------------------------------\n"
"# Some paramters for interaction control\n"
"# ------------------------------------------------\n"
"# The interaction style that should be activated when movement is done.\n"
"uint8 mouse_interaction_mode\n"
"uint8 NO_CHANGE = 0 # Leaves the control style unchanged\n"
"uint8 ORBIT = 1 # Activates the Orbit-style controller\n"
"uint8 FPS   = 2 # Activates the FPS-style controller\n"
"\n"
"# A flag to enable or disable user interaction \n"
"# (defaults to false so that interaction is enabled)\n"
"bool interaction_disabled\n"
"\n"
"# A flag indicating if the camera yaw axis is fixed to +Z of the camera attached_frame\n"
"bool allow_free_yaw_axis\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PointStamped\n"
"# This represents a Point with reference coordinate frame and timestamp\n"
"Header header\n"
"Point point\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3Stamped\n"
"# This represents a Vector3 with reference coordinate frame and timestamp\n"
"Header header\n"
"Vector3 vector\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::view_controller_msgs::CameraPlacement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.interpolation_mode);
      stream.next(m.target_frame);
      stream.next(m.time_from_start);
      stream.next(m.eye);
      stream.next(m.focus);
      stream.next(m.up);
      stream.next(m.mouse_interaction_mode);
      stream.next(m.interaction_disabled);
      stream.next(m.allow_free_yaw_axis);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraPlacement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::view_controller_msgs::CameraPlacement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::view_controller_msgs::CameraPlacement_<ContainerAllocator>& v)
  {
    s << indent << "interpolation_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.interpolation_mode);
    s << indent << "target_frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.target_frame);
    s << indent << "time_from_start: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_from_start);
    s << indent << "eye: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.eye);
    s << indent << "focus: ";
    s << std::endl;
    Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.focus);
    s << indent << "up: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3Stamped_<ContainerAllocator> >::stream(s, indent + "  ", v.up);
    s << indent << "mouse_interaction_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mouse_interaction_mode);
    s << indent << "interaction_disabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.interaction_disabled);
    s << indent << "allow_free_yaw_axis: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.allow_free_yaw_axis);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VIEW_CONTROLLER_MSGS_MESSAGE_CAMERAPLACEMENT_H
