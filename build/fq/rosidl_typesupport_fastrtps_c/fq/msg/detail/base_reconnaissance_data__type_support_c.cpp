// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/BaseReconnaissanceData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_reconnaissance_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/base_reconnaissance_data__struct.h"
#include "fq/msg/detail/base_reconnaissance_data__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // targets
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // targets

// forward declare type support functions


using _BaseReconnaissanceData__ros_msg_type = fq__msg__BaseReconnaissanceData;

static bool _BaseReconnaissanceData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseReconnaissanceData__ros_msg_type * ros_message = static_cast<const _BaseReconnaissanceData__ros_msg_type *>(untyped_ros_message);
  // Field name: targets
  {
    size_t size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: num
  {
    cdr << ros_message->num;
  }

  return true;
}

static bool _BaseReconnaissanceData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseReconnaissanceData__ros_msg_type * ros_message = static_cast<_BaseReconnaissanceData__ros_msg_type *>(untyped_ros_message);
  // Field name: targets
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->targets.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->targets);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->targets, size)) {
      return "failed to create array for field 'targets'";
    }
    auto array_ptr = ros_message->targets.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: num
  {
    cdr >> ros_message->num;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__BaseReconnaissanceData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseReconnaissanceData__ros_msg_type * ros_message = static_cast<const _BaseReconnaissanceData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name targets
  {
    size_t array_size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num
  {
    size_t item_size = sizeof(ros_message->num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseReconnaissanceData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__BaseReconnaissanceData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__BaseReconnaissanceData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: targets
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseReconnaissanceData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__BaseReconnaissanceData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseReconnaissanceData = {
  "fq::msg",
  "BaseReconnaissanceData",
  _BaseReconnaissanceData__cdr_serialize,
  _BaseReconnaissanceData__cdr_deserialize,
  _BaseReconnaissanceData__get_serialized_size,
  _BaseReconnaissanceData__max_serialized_size
};

static rosidl_message_type_support_t _BaseReconnaissanceData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseReconnaissanceData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseReconnaissanceData)() {
  return &_BaseReconnaissanceData__type_support;
}

#if defined(__cplusplus)
}
#endif
