// Generated by gencpp from file jsk_recognition_msgs/DepthErrorResult.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_DEPTHERRORRESULT_H
#define JSK_RECOGNITION_MSGS_MESSAGE_DEPTHERRORRESULT_H


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
struct DepthErrorResult_
{
  typedef DepthErrorResult_<ContainerAllocator> Type;

  DepthErrorResult_()
    : header()
    , u(0)
    , v(0)
    , center_u(0.0)
    , center_v(0.0)
    , true_depth(0.0)
    , observed_depth(0.0)  {
    }
  DepthErrorResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , u(0)
    , v(0)
    , center_u(0.0)
    , center_v(0.0)
    , true_depth(0.0)
    , observed_depth(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _u_type;
  _u_type u;

   typedef uint32_t _v_type;
  _v_type v;

   typedef float _center_u_type;
  _center_u_type center_u;

   typedef float _center_v_type;
  _center_v_type center_v;

   typedef float _true_depth_type;
  _true_depth_type true_depth;

   typedef float _observed_depth_type;
  _observed_depth_type observed_depth;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> const> ConstPtr;

}; // struct DepthErrorResult_

typedef ::jsk_recognition_msgs::DepthErrorResult_<std::allocator<void> > DepthErrorResult;

typedef boost::shared_ptr< ::jsk_recognition_msgs::DepthErrorResult > DepthErrorResultPtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::DepthErrorResult const> DepthErrorResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.u == rhs.u &&
    lhs.v == rhs.v &&
    lhs.center_u == rhs.center_u &&
    lhs.center_v == rhs.center_v &&
    lhs.true_depth == rhs.true_depth &&
    lhs.observed_depth == rhs.observed_depth;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cebbb2d000457fe5d971a29ee02ffb16";
  }

  static const char* value(const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcebbb2d000457fe5ULL;
  static const uint64_t static_value2 = 0xd971a29ee02ffb16ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/DepthErrorResult";
  }

  static const char* value(const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"uint32 u\n"
"uint32 v\n"
"float32 center_u\n"
"float32 center_v\n"
"float32 true_depth\n"
"float32 observed_depth\n"
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

  static const char* value(const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.u);
      stream.next(m.v);
      stream.next(m.center_u);
      stream.next(m.center_v);
      stream.next(m.true_depth);
      stream.next(m.observed_depth);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DepthErrorResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::DepthErrorResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "u: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.u);
    s << indent << "v: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.v);
    s << indent << "center_u: ";
    Printer<float>::stream(s, indent + "  ", v.center_u);
    s << indent << "center_v: ";
    Printer<float>::stream(s, indent + "  ", v.center_v);
    s << indent << "true_depth: ";
    Printer<float>::stream(s, indent + "  ", v.true_depth);
    s << indent << "observed_depth: ";
    Printer<float>::stream(s, indent + "  ", v.observed_depth);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_DEPTHERRORRESULT_H
