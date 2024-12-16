// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/actor_drone_swarm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fq/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fq/msg/detail/actor_drone_swarm__struct.h"
#include "fq/msg/detail/actor_drone_swarm__functions.h"
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

#include "fq/msg/detail/base_airplane_kinematics_data__functions.h"  // drone_swarm_kinematics_data
#include "fq/msg/detail/base_base_data__functions.h"  // base_data
#include "fq/msg/detail/base_interference_data__functions.h"  // interference_data
#include "fq/msg/detail/base_load_data__functions.h"  // load_data
#include "fq/msg/detail/base_plane_attr__functions.h"  // attributes
#include "fq/msg/detail/base_reconnaissance_data__functions.h"  // reconnaissance_data

// forward declare type support functions
size_t get_serialized_size_fq__msg__BaseAirplaneKinematicsData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseAirplaneKinematicsData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseAirplaneKinematicsData)();
size_t get_serialized_size_fq__msg__BaseBaseData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseBaseData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseBaseData)();
size_t get_serialized_size_fq__msg__BaseInterferenceData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseInterferenceData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseInterferenceData)();
size_t get_serialized_size_fq__msg__BaseLoadData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseLoadData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseLoadData)();
size_t get_serialized_size_fq__msg__BasePlaneAttr(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BasePlaneAttr(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BasePlaneAttr)();
size_t get_serialized_size_fq__msg__BaseReconnaissanceData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_fq__msg__BaseReconnaissanceData(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, BaseReconnaissanceData)();


using _ActorDroneSwarm__ros_msg_type = fq__msg__ActorDroneSwarm;

static bool _ActorDroneSwarm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActorDroneSwarm__ros_msg_type * ros_message = static_cast<const _ActorDroneSwarm__ros_msg_type *>(untyped_ros_message);
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

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BasePlaneAttr
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attributes, cdr))
    {
      return false;
    }
  }

  // Field name: drone_swarm_kinematics_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseAirplaneKinematicsData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->drone_swarm_kinematics_data, cdr))
    {
      return false;
    }
  }

  // Field name: load_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseLoadData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->load_data, cdr))
    {
      return false;
    }
  }

  // Field name: reconnaissance_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseReconnaissanceData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->reconnaissance_data, cdr))
    {
      return false;
    }
  }

  // Field name: interference_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseInterferenceData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->interference_data, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ActorDroneSwarm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActorDroneSwarm__ros_msg_type * ros_message = static_cast<_ActorDroneSwarm__ros_msg_type *>(untyped_ros_message);
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

  // Field name: attributes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BasePlaneAttr
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attributes))
    {
      return false;
    }
  }

  // Field name: drone_swarm_kinematics_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseAirplaneKinematicsData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->drone_swarm_kinematics_data))
    {
      return false;
    }
  }

  // Field name: load_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseLoadData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->load_data))
    {
      return false;
    }
  }

  // Field name: reconnaissance_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseReconnaissanceData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->reconnaissance_data))
    {
      return false;
    }
  }

  // Field name: interference_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, fq, msg, BaseInterferenceData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->interference_data))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t get_serialized_size_fq__msg__ActorDroneSwarm(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActorDroneSwarm__ros_msg_type * ros_message = static_cast<const _ActorDroneSwarm__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name base_data

  current_alignment += get_serialized_size_fq__msg__BaseBaseData(
    &(ros_message->base_data), current_alignment);
  // field.name attributes

  current_alignment += get_serialized_size_fq__msg__BasePlaneAttr(
    &(ros_message->attributes), current_alignment);
  // field.name drone_swarm_kinematics_data

  current_alignment += get_serialized_size_fq__msg__BaseAirplaneKinematicsData(
    &(ros_message->drone_swarm_kinematics_data), current_alignment);
  // field.name load_data

  current_alignment += get_serialized_size_fq__msg__BaseLoadData(
    &(ros_message->load_data), current_alignment);
  // field.name reconnaissance_data

  current_alignment += get_serialized_size_fq__msg__BaseReconnaissanceData(
    &(ros_message->reconnaissance_data), current_alignment);
  // field.name interference_data

  current_alignment += get_serialized_size_fq__msg__BaseInterferenceData(
    &(ros_message->interference_data), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ActorDroneSwarm__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fq__msg__ActorDroneSwarm(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fq
size_t max_serialized_size_fq__msg__ActorDroneSwarm(
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
  // member: attributes
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BasePlaneAttr(
        full_bounded, current_alignment);
    }
  }
  // member: drone_swarm_kinematics_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseAirplaneKinematicsData(
        full_bounded, current_alignment);
    }
  }
  // member: load_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseLoadData(
        full_bounded, current_alignment);
    }
  }
  // member: reconnaissance_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseReconnaissanceData(
        full_bounded, current_alignment);
    }
  }
  // member: interference_data
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_fq__msg__BaseInterferenceData(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActorDroneSwarm__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fq__msg__ActorDroneSwarm(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActorDroneSwarm = {
  "fq::msg",
  "ActorDroneSwarm",
  _ActorDroneSwarm__cdr_serialize,
  _ActorDroneSwarm__cdr_deserialize,
  _ActorDroneSwarm__get_serialized_size,
  _ActorDroneSwarm__max_serialized_size
};

static rosidl_message_type_support_t _ActorDroneSwarm__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActorDroneSwarm,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fq, msg, ActorDroneSwarm)() {
  return &_ActorDroneSwarm__type_support;
}

#if defined(__cplusplus)
}
#endif
