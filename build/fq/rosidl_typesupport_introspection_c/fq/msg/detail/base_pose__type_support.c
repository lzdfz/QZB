// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BasePose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_pose__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_pose__functions.h"
#include "fq/msg/detail/base_pose__struct.h"


// Include directives for member types
// Member `location`
#include "geometry_msgs/msg/point.h"
// Member `location`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `rotation`
#include "fq/msg/base_orientation3_d.h"
// Member `rotation`
#include "fq/msg/detail/base_orientation3_d__rosidl_typesupport_introspection_c.h"
// Member `velocity`
// Member `angular_velocity`
#include "geometry_msgs/msg/twist.h"
// Member `velocity`
// Member `angular_velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
#include "geometry_msgs/msg/accel.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BasePose__rosidl_typesupport_introspection_c__BasePose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BasePose__init(message_memory);
}

void BasePose__rosidl_typesupport_introspection_c__BasePose_fini_function(void * message_memory)
{
  fq__msg__BasePose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BasePose__rosidl_typesupport_introspection_c__BasePose_message_member_array[5] = {
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BasePose, location),  // bytes offset in struct
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
    offsetof(fq__msg__BasePose, rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BasePose, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BasePose, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BasePose, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BasePose__rosidl_typesupport_introspection_c__BasePose_message_members = {
  "fq__msg",  // message namespace
  "BasePose",  // message name
  5,  // number of fields
  sizeof(fq__msg__BasePose),
  BasePose__rosidl_typesupport_introspection_c__BasePose_message_member_array,  // message members
  BasePose__rosidl_typesupport_introspection_c__BasePose_init_function,  // function to initialize message memory (memory has to be allocated)
  BasePose__rosidl_typesupport_introspection_c__BasePose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BasePose__rosidl_typesupport_introspection_c__BasePose_message_type_support_handle = {
  0,
  &BasePose__rosidl_typesupport_introspection_c__BasePose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BasePose)() {
  BasePose__rosidl_typesupport_introspection_c__BasePose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  BasePose__rosidl_typesupport_introspection_c__BasePose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseOrientation3D)();
  BasePose__rosidl_typesupport_introspection_c__BasePose_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  BasePose__rosidl_typesupport_introspection_c__BasePose_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  BasePose__rosidl_typesupport_introspection_c__BasePose_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Accel)();
  if (!BasePose__rosidl_typesupport_introspection_c__BasePose_message_type_support_handle.typesupport_identifier) {
    BasePose__rosidl_typesupport_introspection_c__BasePose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BasePose__rosidl_typesupport_introspection_c__BasePose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
