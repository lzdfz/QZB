// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/ActorControlInfos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fq/msg/detail/actor_control_infos__struct.hpp"
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

void ActorControlInfos_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fq::msg::ActorControlInfos(_init);
}

void ActorControlInfos_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fq::msg::ActorControlInfos *>(message_memory);
  typed_message->~ActorControlInfos();
}

size_t size_function__ActorControlInfos__control_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<fq::msg::ActorControlInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActorControlInfos__control_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<fq::msg::ActorControlInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__ActorControlInfos__control_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<fq::msg::ActorControlInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__ActorControlInfos__control_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<fq::msg::ActorControlInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActorControlInfos_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fq::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::ActorControlInfos, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "control_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fq::msg::ActorControlInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fq::msg::ActorControlInfos, control_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActorControlInfos__control_info,  // size() function pointer
    get_const_function__ActorControlInfos__control_info,  // get_const(index) function pointer
    get_function__ActorControlInfos__control_info,  // get(index) function pointer
    resize_function__ActorControlInfos__control_info  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActorControlInfos_message_members = {
  "fq::msg",  // message namespace
  "ActorControlInfos",  // message name
  2,  // number of fields
  sizeof(fq::msg::ActorControlInfos),
  ActorControlInfos_message_member_array,  // message members
  ActorControlInfos_init_function,  // function to initialize message memory (memory has to be allocated)
  ActorControlInfos_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActorControlInfos_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActorControlInfos_message_members,
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
get_message_type_support_handle<fq::msg::ActorControlInfos>()
{
  return &::fq::msg::rosidl_typesupport_introspection_cpp::ActorControlInfos_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fq, msg, ActorControlInfos)() {
  return &::fq::msg::rosidl_typesupport_introspection_cpp::ActorControlInfos_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
