// Generated by gencpp from file mav_msgs/Status.msg
// DO NOT EDIT!


#ifndef MAV_MSGS_MESSAGE_STATUS_H
#define MAV_MSGS_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mav_msgs
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : header()
    , vehicle_name()
    , vehicle_type()
    , battery_voltage(0.0)
    , rc_command_mode()
    , command_interface_enabled(false)
    , flight_time(0.0)
    , system_uptime(0.0)
    , cpu_load(0.0)
    , motor_status()
    , in_air(false)
    , gps_status()
    , gps_num_satellites(0)  {
    }
  Status_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vehicle_name(_alloc)
    , vehicle_type(_alloc)
    , battery_voltage(0.0)
    , rc_command_mode(_alloc)
    , command_interface_enabled(false)
    , flight_time(0.0)
    , system_uptime(0.0)
    , cpu_load(0.0)
    , motor_status(_alloc)
    , in_air(false)
    , gps_status(_alloc)
    , gps_num_satellites(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _vehicle_name_type;
  _vehicle_name_type vehicle_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _vehicle_type_type;
  _vehicle_type_type vehicle_type;

   typedef float _battery_voltage_type;
  _battery_voltage_type battery_voltage;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _rc_command_mode_type;
  _rc_command_mode_type rc_command_mode;

   typedef uint8_t _command_interface_enabled_type;
  _command_interface_enabled_type command_interface_enabled;

   typedef float _flight_time_type;
  _flight_time_type flight_time;

   typedef float _system_uptime_type;
  _system_uptime_type system_uptime;

   typedef float _cpu_load_type;
  _cpu_load_type cpu_load;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _motor_status_type;
  _motor_status_type motor_status;

   typedef uint8_t _in_air_type;
  _in_air_type in_air;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _gps_status_type;
  _gps_status_type gps_status;

   typedef int32_t _gps_num_satellites_type;
  _gps_num_satellites_type gps_num_satellites;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RC_COMMAND_ATTITUDE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RC_COMMAND_ATTITUDE_HEIGHT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RC_COMMAND_POSITION;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTOR_STATUS_RUNNING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTOR_STATUS_STOPPED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTOR_STATUS_STARTING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTOR_STATUS_STOPPING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  GPS_STATUS_LOCK;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  GPS_STATUS_NO_LOCK;

  typedef boost::shared_ptr< ::mav_msgs::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mav_msgs::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::mav_msgs::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::mav_msgs::Status > StatusPtr;
typedef boost::shared_ptr< ::mav_msgs::Status const> StatusConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::RC_COMMAND_ATTITUDE =
        
          "\"attitude_thrust\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::RC_COMMAND_ATTITUDE_HEIGHT =
        
          "\"attitude_height\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::RC_COMMAND_POSITION =
        
          "\"position\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::MOTOR_STATUS_RUNNING =
        
          "\"running\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::MOTOR_STATUS_STOPPED =
        
          "\"stopped\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::MOTOR_STATUS_STARTING =
        
          "\"starting\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::MOTOR_STATUS_STOPPING =
        
          "\"stopping\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::GPS_STATUS_LOCK =
        
          "\"lock\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      Status_<ContainerAllocator>::GPS_STATUS_NO_LOCK =
        
          "\"no_lock\""
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mav_msgs::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mav_msgs::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mav_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'mav_msgs': ['/home/developer/drone_ws/src/mav_comm/mav_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mav_msgs::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mav_msgs::Status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_msgs::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mav_msgs::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_msgs::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mav_msgs::Status_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mav_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e191265664a5f7c1871338dc13be0958";
  }

  static const char* value(const ::mav_msgs::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe191265664a5f7c1ULL;
  static const uint64_t static_value2 = 0x871338dc13be0958ULL;
};

template<class ContainerAllocator>
struct DataType< ::mav_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mav_msgs/Status";
  }

  static const char* value(const ::mav_msgs::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mav_msgs::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# If values are not known / available, set to -1 or empty string.\n\
string      vehicle_name\n\
string      vehicle_type                  # E.g. firefly, pelican ...\n\
float32     battery_voltage               # Battery voltage in V.\n\
string      rc_command_mode               # Command mode set on the 3 position switch on the rc.\n\
bool        command_interface_enabled     # Reports whether the serial command interface is enabled.\n\
float32     flight_time                   # Flight time in s.\n\
float32     system_uptime									# MAV uptime in s.\n\
float32     cpu_load                      # MAV CPU load: 0.0 ... 1.0\n\
\n\
string      motor_status                  # Current motor status: running, stopped, starting, stopping.\n\
bool        in_air                        # True if vehicle is actually in air, false otherwise\n\
\n\
string      gps_status                    # GPS status: lock, no_lock\n\
int32       gps_num_satellites            # Number of visible satellites\n\
\n\
string RC_COMMAND_ATTITUDE=\"attitude_thrust\"\n\
string RC_COMMAND_ATTITUDE_HEIGHT=\"attitude_height\"\n\
string RC_COMMAND_POSITION=\"position\"\n\
\n\
string MOTOR_STATUS_RUNNING=\"running\"\n\
string MOTOR_STATUS_STOPPED=\"stopped\"\n\
string MOTOR_STATUS_STARTING=\"starting\"\n\
string MOTOR_STATUS_STOPPING=\"stopping\"\n\
\n\
string GPS_STATUS_LOCK=\"lock\"\n\
string GPS_STATUS_NO_LOCK=\"no_lock\"\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::mav_msgs::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mav_msgs::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vehicle_name);
      stream.next(m.vehicle_type);
      stream.next(m.battery_voltage);
      stream.next(m.rc_command_mode);
      stream.next(m.command_interface_enabled);
      stream.next(m.flight_time);
      stream.next(m.system_uptime);
      stream.next(m.cpu_load);
      stream.next(m.motor_status);
      stream.next(m.in_air);
      stream.next(m.gps_status);
      stream.next(m.gps_num_satellites);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mav_msgs::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mav_msgs::Status_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vehicle_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.vehicle_name);
    s << indent << "vehicle_type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.vehicle_type);
    s << indent << "battery_voltage: ";
    Printer<float>::stream(s, indent + "  ", v.battery_voltage);
    s << indent << "rc_command_mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.rc_command_mode);
    s << indent << "command_interface_enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.command_interface_enabled);
    s << indent << "flight_time: ";
    Printer<float>::stream(s, indent + "  ", v.flight_time);
    s << indent << "system_uptime: ";
    Printer<float>::stream(s, indent + "  ", v.system_uptime);
    s << indent << "cpu_load: ";
    Printer<float>::stream(s, indent + "  ", v.cpu_load);
    s << indent << "motor_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.motor_status);
    s << indent << "in_air: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.in_air);
    s << indent << "gps_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.gps_status);
    s << indent << "gps_num_satellites: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gps_num_satellites);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAV_MSGS_MESSAGE_STATUS_H
