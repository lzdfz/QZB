// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseDamageConditionData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_damage_condition_data__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_damage_condition_data__functions.h"
#include "fq/msg/detail/base_damage_condition_data__struct.h"


// Include directives for member types
// Member `attack_remaining_amounts`
// Member `face_health_points`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseDamageConditionData__init(message_memory);
}

void BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_fini_function(void * message_memory)
{
  fq__msg__BaseDamageConditionData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_member_array[2] = {
  {
    "attack_remaining_amounts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseDamageConditionData, attack_remaining_amounts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "face_health_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseDamageConditionData, face_health_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_members = {
  "fq__msg",  // message namespace
  "BaseDamageConditionData",  // message name
  2,  // number of fields
  sizeof(fq__msg__BaseDamageConditionData),
  BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_member_array,  // message members
  BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_type_support_handle = {
  0,
  &BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseDamageConditionData)() {
  if (!BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_type_support_handle.typesupport_identifier) {
    BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseDamageConditionData__rosidl_typesupport_introspection_c__BaseDamageConditionData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
