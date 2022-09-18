// Generated by gencpp from file jsk_topic_tools/PassthroughDurationResponse.msg
// DO NOT EDIT!


#ifndef JSK_TOPIC_TOOLS_MESSAGE_PASSTHROUGHDURATIONRESPONSE_H
#define JSK_TOPIC_TOOLS_MESSAGE_PASSTHROUGHDURATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jsk_topic_tools
{
template <class ContainerAllocator>
struct PassthroughDurationResponse_
{
  typedef PassthroughDurationResponse_<ContainerAllocator> Type;

  PassthroughDurationResponse_()
    {
    }
  PassthroughDurationResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PassthroughDurationResponse_

typedef ::jsk_topic_tools::PassthroughDurationResponse_<std::allocator<void> > PassthroughDurationResponse;

typedef boost::shared_ptr< ::jsk_topic_tools::PassthroughDurationResponse > PassthroughDurationResponsePtr;
typedef boost::shared_ptr< ::jsk_topic_tools::PassthroughDurationResponse const> PassthroughDurationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace jsk_topic_tools

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_topic_tools/PassthroughDurationResponse";
  }

  static const char* value(const ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PassthroughDurationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::jsk_topic_tools::PassthroughDurationResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // JSK_TOPIC_TOOLS_MESSAGE_PASSTHROUGHDURATIONRESPONSE_H