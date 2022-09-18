// Generated by gencpp from file jsk_recognition_msgs/Torus.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_TORUS_H
#define JSK_RECOGNITION_MSGS_MESSAGE_TORUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace jsk_recognition_msgs
{
template <class ContainerAllocator>
struct Torus_
{
  typedef Torus_<ContainerAllocator> Type;

  Torus_()
    : header()
    , failure(false)
    , pose()
    , large_radius(0.0)
    , small_radius(0.0)  {
    }
  Torus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , failure(false)
    , pose(_alloc)
    , large_radius(0.0)
    , small_radius(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _failure_type;
  _failure_type failure;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef double _large_radius_type;
  _large_radius_type large_radius;

   typedef double _small_radius_type;
  _small_radius_type small_radius;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::Torus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::Torus_<ContainerAllocator> const> ConstPtr;

}; // struct Torus_

typedef ::jsk_recognition_msgs::Torus_<std::allocator<void> > Torus;

typedef boost::shared_ptr< ::jsk_recognition_msgs::Torus > TorusPtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::Torus const> TorusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::Torus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::Torus_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::Torus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.failure == rhs.failure &&
    lhs.pose == rhs.pose &&
    lhs.large_radius == rhs.large_radius &&
    lhs.small_radius == rhs.small_radius;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::Torus_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::Torus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::Torus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::Torus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::Torus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7172d433485e406ce56f4cf6e9ab1062";
  }

  static const char* value(const ::jsk_recognition_msgs::Torus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7172d433485e406cULL;
  static const uint64_t static_value2 = 0xe56f4cf6e9ab1062ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/Torus";
  }

  static const char* value(const ::jsk_recognition_msgs::Torus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"bool failure\n"
"geometry_msgs/Pose pose\n"
"float64 large_radius\n"
"float64 small_radius\n"
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
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::jsk_recognition_msgs::Torus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.failure);
      stream.next(m.pose);
      stream.next(m.large_radius);
      stream.next(m.small_radius);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Torus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::Torus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::Torus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "failure: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.failure);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "large_radius: ";
    Printer<double>::stream(s, indent + "  ", v.large_radius);
    s << indent << "small_radius: ";
    Printer<double>::stream(s, indent + "  ", v.small_radius);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_TORUS_H