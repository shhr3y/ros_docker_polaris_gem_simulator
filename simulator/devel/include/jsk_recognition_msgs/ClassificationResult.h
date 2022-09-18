// Generated by gencpp from file jsk_recognition_msgs/ClassificationResult.msg
// DO NOT EDIT!


#ifndef JSK_RECOGNITION_MSGS_MESSAGE_CLASSIFICATIONRESULT_H
#define JSK_RECOGNITION_MSGS_MESSAGE_CLASSIFICATIONRESULT_H


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
struct ClassificationResult_
{
  typedef ClassificationResult_<ContainerAllocator> Type;

  ClassificationResult_()
    : header()
    , labels()
    , label_names()
    , label_proba()
    , probabilities()
    , classifier()
    , target_names()  {
    }
  ClassificationResult_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , labels(_alloc)
    , label_names(_alloc)
    , label_proba(_alloc)
    , probabilities(_alloc)
    , classifier(_alloc)
    , target_names(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _labels_type;
  _labels_type labels;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _label_names_type;
  _label_names_type label_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _label_proba_type;
  _label_proba_type label_proba;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _probabilities_type;
  _probabilities_type probabilities;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _classifier_type;
  _classifier_type classifier;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _target_names_type;
  _target_names_type target_names;





  typedef boost::shared_ptr< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> const> ConstPtr;

}; // struct ClassificationResult_

typedef ::jsk_recognition_msgs::ClassificationResult_<std::allocator<void> > ClassificationResult;

typedef boost::shared_ptr< ::jsk_recognition_msgs::ClassificationResult > ClassificationResultPtr;
typedef boost::shared_ptr< ::jsk_recognition_msgs::ClassificationResult const> ClassificationResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.labels == rhs.labels &&
    lhs.label_names == rhs.label_names &&
    lhs.label_proba == rhs.label_proba &&
    lhs.probabilities == rhs.probabilities &&
    lhs.classifier == rhs.classifier &&
    lhs.target_names == rhs.target_names;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator1> & lhs, const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jsk_recognition_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cce1f8edabff85a20e9cc013e319497c";
  }

  static const char* value(const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcce1f8edabff85a2ULL;
  static const uint64_t static_value2 = 0x0e9cc013e319497cULL;
};

template<class ContainerAllocator>
struct DataType< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jsk_recognition_msgs/ClassificationResult";
  }

  static const char* value(const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# information about frame and timestamp\n"
"Header header\n"
"\n"
"# prediction results\n"
"uint32[] labels          # numerical labels\n"
"string[] label_names     # non-numerical labels\n"
"float64[] label_proba    # probabilities of labels\n"
"float64[] probabilities  # probabilities about each classification for all target_names\n"
"\n"
"# information about classifier\n"
"string classifier        # name of classifier\n"
"string[] target_names    # set in which label_names should be\n"
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

  static const char* value(const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.labels);
      stream.next(m.label_names);
      stream.next(m.label_proba);
      stream.next(m.probabilities);
      stream.next(m.classifier);
      stream.next(m.target_names);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClassificationResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jsk_recognition_msgs::ClassificationResult_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "labels[]" << std::endl;
    for (size_t i = 0; i < v.labels.size(); ++i)
    {
      s << indent << "  labels[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.labels[i]);
    }
    s << indent << "label_names[]" << std::endl;
    for (size_t i = 0; i < v.label_names.size(); ++i)
    {
      s << indent << "  label_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.label_names[i]);
    }
    s << indent << "label_proba[]" << std::endl;
    for (size_t i = 0; i < v.label_proba.size(); ++i)
    {
      s << indent << "  label_proba[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.label_proba[i]);
    }
    s << indent << "probabilities[]" << std::endl;
    for (size_t i = 0; i < v.probabilities.size(); ++i)
    {
      s << indent << "  probabilities[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.probabilities[i]);
    }
    s << indent << "classifier: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.classifier);
    s << indent << "target_names[]" << std::endl;
    for (size_t i = 0; i < v.target_names.size(); ++i)
    {
      s << indent << "  target_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.target_names[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JSK_RECOGNITION_MSGS_MESSAGE_CLASSIFICATIONRESULT_H