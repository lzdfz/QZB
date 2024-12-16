// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/BaseKinematicsData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fq/msg/detail/base_kinematics_data__struct.hpp"
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

void BaseKinematicsData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fq::msg::BaseKinematicsData(_init);
}

void BaseKinematicsData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fq::msg::BaseKinematicsData *>(message_memory);
  typed_message->~BaseKinematicsData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BaseKinematicsData_message_member_array[2] = {
  {
    "location",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::BaseKinematicsData, location),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fq::msg::BaseOrientation3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::BaseKinematicsData, rotation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BaseKinematicsData_message_members = {
  "fq::msg",  // message namespace
  "BaseKinematicsData",  // message name
  2,  // number of fields
  sizeof(fq::msg::BaseKinematicsData),
  BaseKinematicsData_message_member_array,  // message members
  BaseKinematicsData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseKinematicsData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BaseKinematicsData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BaseKinematicsData_message_members,
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
get_message_type_support_handle<fq::msg::BaseKinematicsData>()
{
  return &::fq::msg::rosidl_typesupport_introspection_cpp::BaseKinematicsData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fq, msg, BaseKinematicsData)() {
  return &::fq::msg::rosidl_typesupport_introspection_cpp::BaseKinematicsData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
