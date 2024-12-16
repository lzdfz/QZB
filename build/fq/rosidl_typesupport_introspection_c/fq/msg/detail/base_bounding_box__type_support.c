// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseBoundingBox.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_bounding_box__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_bounding_box__functions.h"
#include "fq/msg/detail/base_bounding_box__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseBoundingBox__init(message_memory);
}

void BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_fini_function(void * message_memory)
{
  fq__msg__BaseBoundingBox__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBoundingBox, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBoundingBox, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBoundingBox, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_members = {
  "fq__msg",  // message namespace
  "BaseBoundingBox",  // message name
  3,  // number of fields
  sizeof(fq__msg__BaseBoundingBox),
  BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_member_array,  // message members
  BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_type_support_handle = {
  0,
  &BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBoundingBox)() {
  if (!BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_type_support_handle.typesupport_identifier) {
    BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseBoundingBox__rosidl_typesupport_introspection_c__BaseBoundingBox_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
