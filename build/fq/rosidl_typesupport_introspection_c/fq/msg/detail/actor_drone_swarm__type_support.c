// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/actor_drone_swarm__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/actor_drone_swarm__functions.h"
#include "fq/msg/detail/actor_drone_swarm__struct.h"


// Include directives for member types
// Member `base_data`
#include "fq/msg/base_base_data.h"
// Member `base_data`
#include "fq/msg/detail/base_base_data__rosidl_typesupport_introspection_c.h"
// Member `attributes`
#include "fq/msg/base_plane_attr.h"
// Member `attributes`
#include "fq/msg/detail/base_plane_attr__rosidl_typesupport_introspection_c.h"
// Member `drone_swarm_kinematics_data`
#include "fq/msg/base_airplane_kinematics_data.h"
// Member `drone_swarm_kinematics_data`
#include "fq/msg/detail/base_airplane_kinematics_data__rosidl_typesupport_introspection_c.h"
// Member `load_data`
#include "fq/msg/base_load_data.h"
// Member `load_data`
#include "fq/msg/detail/base_load_data__rosidl_typesupport_introspection_c.h"
// Member `reconnaissance_data`
#include "fq/msg/base_reconnaissance_data.h"
// Member `reconnaissance_data`
#include "fq/msg/detail/base_reconnaissance_data__rosidl_typesupport_introspection_c.h"
// Member `interference_data`
#include "fq/msg/base_interference_data.h"
// Member `interference_data`
#include "fq/msg/detail/base_interference_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__ActorDroneSwarm__init(message_memory);
}

void ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_fini_function(void * message_memory)
{
  fq__msg__ActorDroneSwarm__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array[6] = {
  {
    "base_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarm, base_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarm, attributes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drone_swarm_kinematics_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarm, drone_swarm_kinematics_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "load_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarm, load_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reconnaissance_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarm, reconnaissance_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interference_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorDroneSwarm, interference_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_members = {
  "fq__msg",  // message namespace
  "ActorDroneSwarm",  // message name
  6,  // number of fields
  sizeof(fq__msg__ActorDroneSwarm),
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array,  // message members
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_type_support_handle = {
  0,
  &ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorDroneSwarm)() {
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBaseData)();
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BasePlaneAttr)();
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseAirplaneKinematicsData)();
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseLoadData)();
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseReconnaissanceData)();
  ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseInterferenceData)();
  if (!ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_type_support_handle.typesupport_identifier) {
    ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActorDroneSwarm__rosidl_typesupport_introspection_c__ActorDroneSwarm_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
