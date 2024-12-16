// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/BaseKinematicsData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_kinematics_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/base_kinematics_data__struct.h"
#include "fq/msg/detail/base_kinematics_data__functions.h"
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

#include "fq/msg/detail/base_orientation3_d__functions.h"  // rotation
#include "geometry_msgs/msg/detail/point__functions.h"  // location

// forward declare type support functions
size_t get_serialized_size_fq__msg__BaseOrientation3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseOrientation3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseOrientation3D)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _BaseKinematicsData__ros_msg_type = fq__msg__BaseKinematicsData;

static bool _BaseKinematicsData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseKinematicsData__ros_msg_type * ros_message = static_cast<const _BaseKinematicsData__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->location, cdr))
    {
      return false;
    }
  }

  // Field name: rotation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseOrientation3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rotation, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BaseKinematicsData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseKinematicsData__ros_msg_type * ros_message = static_cast<_BaseKinematicsData__ros_msg_type *>(untyped_ros_message);
  // Field name: location
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->location))
    {
      return false;
    }
  }

  // Field name: rotation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseOrientation3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rotation))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__BaseKinematicsData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseKinematicsData__ros_msg_type * ros_message = static_cast<const _BaseKinematicsData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name location

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->location), current_alignment);
  // field.name rotation

  current_alignment += get_serialized_size_fq__msg__BaseOrientation3D(
    &(ros_message->rotation), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BaseKinematicsData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__BaseKinematicsData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__BaseKinematicsData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: location
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: rotation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseOrientation3D(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseKinematicsData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__BaseKinematicsData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseKinematicsData = {
  "fq::msg",
  "BaseKinematicsData",
  _BaseKinematicsData__cdr_serialize,
  _BaseKinematicsData__cdr_deserialize,
  _BaseKinematicsData__get_serialized_size,
  _BaseKinematicsData__max_serialized_size
};

static rosidl_message_type_support_t _BaseKinematicsData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseKinematicsData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseKinematicsData)() {
  return &_BaseKinematicsData__type_support;
}

#if defined(__cplusplus)
}
#endif
