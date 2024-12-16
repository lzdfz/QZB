// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_be_reconnaissance_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/base_be_reconnaissance_data__struct.h"
#include "fq/msg/detail/base_be_reconnaissance_data__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BaseBeReconnaissanceData__ros_msg_type = fq__msg__BaseBeReconnaissanceData;

static bool _BaseBeReconnaissanceData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseBeReconnaissanceData__ros_msg_type * ros_message = static_cast<const _BaseBeReconnaissanceData__ros_msg_type *>(untyped_ros_message);
  // Field name: b_found
  {
    cdr << (ros_message->b_found ? true : false);
  }

  // Field name: b_covered
  {
    cdr << (ros_message->b_covered ? true : false);
  }

  return true;
}

static bool _BaseBeReconnaissanceData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseBeReconnaissanceData__ros_msg_type * ros_message = static_cast<_BaseBeReconnaissanceData__ros_msg_type *>(untyped_ros_message);
  // Field name: b_found
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->b_found = tmp ? true : false;
  }

  // Field name: b_covered
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->b_covered = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__BaseBeReconnaissanceData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseBeReconnaissanceData__ros_msg_type * ros_message = static_cast<const _BaseBeReconnaissanceData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name b_found
  {
    size_t item_size = sizeof(ros_message->b_found);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_covered
  {
    size_t item_size = sizeof(ros_message->b_covered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseBeReconnaissanceData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__BaseBeReconnaissanceData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__BaseBeReconnaissanceData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: b_found
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: b_covered
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseBeReconnaissanceData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__BaseBeReconnaissanceData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseBeReconnaissanceData = {
  "fq::msg",
  "BaseBeReconnaissanceData",
  _BaseBeReconnaissanceData__cdr_serialize,
  _BaseBeReconnaissanceData__cdr_deserialize,
  _BaseBeReconnaissanceData__get_serialized_size,
  _BaseBeReconnaissanceData__max_serialized_size
};

static rosidl_message_type_support_t _BaseBeReconnaissanceData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseBeReconnaissanceData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseBeReconnaissanceData)() {
  return &_BaseBeReconnaissanceData__type_support;
}

#if defined(__cplusplus)
}
#endif
