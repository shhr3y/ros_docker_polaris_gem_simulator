// Generated by gencpp from file jsk_recognition_msgs/RobotPickupReleasePointRequest.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_ROBOTPICKUPRELEASEPOINTREQUEST_H
#define JSK_RECOGNITION_MSGS_MESSAGE_ROBOTPICKUPRELEASEPOINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace jsk_recognition_msgs
{
template <class ContainerAllocator>
struct RobotPickupReleasePointRequest_
{
  typedef RobotPickupReleasePointRequest_<ContainerAllocator> Type;

  RobotPickupReleasePointRequest_()
    : header()
    , target_point()
    , pick_or_release(0)  {
    }
  RobotPickupReleasePointRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , target_point(_alloc)
    , pick_or_release(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _target_point_type;
  _target_point_type target_point;

   typedef int8_t _pick_or_release_type;
  _pick_or_release_type pick_or_release;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RobotPickupReleasePointRequest_

typedef ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<std::allocator<void> > RobotPickupReleasePointRequest;

typedef boost::shared_ptr< ::jsk_recognition_msgs::RobotPickupReleasePointRequest > RobotPickupReleasePointRequestPtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::RobotPickupReleasePointRequest const> RobotPickupReleasePointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.target_point == rhs.target_point &&
    lhs.pick_or_release == rhs.pick_or_release;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deed053f0da0bc3c530cdf92dcf06642";
  }

  static const char* value(const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdeed053f0da0bc3cULL;
  static const uint64_t static_value2 = 0x530cdf92dcf06642ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/RobotPickupReleasePointRequest";
  }

  static const char* value(const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/Point target_point\n"
"byte pick_or_release  # 0 -> pick, 1 -> release\n"
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
;
  }

  static const char* value(const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.target_point);
      stream.next(m.pick_or_release);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotPickupReleasePointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::RobotPickupReleasePointRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "target_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.target_point);
    s << indent << "pick_or_release: ";
    Printer<int8_t>::stream(s, indent + "  ", v.pick_or_release);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_ROBOTPICKUPRELEASEPOINTREQUEST_H