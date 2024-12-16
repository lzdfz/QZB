// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/ActorZones.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/actor_zones__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/actor_zones__functions.h"
#include "fq/msg/detail/actor_zones__struct.h"


// Include directives for member types
// Member `header`
#include "fq/msg/header.h"
// Member `header`
#include "fq/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `zones`
#include "fq/msg/actor_zone.h"
// Member `zones`
#include "fq/msg/detail/actor_zone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActorZones__rosidl_typesupport_introspection_c__ActorZones_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__ActorZones__init(message_memory);
}

void ActorZones__rosidl_typesupport_introspection_c__ActorZones_fini_function(void * message_memory)
{
  fq__msg__ActorZones__fini(message_memory);
}

size_t ActorZones__rosidl_typesupport_introspection_c__size_function__ActorZone__zones(
  const void * untyped_member)
{
  const fq__msg__ActorZone__Sequence * member =
    (const fq__msg__ActorZone__Sequence *)(untyped_member);
  return member->size;
}

const void * ActorZones__rosidl_typesupport_introspection_c__get_const_function__ActorZone__zones(
  const void * untyped_member, size_t index)
{
  const fq__msg__ActorZone__Sequence * member =
    (const fq__msg__ActorZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ActorZones__rosidl_typesupport_introspection_c__get_function__ActorZone__zones(
  void * untyped_member, size_t index)
{
  fq__msg__ActorZone__Sequence * member =
    (fq__msg__ActorZone__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ActorZones__rosidl_typesupport_introspection_c__resize_function__ActorZone__zones(
  void * untyped_member, size_t size)
{
  fq__msg__ActorZone__Sequence * member =
    (fq__msg__ActorZone__Sequence *)(untyped_member);
  fq__msg__ActorZone__Sequence__fini(member);
  return fq__msg__ActorZone__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorZones, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorZones, zones),  // bytes offset in struct
    NULL,  // default value
    ActorZones__rosidl_typesupport_introspection_c__size_function__ActorZone__zones,  // size() function pointer
    ActorZones__rosidl_typesupport_introspection_c__get_const_function__ActorZone__zones,  // get_const(index) function pointer
    ActorZones__rosidl_typesupport_introspection_c__get_function__ActorZone__zones,  // get(index) function pointer
    ActorZones__rosidl_typesupport_introspection_c__resize_function__ActorZone__zones  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_members = {
  "fq__msg",  // message namespace
  "ActorZones",  // message name
  2,  // number of fields
  sizeof(fq__msg__ActorZones),
  ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_member_array,  // message members
  ActorZones__rosidl_typesupport_introspection_c__ActorZones_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorZones__rosidl_typesupport_introspection_c__ActorZones_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_type_support_handle = {
  0,
  &ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorZones)() {
  ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, Header)();
  ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorZone)();
  if (!ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_type_support_handle.typesupport_identifier) {
    ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActorZones__rosidl_typesupport_introspection_c__ActorZones_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif