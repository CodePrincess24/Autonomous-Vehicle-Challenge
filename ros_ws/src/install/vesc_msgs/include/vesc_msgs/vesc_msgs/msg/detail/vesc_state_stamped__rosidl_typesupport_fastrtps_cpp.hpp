// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from vesc_msgs:msg/VescStateStamped.idl
// generated code does not contain a copyright notice

#ifndef VESC_MSGS__MSG__DETAIL__VESC_STATE_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VESC_MSGS__MSG__DETAIL__VESC_STATE_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vesc_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "vesc_msgs/msg/detail/vesc_state_stamped__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace vesc_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vesc_msgs
cdr_serialize(
  const vesc_msgs::msg::VescStateStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vesc_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vesc_msgs::msg::VescStateStamped & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vesc_msgs
get_serialized_size(
  const vesc_msgs::msg::VescStateStamped & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vesc_msgs
max_serialized_size_VescStateStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vesc_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vesc_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vesc_msgs, msg, VescStateStamped)();

#ifdef __cplusplus
}
#endif

#endif  // VESC_MSGS__MSG__DETAIL__VESC_STATE_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_