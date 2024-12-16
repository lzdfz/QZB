// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/ActorBuilding.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_building__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/actor_building__struct.h"
#include "fq/msg/detail/actor_building__functions.h"
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

#include "fq/msg/detail/base_base_data__functions.h"  // base_data
#include "fq/msg/detail/base_be_reconnaissance_data__functions.h"  // be_reconnaissance_data
#include "fq/msg/detail/base_damage_condition_data__functions.h"  // damage_condition_data
#include "fq/msg/detail/base_orientation3_d__functions.h"  // rotation
#include "geometry_msgs/msg/detail/point__functions.h"  // location

// forward declare type support functions
size_t get_serialized_size_fq__msg__BaseBaseData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseBaseData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseBaseData)();
size_t get_serialized_size_fq__msg__BaseBeReconnaissanceData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseBeReconnaissanceData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseBeReconnaissanceData)();
size_t get_serialized_size_fq__msg__BaseDamageConditionData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseDamageConditionData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseDamageConditionData)();
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


using _ActorBuilding__ros_msg_type = fq__msg__ActorBuilding;

static bool _ActorBuilding__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActorBuilding__ros_msg_type * ros_message = static_cast<const _ActorBuilding__ros_msg_type *>(untyped_ros_message);
  // Field name: base_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseBaseData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->base_data, cdr))
    {
      return false;
    }
  }

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

  // Field name: damage_condition_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseDamageConditionData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->damage_condition_data, cdr))
    {
      return false;
    }
  }

  // Field name: be_reconnaissance_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseBeReconnaissanceData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->be_reconnaissance_data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActorBuilding__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActorBuilding__ros_msg_type * ros_message = static_cast<_ActorBuilding__ros_msg_type *>(untyped_ros_message);
  // Field name: base_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseBaseData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->base_data))
    {
      return false;
    }
  }

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

  // Field name: damage_condition_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseDamageConditionData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->damage_condition_data))
    {
      return false;
    }
  }

  // Field name: be_reconnaissance_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseBeReconnaissanceData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->be_reconnaissance_data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__ActorBuilding(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActorBuilding__ros_msg_type * ros_message = static_cast<const _ActorBuilding__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base_data

  current_alignment += get_serialized_size_fq__msg__BaseBaseData(
    &(ros_message->base_data), current_alignment);
  // field.name location

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->location), current_alignment);
  // field.name rotation

  current_alignment += get_serialized_size_fq__msg__BaseOrientation3D(
    &(ros_message->rotation), current_alignment);
  // field.name damage_condition_data

  current_alignment += get_serialized_size_fq__msg__BaseDamageConditionData(
    &(ros_message->damage_condition_data), current_alignment);
  // field.name be_reconnaissance_data

  current_alignment += get_serialized_size_fq__msg__BaseBeReconnaissanceData(
    &(ros_message->be_reconnaissance_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActorBuilding__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__ActorBuilding(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__ActorBuilding(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: base_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseBaseData(
        full_bounded, current_alignment);
    }
  }
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
  // member: damage_condition_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseDamageConditionData(
        full_bounded, current_alignment);
    }
  }
  // member: be_reconnaissance_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseBeReconnaissanceData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActorBuilding__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__ActorBuilding(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActorBuilding = {
  "fq::msg",
  "ActorBuilding",
  _ActorBuilding__cdr_serialize,
  _ActorBuilding__cdr_deserialize,
  _ActorBuilding__get_serialized_size,
  _ActorBuilding__max_serialized_size
};

static rosidl_message_type_support_t _ActorBuilding__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActorBuilding,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, ActorBuilding)() {
  return &_ActorBuilding__type_support;
}

#if defined(__cplusplus)
}
#endif
