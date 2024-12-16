// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/BaseAirplaneKinematicsData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_airplane_kinematics_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/base_airplane_kinematics_data__struct.h"
#include "fq/msg/detail/base_airplane_kinematics_data__functions.h"
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
#include "geometry_msgs/msg/detail/accel__functions.h"  // acceleration
#include "geometry_msgs/msg/detail/point__functions.h"  // location
#include "geometry_msgs/msg/detail/twist__functions.h"  // angular_velocity, velocity

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
size_t get_serialized_size_geometry_msgs__msg__Accel(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
size_t max_serialized_size_geometry_msgs__msg__Accel(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Accel)();
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fq
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();


using _BaseAirplaneKinematicsData__ros_msg_type = fq__msg__BaseAirplaneKinematicsData;

static bool _BaseAirplaneKinematicsData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseAirplaneKinematicsData__ros_msg_type * ros_message = static_cast<const _BaseAirplaneKinematicsData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity, cdr))
    {
      return false;
    }
  }

  // Field name: angular_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->angular_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Accel
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->acceleration, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BaseAirplaneKinematicsData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseAirplaneKinematicsData__ros_msg_type * ros_message = static_cast<_BaseAirplaneKinematicsData__ros_msg_type *>(untyped_ros_message);
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

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity))
    {
      return false;
    }
  }

  // Field name: angular_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->angular_velocity))
    {
      return false;
    }
  }

  // Field name: acceleration
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Accel
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->acceleration))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__BaseAirplaneKinematicsData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseAirplaneKinematicsData__ros_msg_type * ros_message = static_cast<const _BaseAirplaneKinematicsData__ros_msg_type *>(untyped_ros_message);
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
  // field.name velocity

  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->velocity), current_alignment);
  // field.name angular_velocity

  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->angular_velocity), current_alignment);
  // field.name acceleration

  current_alignment += get_serialized_size_geometry_msgs__msg__Accel(
    &(ros_message->acceleration), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BaseAirplaneKinematicsData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__BaseAirplaneKinematicsData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__BaseAirplaneKinematicsData(
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
  // member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Twist(
        full_bounded, current_alignment);
    }
  }
  // member: angular_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Twist(
        full_bounded, current_alignment);
    }
  }
  // member: acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Accel(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseAirplaneKinematicsData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__BaseAirplaneKinematicsData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseAirplaneKinematicsData = {
  "fq::msg",
  "BaseAirplaneKinematicsData",
  _BaseAirplaneKinematicsData__cdr_serialize,
  _BaseAirplaneKinematicsData__cdr_deserialize,
  _BaseAirplaneKinematicsData__get_serialized_size,
  _BaseAirplaneKinematicsData__max_serialized_size
};

static rosidl_message_type_support_t _BaseAirplaneKinematicsData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseAirplaneKinematicsData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseAirplaneKinematicsData)() {
  return &_BaseAirplaneKinematicsData__type_support;
}

#if defined(__cplusplus)
}
#endif
