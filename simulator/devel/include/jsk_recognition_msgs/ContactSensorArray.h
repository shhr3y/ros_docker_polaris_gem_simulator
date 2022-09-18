// Generated by gencpp from file jsk_recognition_msgs/ContactSensorArray.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_CONTACTSENSORARRAY_H
#define JSK_RECOGNITION_MSGS_MESSAGE_CONTACTSENSORARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <jsk_recognition_msgs/ContactSensor.h>

namespace jsk_recognition_msgs
{
template <class ContainerAllocator>
struct ContactSensorArray_
{
  typedef ContactSensorArray_<ContainerAllocator> Type;

  ContactSensorArray_()
    : header()
    , datas()  {
    }
  ContactSensorArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , datas(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::jsk_recognition_msgs::ContactSensor_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::jsk_recognition_msgs::ContactSensor_<ContainerAllocator> >::other >  _datas_type;
  _datas_type datas;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> const> ConstPtr;

}; // struct ContactSensorArray_

typedef ::jsk_recognition_msgs::ContactSensorArray_<std::allocator<void> > ContactSensorArray;

typedef boost::shared_ptr< ::jsk_recognition_msgs::ContactSensorArray > ContactSensorArrayPtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::ContactSensorArray const> ContactSensorArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.datas == rhs.datas;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c65f16fb3a523c0b77d7e31330b214da";
  }

  static const char* value(const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc65f16fb3a523c0bULL;
  static const uint64_t static_value2 = 0x77d7e31330b214daULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/ContactSensorArray";
  }

  static const char* value(const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"jsk_recognition_msgs/ContactSensor[] datas\n"
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
"MSG: jsk_recognition_msgs/ContactSensor\n"
"# Header\n"
"Header header\n"
"\n"
"# Whether sensor detects contact or not\n"
"bool contact\n"
"\n"
"string link_name\n"
;
  }

  static const char* value(const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.datas);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContactSensorArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::ContactSensorArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "datas[]" << std::endl;
    for (size_t i = 0; i < v.datas.size(); ++i)
    {
      s << indent << "  datas[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::jsk_recognition_msgs::ContactSensor_<ContainerAllocator> >::stream(s, indent + "    ", v.datas[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_CONTACTSENSORARRAY_H