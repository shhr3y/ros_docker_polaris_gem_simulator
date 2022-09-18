// Generated by gencpp from file jsk_recognition_msgs/ImageDifferenceValue.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_IMAGEDIFFERENCEVALUE_H
#define JSK_RECOGNITION_MSGS_MESSAGE_IMAGEDIFFERENCEVALUE_H


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
struct ImageDifferenceValue_
{
  typedef ImageDifferenceValue_<ContainerAllocator> Type;

  ImageDifferenceValue_()
    : header()
    , difference(0.0)  {
    }
  ImageDifferenceValue_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , difference(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _difference_type;
  _difference_type difference;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> const> ConstPtr;

}; // struct ImageDifferenceValue_

typedef ::jsk_recognition_msgs::ImageDifferenceValue_<std::allocator<void> > ImageDifferenceValue;

typedef boost::shared_ptr< ::jsk_recognition_msgs::ImageDifferenceValue > ImageDifferenceValuePtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::ImageDifferenceValue const> ImageDifferenceValueConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.difference == rhs.difference;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "80b6f355db87c1b2d8b04d2f620fe0a7";
  }

  static const char* value(const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x80b6f355db87c1b2ULL;
  static const uint64_t static_value2 = 0xd8b04d2f620fe0a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/ImageDifferenceValue";
  }

  static const char* value(const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float32 difference\n"
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

  static const char* value(const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.difference);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageDifferenceValue_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::ImageDifferenceValue_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "difference: ";
    Printer<float>::stream(s, indent + "  ", v.difference);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_IMAGEDIFFERENCEVALUE_H