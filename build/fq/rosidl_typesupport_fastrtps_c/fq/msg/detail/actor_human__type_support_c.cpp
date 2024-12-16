// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/ActorHuman.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_human__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/actor_human__struct.h"
#include "fq/msg/detail/actor_human__functions.h"
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
#include "fq/msg/detail/base_kinematics_data__functions.h"  // kinematics_data

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
size_t get_serialized_size_fq__msg__BaseKinematicsData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseKinematicsData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseKinematicsData)();


using _ActorHuman__ros_msg_type = fq__msg__ActorHuman;

static bool _ActorHuman__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActorHuman__ros_msg_type * ros_message = static_cast<const _ActorHuman__ros_msg_type *>(untyped_ros_message);
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

  // Field name: kinematics_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseKinematicsData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->kinematics_data, cdr))
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

static bool _ActorHuman__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActorHuman__ros_msg_type * ros_message = static_cast<_ActorHuman__ros_msg_type *>(untyped_ros_message);
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

  // Field name: kinematics_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseKinematicsData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->kinematics_data))
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
size_t get_serialized_size_fq__msg__ActorHuman(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActorHuman__ros_msg_type * ros_message = static_cast<const _ActorHuman__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base_data

  current_alignment += get_serialized_size_fq__msg__BaseBaseData(
    &(ros_message->base_data), current_alignment);
  // field.name kinematics_data

  current_alignment += get_serialized_size_fq__msg__BaseKinematicsData(
    &(ros_message->kinematics_data), current_alignment);
  // field.name be_reconnaissance_data

  current_alignment += get_serialized_size_fq__msg__BaseBeReconnaissanceData(
    &(ros_message->be_reconnaissance_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActorHuman__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__ActorHuman(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__ActorHuman(
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
  // member: kinematics_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseKinematicsData(
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

static size_t _ActorHuman__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__ActorHuman(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActorHuman = {
  "fq::msg",
  "ActorHuman",
  _ActorHuman__cdr_serialize,
  _ActorHuman__cdr_deserialize,
  _ActorHuman__get_serialized_size,
  _ActorHuman__max_serialized_size
};

static rosidl_message_type_support_t _ActorHuman__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActorHuman,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, ActorHuman)() {
  return &_ActorHuman__type_support;
}

#if defined(__cplusplus)
}
#endif
