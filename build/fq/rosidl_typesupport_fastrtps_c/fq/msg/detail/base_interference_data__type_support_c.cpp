// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/BaseInterferenceData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_interference_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/base_interference_data__struct.h"
#include "fq/msg/detail/base_interference_data__functions.h"
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

#include "fq/msg/detail/base_target_info__functions.h"  // targets

// forward declare type support functions
size_t get_serialized_size_fq__msg__BaseTargetInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseTargetInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseTargetInfo)();


using _BaseInterferenceData__ros_msg_type = fq__msg__BaseInterferenceData;

static bool _BaseInterferenceData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseInterferenceData__ros_msg_type * ros_message = static_cast<const _BaseInterferenceData__ros_msg_type *>(untyped_ros_message);
  // Field name: targets
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseTargetInfo
      )()->data);
    size_t size = ros_message->targets.size;
    auto array_ptr = ros_message->targets.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: num
  {
    cdr << ros_message->num;
  }

  return true;
}

static bool _BaseInterferenceData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseInterferenceData__ros_msg_type * ros_message = static_cast<_BaseInterferenceData__ros_msg_type *>(untyped_ros_message);
  // Field name: targets
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseTargetInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->targets.data) {
      fq__msg__BaseTargetInfo__Sequence__fini(&ros_message->targets);
    }
    if (!fq__msg__BaseTargetInfo__Sequence__init(&ros_message->targets, size)) {
      return "failed to create array for field 'targets'";
    }
    auto array_ptr = ros_message->targets.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: num
  {
    cdr >> ros_message->num;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__BaseInterferenceData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseInterferenceData__ros_msg_type * ros_message = static_cast<const _BaseInterferenceData__ros_msg_type *>(untyped_ros_message);
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

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_fq__msg__BaseTargetInfo(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name num
  {
    size_t item_size = sizeof(ros_message->num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseInterferenceData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__BaseInterferenceData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__BaseInterferenceData(
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


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseTargetInfo(
        full_bounded, current_alignment);
    }
  }
  // member: num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseInterferenceData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__BaseInterferenceData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseInterferenceData = {
  "fq::msg",
  "BaseInterferenceData",
  _BaseInterferenceData__cdr_serialize,
  _BaseInterferenceData__cdr_deserialize,
  _BaseInterferenceData__get_serialized_size,
  _BaseInterferenceData__max_serialized_size
};

static rosidl_message_type_support_t _BaseInterferenceData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseInterferenceData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseInterferenceData)() {
  return &_BaseInterferenceData__type_support;
}

#if defined(__cplusplus)
}
#endif
