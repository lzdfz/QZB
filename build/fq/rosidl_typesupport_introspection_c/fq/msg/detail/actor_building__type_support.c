// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/ActorBuilding.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/actor_building__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/actor_building__functions.h"
#include "fq/msg/detail/actor_building__struct.h"


// Include directives for member types
// Member `base_data`
#include "fq/msg/base_base_data.h"
// Member `base_data`
#include "fq/msg/detail/base_base_data__rosidl_typesupport_introspection_c.h"
// Member `location`
#include "geometry_msgs/msg/point.h"
// Member `location`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `rotation`
#include "fq/msg/base_orientation3_d.h"
// Member `rotation`
#include "fq/msg/detail/base_orientation3_d__rosidl_typesupport_introspection_c.h"
// Member `damage_condition_data`
#include "fq/msg/base_damage_condition_data.h"
// Member `damage_condition_data`
#include "fq/msg/detail/base_damage_condition_data__rosidl_typesupport_introspection_c.h"
// Member `be_reconnaissance_data`
#include "fq/msg/base_be_reconnaissance_data.h"
// Member `be_reconnaissance_data`
#include "fq/msg/detail/base_be_reconnaissance_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__ActorBuilding__init(message_memory);
}

void ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_fini_function(void * message_memory)
{
  fq__msg__ActorBuilding__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_member_array[5] = {
  {
    "base_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorBuilding, base_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorBuilding, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorBuilding, rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damage_condition_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__ActorBuilding, damage_condition_data),  // bytes offset in struct
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
    offsetof(fq__msg__ActorBuilding, be_reconnaissance_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_members = {
  "fq__msg",  // message namespace
  "ActorBuilding",  // message name
  5,  // number of fields
  sizeof(fq__msg__ActorBuilding),
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_member_array,  // message members
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_type_support_handle = {
  0,
  &ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, ActorBuilding)() {
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBaseData)();
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseOrientation3D)();
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseDamageConditionData)();
  ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBeReconnaissanceData)();
  if (!ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_type_support_handle.typesupport_identifier) {
    ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActorBuilding__rosidl_typesupport_introspection_c__ActorBuilding_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
