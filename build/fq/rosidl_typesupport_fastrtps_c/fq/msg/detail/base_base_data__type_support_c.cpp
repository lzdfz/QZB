// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/BaseBaseData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_base_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/base_base_data__struct.h"
#include "fq/msg/detail/base_base_data__functions.h"
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

#include "fq/msg/detail/base_bounding_box__functions.h"  // bounding_box
#include "rosidl_runtime_c/string.h"  // actor_type, type_id
#include "rosidl_runtime_c/string_functions.h"  // actor_type, type_id

// forward declare type support functions
size_t get_serialized_size_fq__msg__BaseBoundingBox(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseBoundingBox(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseBoundingBox)();


using _BaseBaseData__ros_msg_type = fq__msg__BaseBaseData;

static bool _BaseBaseData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseBaseData__ros_msg_type * ros_message = static_cast<const _BaseBaseData__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: health_point
  {
    cdr << ros_message->health_point;
  }

  // Field name: type_id
  {
    const rosidl_runtime_c__String * str = &ros_message->type_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: actor_type
  {
    const rosidl_runtime_c__String * str = &ros_message->actor_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounding_box
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseBoundingBox
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bounding_box, cdr))
    {
      return false;
    }
  }

  // Field name: b_target
  {
    cdr << (ros_message->b_target ? true : false);
  }

  return true;
}

static bool _BaseBaseData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseBaseData__ros_msg_type * ros_message = static_cast<_BaseBaseData__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: health_point
  {
    cdr >> ros_message->health_point;
  }

  // Field name: type_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type_id.data) {
      rosidl_runtime_c__String__init(&ros_message->type_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type_id'\n");
      return false;
    }
  }

  // Field name: actor_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->actor_type.data) {
      rosidl_runtime_c__String__init(&ros_message->actor_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->actor_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'actor_type'\n");
      return false;
    }
  }

  // Field name: bounding_box
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseBoundingBox
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bounding_box))
    {
      return false;
    }
  }

  // Field name: b_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->b_target = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__BaseBaseData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseBaseData__ros_msg_type * ros_message = static_cast<const _BaseBaseData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name health_point
  {
    size_t item_size = sizeof(ros_message->health_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name type_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type_id.size + 1);
  // field.name actor_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->actor_type.size + 1);
  // field.name bounding_box

  current_alignment += get_serialized_size_fq__msg__BaseBoundingBox(
    &(ros_message->bounding_box), current_alignment);
  // field.name b_target
  {
    size_t item_size = sizeof(ros_message->b_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseBaseData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__BaseBaseData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__BaseBaseData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: health_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: type_id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: actor_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bounding_box
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseBoundingBox(
        full_bounded, current_alignment);
    }
  }
  // member: b_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseBaseData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__BaseBaseData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseBaseData = {
  "fq::msg",
  "BaseBaseData",
  _BaseBaseData__cdr_serialize,
  _BaseBaseData__cdr_deserialize,
  _BaseBaseData__get_serialized_size,
  _BaseBaseData__max_serialized_size
};

static rosidl_message_type_support_t _BaseBaseData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseBaseData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseBaseData)() {
  return &_BaseBaseData__type_support;
}

#if defined(__cplusplus)
}
#endif
