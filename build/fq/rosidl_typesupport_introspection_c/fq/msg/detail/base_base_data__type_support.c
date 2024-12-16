// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseBaseData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_base_data__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_base_data__functions.h"
#include "fq/msg/detail/base_base_data__struct.h"


// Include directives for member types
// Member `type_id`
// Member `actor_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `bounding_box`
#include "fq/msg/base_bounding_box.h"
// Member `bounding_box`
#include "fq/msg/detail/base_bounding_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseBaseData__init(message_memory);
}

void BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_fini_function(void * message_memory)
{
  fq__msg__BaseBaseData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_member_array[6] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBaseData, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "health_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBaseData, health_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBaseData, type_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBaseData, actor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBaseData, bounding_box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseBaseData, b_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_members = {
  "fq__msg",  // message namespace
  "BaseBaseData",  // message name
  6,  // number of fields
  sizeof(fq__msg__BaseBaseData),
  BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_member_array,  // message members
  BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_type_support_handle = {
  0,
  &BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBaseData)() {
  BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseBoundingBox)();
  if (!BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_type_support_handle.typesupport_identifier) {
    BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseBaseData__rosidl_typesupport_introspection_c__BaseBaseData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
