// Generated by gencpp from file jsk_recognition_msgs/LineArray.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_LINEARRAY_H
#define JSK_RECOGNITION_MSGS_MESSAGE_LINEARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <jsk_recognition_msgs/Line.h>

namespace jsk_recognition_msgs
{
template <class ContainerAllocator>
struct LineArray_
{
  typedef LineArray_<ContainerAllocator> Type;

  LineArray_()
    : header()
    , lines()  {
    }
  LineArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lines(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::jsk_recognition_msgs::Line_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::jsk_recognition_msgs::Line_<ContainerAllocator> >::other >  _lines_type;
  _lines_type lines;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> const> ConstPtr;

}; // struct LineArray_

typedef ::jsk_recognition_msgs::LineArray_<std::allocator<void> > LineArray;

typedef boost::shared_ptr< ::jsk_recognition_msgs::LineArray > LineArrayPtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::LineArray const> LineArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::LineArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::LineArray_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::LineArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.lines == rhs.lines;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::LineArray_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::LineArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1571346a320fd11e0b7dc11a90a72ddf";
  }

  static const char* value(const ::jsk_recognition_msgs::LineArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1571346a320fd11eULL;
  static const uint64_t static_value2 = 0x0b7dc11a90a72ddfULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/LineArray";
  }

  static const char* value(const ::jsk_recognition_msgs::LineArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Line[] lines\n"
"\n"
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
"MSG: jsk_recognition_msgs/Line\n"
"float64 x1\n"
"float64 y1\n"
"float64 x2\n"
"float64 y2\n"
"\n"
"\n"
;
  }

  static const char* value(const ::jsk_recognition_msgs::LineArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lines);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LineArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::LineArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::LineArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lines[]" << std::endl;
    for (size_t i = 0; i < v.lines.size(); ++i)
    {
      s << indent << "  lines[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::jsk_recognition_msgs::Line_<ContainerAllocator> >::stream(s, indent + "    ", v.lines[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_LINEARRAY_H
