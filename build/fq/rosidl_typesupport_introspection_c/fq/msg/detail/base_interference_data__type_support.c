// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fq:msg/BaseInterferenceData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fq/msg/detail/base_interference_data__rosidl_typesupport_introspection_c.h"
#include "fq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fq/msg/detail/base_interference_data__functions.h"
#include "fq/msg/detail/base_interference_data__struct.h"


// Include directives for member types
// Member `targets`
#include "fq/msg/base_target_info.h"
// Member `targets`
#include "fq/msg/detail/base_target_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fq__msg__BaseInterferenceData__init(message_memory);
}

void BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_fini_function(void * message_memory)
{
  fq__msg__BaseInterferenceData__fini(message_memory);
}

size_t BaseInterferenceData__rosidl_typesupport_introspection_c__size_function__BaseTargetInfo__targets(
  const void * untyped_member)
{
  const fq__msg__BaseTargetInfo__Sequence * member =
    (const fq__msg__BaseTargetInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * BaseInterferenceData__rosidl_typesupport_introspection_c__get_const_function__BaseTargetInfo__targets(
  const void * untyped_member, size_t index)
{
  const fq__msg__BaseTargetInfo__Sequence * member =
    (const fq__msg__BaseTargetInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BaseInterferenceData__rosidl_typesupport_introspection_c__get_function__BaseTargetInfo__targets(
  void * untyped_member, size_t index)
{
  fq__msg__BaseTargetInfo__Sequence * member =
    (fq__msg__BaseTargetInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BaseInterferenceData__rosidl_typesupport_introspection_c__resize_function__BaseTargetInfo__targets(
  void * untyped_member, size_t size)
{
  fq__msg__BaseTargetInfo__Sequence * member =
    (fq__msg__BaseTargetInfo__Sequence *)(untyped_member);
  fq__msg__BaseTargetInfo__Sequence__fini(member);
  return fq__msg__BaseTargetInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_member_array[2] = {
  {
    "targets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseInterferenceData, targets),  // bytes offset in struct
    NULL,  // default value
    BaseInterferenceData__rosidl_typesupport_introspection_c__size_function__BaseTargetInfo__targets,  // size() function pointer
    BaseInterferenceData__rosidl_typesupport_introspection_c__get_const_function__BaseTargetInfo__targets,  // get_const(index) function pointer
    BaseInterferenceData__rosidl_typesupport_introspection_c__get_function__BaseTargetInfo__targets,  // get(index) function pointer
    BaseInterferenceData__rosidl_typesupport_introspection_c__resize_function__BaseTargetInfo__targets  // resize(index) function pointer
  },
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq__msg__BaseInterferenceData, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_members = {
  "fq__msg",  // message namespace
  "BaseInterferenceData",  // message name
  2,  // number of fields
  sizeof(fq__msg__BaseInterferenceData),
  BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_member_array,  // message members
  BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_type_support_handle = {
  0,
  &BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseInterferenceData)() {
  BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fq, msg, BaseTargetInfo)();
  if (!BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_type_support_handle.typesupport_identifier) {
    BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BaseInterferenceData__rosidl_typesupport_introspection_c__BaseInterferenceData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
