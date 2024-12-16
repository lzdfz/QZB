// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/BaseBeInterferenceData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fq/msg/detail/base_be_interference_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fq
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BaseBeInterferenceData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fq::msg::BaseBeInterferenceData(_init);
}

void BaseBeInterferenceData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fq::msg::BaseBeInterferenceData *>(message_memory);
  typed_message->~BaseBeInterferenceData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BaseBeInterferenceData_message_member_array[1] = {
  {
    "percent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::BaseBeInterferenceData, percent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BaseBeInterferenceData_message_members = {
  "fq::msg",  // message namespace
  "BaseBeInterferenceData",  // message name
  1,  // number of fields
  sizeof(fq::msg::BaseBeInterferenceData),
  BaseBeInterferenceData_message_member_array,  // message members
  BaseBeInterferenceData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseBeInterferenceData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BaseBeInterferenceData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BaseBeInterferenceData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fq


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fq::msg::BaseBeInterferenceData>()
{
  return &::fq::msg::rosidl_typesupport_introspection_cpp::BaseBeInterferenceData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fq, msg, BaseBeInterferenceData)() {
  return &::fq::msg::rosidl_typesupport_introspection_cpp::BaseBeInterferenceData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif