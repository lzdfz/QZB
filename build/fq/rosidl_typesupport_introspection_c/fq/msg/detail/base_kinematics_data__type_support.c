// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseKinematicsData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_kinematics_data__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_kinematics_data__functions.h"
#include "fq/msg/detail/base_kinematics_data__struct.h"


// Include directives for member types
// Member `location`
#include "geometry_msgs/msg/point.h"
// Member `location`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `rotation`
#include "fq/msg/base_orientation3_d.h"
// Member `rotation`
#include "fq/msg/detail/base_orientation3_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseKinematicsData__init(message_memory);
}

void BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_fini_function(void * message_memory)
{
  fq__msg__BaseKinematicsData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_member_array[2] = {
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseKinematicsData, location),  // bytes offset in struct
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
    offsetof(fq__msg__BaseKinematicsData, rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_members = {
  "fq__msg",  // message namespace
  "BaseKinematicsData",  // message name
  2,  // number of fields
  sizeof(fq__msg__BaseKinematicsData),
  BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_member_array,  // message members
  BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_type_support_handle = {
  0,
  &BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseKinematicsData)() {
  BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseOrientation3D)();
  if (!BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_type_support_handle.typesupport_identifier) {
    BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseKinematicsData__rosidl_typesupport_introspection_c__BaseKinematicsData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
