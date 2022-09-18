// Generated by gencpp from file jsk_recognition_msgs/Circle2D.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_CIRCLE2D_H
#define JSK_RECOGNITION_MSGS_MESSAGE_CIRCLE2D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace jsk_recognition_msgs
{
template <class ContainerAllocator>
struct Circle2D_
{
  typedef Circle2D_<ContainerAllocator> Type;

  Circle2D_()
    : header()
    , radius(0.0)
    , x(0.0)
    , y(0.0)  {
    }
  Circle2D_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , radius(0.0)
    , x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _radius_type;
  _radius_type radius;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> const> ConstPtr;

}; // struct Circle2D_

typedef ::jsk_recognition_msgs::Circle2D_<std::allocator<void> > Circle2D;

typedef boost::shared_ptr< ::jsk_recognition_msgs::Circle2D > Circle2DPtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::Circle2D const> Circle2DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.radius == rhs.radius &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2337fe90a715387bfdc3cf4b7fa2391e";
  }

  static const char* value(const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2337fe90a715387bULL;
  static const uint64_t static_value2 = 0xfdc3cf4b7fa2391eULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/Circle2D";
  }

  static const char* value(const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 radius\n"
"float64 x\n"
"float64 y\n"
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
;
  }

  static const char* value(const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.radius);
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Circle2D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::Circle2D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::Circle2D_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "radius: ";
    Printer<double>::stream(s, indent + "  ", v.radius);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_CIRCLE2D_H