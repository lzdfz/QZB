// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorEquipments.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_EQUIPMENTS__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_EQUIPMENTS__BUILDER_HPP_

#include "fq/msg/detail/actor_equipments__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorEquipments_equipments
{
public:
  explicit Init_ActorEquipments_equipments(::fq::msg::ActorEquipments & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorEquipments equipments(::fq::msg::ActorEquipments::_equipments_type arg)
  {
    msg_.equipments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorEquipments msg_;
};

class Init_ActorEquipments_header
{
public:
  Init_ActorEquipments_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorEquipments_equipments header(::fq::msg::ActorEquipments::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorEquipments_equipments(msg_);
  }

private:
  ::fq::msg::ActorEquipments msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorEquipments>()
{
  return fq::msg::builder::Init_ActorEquipments_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_EQUIPMENTS__BUILDER_HPP_
