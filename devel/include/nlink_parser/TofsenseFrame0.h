// Generated by gencpp from file nlink_parser/TofsenseFrame0.msg
// DO NOT EDIT!


#ifndef NLINK_PARSER_MESSAGE_TOFSENSEFRAME0_H
#define NLINK_PARSER_MESSAGE_TOFSENSEFRAME0_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nlink_parser
{
template <class ContainerAllocator>
struct TofsenseFrame0_
{
  typedef TofsenseFrame0_<ContainerAllocator> Type;

  TofsenseFrame0_()
    : id(0)
    , system_time(0)
    , dis(0.0)
    , dis_status(0)
    , signal_strength(0)
    , range_precision(0)  {
    }
  TofsenseFrame0_(const ContainerAllocator& _alloc)
    : id(0)
    , system_time(0)
    , dis(0.0)
    , dis_status(0)
    , signal_strength(0)
    , range_precision(0)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef uint32_t _system_time_type;
  _system_time_type system_time;

   typedef float _dis_type;
  _dis_type dis;

   typedef uint8_t _dis_status_type;
  _dis_status_type dis_status;

   typedef uint16_t _signal_strength_type;
  _signal_strength_type signal_strength;

   typedef uint8_t _range_precision_type;
  _range_precision_type range_precision;





  typedef boost::shared_ptr< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> const> ConstPtr;

}; // struct TofsenseFrame0_

typedef ::nlink_parser::TofsenseFrame0_<std::allocator<void> > TofsenseFrame0;

typedef boost::shared_ptr< ::nlink_parser::TofsenseFrame0 > TofsenseFrame0Ptr;
typedef boost::shared_ptr< ::nlink_parser::TofsenseFrame0 const> TofsenseFrame0ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nlink_parser::TofsenseFrame0_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nlink_parser::TofsenseFrame0_<ContainerAllocator1> & lhs, const ::nlink_parser::TofsenseFrame0_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.system_time == rhs.system_time &&
    lhs.dis == rhs.dis &&
    lhs.dis_status == rhs.dis_status &&
    lhs.signal_strength == rhs.signal_strength &&
    lhs.range_precision == rhs.range_precision;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nlink_parser::TofsenseFrame0_<ContainerAllocator1> & lhs, const ::nlink_parser::TofsenseFrame0_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nlink_parser

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5579723ab4876e453dd6025247ac5ffb";
  }

  static const char* value(const ::nlink_parser::TofsenseFrame0_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5579723ab4876e45ULL;
  static const uint64_t static_value2 = 0x3dd6025247ac5ffbULL;
};

template<class ContainerAllocator>
struct DataType< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nlink_parser/TofsenseFrame0";
  }

  static const char* value(const ::nlink_parser::TofsenseFrame0_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"uint32 system_time\n"
"float32 dis\n"
"uint8 dis_status\n"
"uint16 signal_strength\n"
"uint8 range_precision\n"
;
  }

  static const char* value(const ::nlink_parser::TofsenseFrame0_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.system_time);
      stream.next(m.dis);
      stream.next(m.dis_status);
      stream.next(m.signal_strength);
      stream.next(m.range_precision);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TofsenseFrame0_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nlink_parser::TofsenseFrame0_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nlink_parser::TofsenseFrame0_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "system_time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.system_time);
    s << indent << "dis: ";
    Printer<float>::stream(s, indent + "  ", v.dis);
    s << indent << "dis_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dis_status);
    s << indent << "signal_strength: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.signal_strength);
    s << indent << "range_precision: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.range_precision);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NLINK_PARSER_MESSAGE_TOFSENSEFRAME0_H
