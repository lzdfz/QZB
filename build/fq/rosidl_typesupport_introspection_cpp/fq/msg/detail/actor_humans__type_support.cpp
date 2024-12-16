// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/ActorHumans.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fq/msg/detail/actor_humans__struct.hpp"
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

void ActorHumans_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fq::msg::ActorHumans(_init);
}

void ActorHumans_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fq::msg::ActorHumans *>(message_memory);
  typed_message->~ActorHumans();
}

size_t size_function__ActorHumans__humans(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<fq::msg::ActorHuman> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActorHumans__humans(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<fq::msg::ActorHuman> *>(untyped_member);
  return &member[index];
}

void * get_function__ActorHumans__humans(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<fq::msg::ActorHuman> *>(untyped_member);
  return &member[index];
}

void resize_function__ActorHumans__humans(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<fq::msg::ActorHuman> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActorHumans_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fq::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::ActorHumans, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "humans",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fq::msg::ActorHuman>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::ActorHumans, humans),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActorHumans__humans,  // size() function pointer
    get_const_function__ActorHumans__humans,  // get_const(index) function pointer
    get_function__ActorHumans__humans,  // get(index) function pointer
    resize_function__ActorHumans__humans  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActorHumans_message_members = {
  "fq::msg",  // message namespace
  "ActorHumans",  // message name
  2,  // number of fields
  sizeof(fq::msg::ActorHumans),
  ActorHumans_message_member_array,  // message members
  ActorHumans_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorHumans_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActorHumans_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActorHumans_message_members,
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
get_message_type_support_handle<fq::msg::ActorHumans>()
{
  return &::fq::msg::rosidl_typesupport_introspection_cpp::ActorHumans_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fq, msg, ActorHumans)() {
  return &::fq::msg::rosidl_typesupport_introspection_cpp::ActorHumans_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
