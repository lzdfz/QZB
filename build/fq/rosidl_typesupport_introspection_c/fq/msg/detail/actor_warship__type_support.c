// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/ActorWarship.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/actor_warship__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/actor_warship__functions.h"
#include "fq/msg/detail/actor_warship__struct.h"


// Include directives for member types
// Member `base_data`
#include "fq/msg/base_base_data.h"
// Member `base_data`
#include "fq/msg/detail/base_base_data__rosidl_typesupport_introspection_c.h"
// Member `kinematics_data`
#include "fq/msg/base_kinematics_data.h"
// Member `kinematics_data`
#include "fq/msg/detail/base_kinematics_data__rosidl_typesupport_introspection_c.h"
// Member `be_reconnaissance_data`
#include "fq/msg/base_be_reconnaissance_data.h"
// Member `be_reconnaissance_data`
#include "fq/msg/detail/base_be_reconnaissance_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__ActorWarship__init(message_memory);
}

void ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_fini_function(void * message_memory)
{
  fq__msg__ActorWarship__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_member_array[3] = {
  {
    "base_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorWarship, base_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kinematics_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorWarship, kinematics_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "be_reconnaissance_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorWarship, be_reconnaissance_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_members = {
  "fq__msg",  // message namespace
  "ActorWarship",  // message name
  3,  // number of fields
  sizeof(fq__msg__ActorWarship),
  ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_member_array,  // message members
  ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_type_support_handle = {
  0,
  &ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorWarship)() {
  ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBaseData)();
  ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseKinematicsData)();
  ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBeReconnaissanceData)();
  if (!ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_type_support_handle.typesupport_identifier) {
    ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActorWarship__rosidl_typesupport_introspection_c__ActorWarship_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif