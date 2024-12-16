// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/ActorControlInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/actor_control_info__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/actor_control_info__functions.h"
#include "fq/msg/detail/actor_control_info__struct.h"


// Include directives for member types
// Member `target_positions`
#include "geometry_msgs/msg/point.h"
// Member `target_positions`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `target_headings`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__ActorControlInfo__init(message_memory);
}

void ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_fini_function(void * message_memory)
{
  fq__msg__ActorControlInfo__fini(message_memory);
}

size_t ActorControlInfo__rosidl_typesupport_introspection_c__size_function__Point__target_positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * ActorControlInfo__rosidl_typesupport_introspection_c__get_const_function__Point__target_positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ActorControlInfo__rosidl_typesupport_introspection_c__get_function__Point__target_positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ActorControlInfo__rosidl_typesupport_introspection_c__resize_function__Point__target_positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorControlInfo, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorControlInfo, target_positions),  // bytes offset in struct
    NULL,  // default value
    ActorControlInfo__rosidl_typesupport_introspection_c__size_function__Point__target_positions,  // size() function pointer
    ActorControlInfo__rosidl_typesupport_introspection_c__get_const_function__Point__target_positions,  // get_const(index) function pointer
    ActorControlInfo__rosidl_typesupport_introspection_c__get_function__Point__target_positions,  // get(index) function pointer
    ActorControlInfo__rosidl_typesupport_introspection_c__resize_function__Point__target_positions  // resize(index) function pointer
  },
  {
    "max_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorControlInfo, max_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorControlInfo, target_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_headings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorControlInfo, target_headings),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_members = {
  "fq__msg",  // message namespace
  "ActorControlInfo",  // message name
  5,  // number of fields
  sizeof(fq__msg__ActorControlInfo),
  ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_member_array,  // message members
  ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_type_support_handle = {
  0,
  &ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorControlInfo)() {
  ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_type_support_handle.typesupport_identifier) {
    ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActorControlInfo__rosidl_typesupport_introspection_c__ActorControlInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
