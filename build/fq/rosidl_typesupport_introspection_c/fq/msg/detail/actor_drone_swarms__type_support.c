// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/ActorDroneSwarms.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/actor_drone_swarms__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/actor_drone_swarms__functions.h"
#include "fq/msg/detail/actor_drone_swarms__struct.h"


// Include directives for member types
// Member `header`
#include "fq/msg/header.h"
// Member `header`
#include "fq/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `drone_swarms`
#include "fq/msg/actor_drone_swarm.h"
// Member `drone_swarms`
#include "fq/msg/detail/actor_drone_swarm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__ActorDroneSwarms__init(message_memory);
}

void ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_fini_function(void * message_memory)
{
  fq__msg__ActorDroneSwarms__fini(message_memory);
}

size_t ActorDroneSwarms__rosidl_typesupport_introspection_c__size_function__ActorDroneSwarm__drone_swarms(
  const void * untyped_member)
{
  const fq__msg__ActorDroneSwarm__Sequence * member =
    (const fq__msg__ActorDroneSwarm__Sequence *)(untyped_member);
  return member->size;
}

const void * ActorDroneSwarms__rosidl_typesupport_introspection_c__get_const_function__ActorDroneSwarm__drone_swarms(
  const void * untyped_member, size_t index)
{
  const fq__msg__ActorDroneSwarm__Sequence * member =
    (const fq__msg__ActorDroneSwarm__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ActorDroneSwarms__rosidl_typesupport_introspection_c__get_function__ActorDroneSwarm__drone_swarms(
  void * untyped_member, size_t index)
{
  fq__msg__ActorDroneSwarm__Sequence * member =
    (fq__msg__ActorDroneSwarm__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ActorDroneSwarms__rosidl_typesupport_introspection_c__resize_function__ActorDroneSwarm__drone_swarms(
  void * untyped_member, size_t size)
{
  fq__msg__ActorDroneSwarm__Sequence * member =
    (fq__msg__ActorDroneSwarm__Sequence *)(untyped_member);
  fq__msg__ActorDroneSwarm__Sequence__fini(member);
  return fq__msg__ActorDroneSwarm__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarms, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drone_swarms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarms, drone_swarms),  // bytes offset in struct
    NULL,  // default value
    ActorDroneSwarms__rosidl_typesupport_introspection_c__size_function__ActorDroneSwarm__drone_swarms,  // size() function pointer
    ActorDroneSwarms__rosidl_typesupport_introspection_c__get_const_function__ActorDroneSwarm__drone_swarms,  // get_const(index) function pointer
    ActorDroneSwarms__rosidl_typesupport_introspection_c__get_function__ActorDroneSwarm__drone_swarms,  // get(index) function pointer
    ActorDroneSwarms__rosidl_typesupport_introspection_c__resize_function__ActorDroneSwarm__drone_swarms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_members = {
  "fq__msg",  // message namespace
  "ActorDroneSwarms",  // message name
  2,  // number of fields
  sizeof(fq__msg__ActorDroneSwarms),
  ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_member_array,  // message members
  ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_type_support_handle = {
  0,
  &ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorDroneSwarms)() {
  ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, Header)();
  ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorDroneSwarm)();
  if (!ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_type_support_handle.typesupport_identifier) {
    ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActorDroneSwarms__rosidl_typesupport_introspection_c__ActorDroneSwarms_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
