// Generated by gencpp from file nlink_parser/IotFrame0Node.msg
// DO NOT EDIT!


#ifndef NLINK_PARSER_MESSAGE_IOTFRAME0NODE_H
#define NLINK_PARSER_MESSAGE_IOTFRAME0NODE_H


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
struct IotFrame0Node_
{
  typedef IotFrame0Node_<ContainerAllocator> Type;

  IotFrame0Node_()
    : uid(0)
    , cnt(0)
    , dis(0.0)
    , aoa_angle_horizontal(0.0)
    , aoa_angle_vertical(0.0)  {
    }
  IotFrame0Node_(const ContainerAllocator& _alloc)
    : uid(0)
    , cnt(0)
    , dis(0.0)
    , aoa_angle_horizontal(0.0)
    , aoa_angle_vertical(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _uid_type;
  _uid_type uid;

   typedef uint8_t _cnt_type;
  _cnt_type cnt;

   typedef float _dis_type;
  _dis_type dis;

   typedef float _aoa_angle_horizontal_type;
  _aoa_angle_horizontal_type aoa_angle_horizontal;

   typedef float _aoa_angle_vertical_type;
  _aoa_angle_vertical_type aoa_angle_vertical;





  typedef boost::shared_ptr< ::nlink_parser::IotFrame0Node_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nlink_parser::IotFrame0Node_<ContainerAllocator> const> ConstPtr;

}; // struct IotFrame0Node_

typedef ::nlink_parser::IotFrame0Node_<std::allocator<void> > IotFrame0Node;

typedef boost::shared_ptr< ::nlink_parser::IotFrame0Node > IotFrame0NodePtr;
typedef boost::shared_ptr< ::nlink_parser::IotFrame0Node const> IotFrame0NodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nlink_parser::IotFrame0Node_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nlink_parser::IotFrame0Node_<ContainerAllocator1> & lhs, const ::nlink_parser::IotFrame0Node_<ContainerAllocator2> & rhs)
{
  return lhs.uid == rhs.uid &&
    lhs.cnt == rhs.cnt &&
    lhs.dis == rhs.dis &&
    lhs.aoa_angle_horizontal == rhs.aoa_angle_horizontal &&
    lhs.aoa_angle_vertical == rhs.aoa_angle_vertical;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nlink_parser::IotFrame0Node_<ContainerAllocator1> & lhs, const ::nlink_parser::IotFrame0Node_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nlink_parser

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nlink_parser::IotFrame0Node_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nlink_parser::IotFrame0Node_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nlink_parser::IotFrame0Node_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18c74fd1a18895f584bf54c3563d0a60";
  }

  static const char* value(const ::nlink_parser::IotFrame0Node_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18c74fd1a18895f5ULL;
  static const uint64_t static_value2 = 0x84bf54c3563d0a60ULL;
};

template<class ContainerAllocator>
struct DataType< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nlink_parser/IotFrame0Node";
  }

  static const char* value(const ::nlink_parser::IotFrame0Node_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 uid\n"
"uint8 cnt\n"
"float32 dis\n"
"float32 aoa_angle_horizontal\n"
"float32 aoa_angle_vertical\n"
;
  }

  static const char* value(const ::nlink_parser::IotFrame0Node_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.uid);
      stream.next(m.cnt);
      stream.next(m.dis);
      stream.next(m.aoa_angle_horizontal);
      stream.next(m.aoa_angle_vertical);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IotFrame0Node_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nlink_parser::IotFrame0Node_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nlink_parser::IotFrame0Node_<ContainerAllocator>& v)
  {
    s << indent << "uid: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.uid);
    s << indent << "cnt: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cnt);
    s << indent << "dis: ";
    Printer<float>::stream(s, indent + "  ", v.dis);
    s << indent << "aoa_angle_horizontal: ";
    Printer<float>::stream(s, indent + "  ", v.aoa_angle_horizontal);
    s << indent << "aoa_angle_vertical: ";
    Printer<float>::stream(s, indent + "  ", v.aoa_angle_vertical);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NLINK_PARSER_MESSAGE_IOTFRAME0NODE_H