// Generated by gencpp from file jsk_recognition_msgs/CallPolygonResponse.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_CALLPOLYGONRESPONSE_H
#define JSK_RECOGNITION_MSGS_MESSAGE_CALLPOLYGONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PolygonStamped.h>

namespace jsk_recognition_msgs
{
template <class ContainerAllocator>
struct CallPolygonResponse_
{
  typedef CallPolygonResponse_<ContainerAllocator> Type;

  CallPolygonResponse_()
    : points()  {
    }
  CallPolygonResponse_(const ContainerAllocator& _alloc)
    : points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PolygonStamped_<ContainerAllocator>  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CallPolygonResponse_

typedef ::jsk_recognition_msgs::CallPolygonResponse_<std::allocator<void> > CallPolygonResponse;

typedef boost::shared_ptr< ::jsk_recognition_msgs::CallPolygonResponse > CallPolygonResponsePtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::CallPolygonResponse const> CallPolygonResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator2> & rhs)
{
  return lhs.points == rhs.points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f7fab179463c3091ade3556924563da";
  }

  static const char* value(const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f7fab179463c309ULL;
  static const uint64_t static_value2 = 0x1ade3556924563daULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/CallPolygonResponse";
  }

  static const char* value(const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/PolygonStamped points\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PolygonStamped\n"
"# This represents a Polygon with reference coordinate frame and timestamp\n"
"Header header\n"
"Polygon polygon\n"
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
"MSG: geometry_msgs/Polygon\n"
"#A specification of a polygon where the first and last points are assumed to be connected\n"
"Point32[] points\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CallPolygonResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::CallPolygonResponse_<ContainerAllocator>& v)
  {
    s << indent << "points: ";
    s << std::endl;
    Printer< ::geometry_msgs::PolygonStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.points);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_CALLPOLYGONRESPONSE_H