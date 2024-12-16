// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseBeInterferenceData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_be_interference_data__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_be_interference_data__functions.h"
#include "fq/msg/detail/base_be_interference_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseBeInterferenceData__init(message_memory);
}

void BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_fini_function(void * message_memory)
{
  fq__msg__BaseBeInterferenceData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_member_array[1] = {
  {
    "percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBeInterferenceData, percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_members = {
  "fq__msg",  // message namespace
  "BaseBeInterferenceData",  // message name
  1,  // number of fields
  sizeof(fq__msg__BaseBeInterferenceData),
  BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_member_array,  // message members
  BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_type_support_handle = {
  0,
  &BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBeInterferenceData)() {
  if (!BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_type_support_handle.typesupport_identifier) {
    BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseBeInterferenceData__rosidl_typesupport_introspection_c__BaseBeInterferenceData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
