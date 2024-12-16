// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/BaseDamageConditionData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fq/msg/detail/base_damage_condition_data__struct.hpp"
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

void BaseDamageConditionData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fq::msg::BaseDamageConditionData(_init);
}

void BaseDamageConditionData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fq::msg::BaseDamageConditionData *>(message_memory);
  typed_message->~BaseDamageConditionData();
}

size_t size_function__BaseDamageConditionData__attack_remaining_amounts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseDamageConditionData__attack_remaining_amounts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseDamageConditionData__attack_remaining_amounts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__BaseDamageConditionData__attack_remaining_amounts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BaseDamageConditionData__face_health_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BaseDamageConditionData__face_health_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseDamageConditionData__face_health_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__BaseDamageConditionData__face_health_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BaseDamageConditionData_message_member_array[2] = {
  {
    "attack_remaining_amounts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::BaseDamageConditionData, attack_remaining_amounts),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseDamageConditionData__attack_remaining_amounts,  // size() function pointer
    get_const_function__BaseDamageConditionData__attack_remaining_amounts,  // get_const(index) function pointer
    get_function__BaseDamageConditionData__attack_remaining_amounts,  // get(index) function pointer
    resize_function__BaseDamageConditionData__attack_remaining_amounts  // resize(index) function pointer
  },
  {
    "face_health_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::BaseDamageConditionData, face_health_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseDamageConditionData__face_health_points,  // size() function pointer
    get_const_function__BaseDamageConditionData__face_health_points,  // get_const(index) function pointer
    get_function__BaseDamageConditionData__face_health_points,  // get(index) function pointer
    resize_function__BaseDamageConditionData__face_health_points  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BaseDamageConditionData_message_members = {
  "fq::msg",  // message namespace
  "BaseDamageConditionData",  // message name
  2,  // number of fields
  sizeof(fq::msg::BaseDamageConditionData),
  BaseDamageConditionData_message_member_array,  // message members
  BaseDamageConditionData_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseDamageConditionData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BaseDamageConditionData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BaseDamageConditionData_message_members,
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
get_message_type_support_handle<fq::msg::BaseDamageConditionData>()
{
  return &::fq::msg::rosidl_typesupport_introspection_cpp::BaseDamageConditionData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fq, msg, BaseDamageConditionData)() {
  return &::fq::msg::rosidl_typesupport_introspection_cpp::BaseDamageConditionData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
