// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseTargetInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_target_info__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_target_info__functions.h"
#include "fq/msg/detail/base_target_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseTargetInfo__init(message_memory);
}

void BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_fini_function(void * message_memory)
{
  fq__msg__BaseTargetInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseTargetInfo, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseTargetInfo, percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_members = {
  "fq__msg",  // message namespace
  "BaseTargetInfo",  // message name
  2,  // number of fields
  sizeof(fq__msg__BaseTargetInfo),
  BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_member_array,  // message members
  BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_type_support_handle = {
  0,
  &BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseTargetInfo)() {
  if (!BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_type_support_handle.typesupport_identifier) {
    BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseTargetInfo__rosidl_typesupport_introspection_c__BaseTargetInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif