// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseBytes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_bytes__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_bytes__functions.h"
#include "fq/msg/detail/base_bytes__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseBytes__init(message_memory);
}

void BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_fini_function(void * message_memory)
{
  fq__msg__BaseBytes__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBytes, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_members = {
  "fq__msg",  // message namespace
  "BaseBytes",  // message name
  1,  // number of fields
  sizeof(fq__msg__BaseBytes),
  BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_member_array,  // message members
  BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_type_support_handle = {
  0,
  &BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBytes)() {
  if (!BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_type_support_handle.typesupport_identifier) {
    BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseBytes__rosidl_typesupport_introspection_c__BaseBytes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
