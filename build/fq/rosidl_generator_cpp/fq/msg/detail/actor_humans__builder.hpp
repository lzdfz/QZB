// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorHumans.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HUMANS__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_HUMANS__BUILDER_HPP_

#include "fq/msg/detail/actor_humans__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorHumans_humans
{
public:
  explicit Init_ActorHumans_humans(::fq::msg::ActorHumans & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorHumans humans(::fq::msg::ActorHumans::_humans_type arg)
  {
    msg_.humans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorHumans msg_;
};

class Init_ActorHumans_header
{
public:
  Init_ActorHumans_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorHumans_humans header(::fq::msg::ActorHumans::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorHumans_humans(msg_);
  }

private:
  ::fq::msg::ActorHumans msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorHumans>()
{
  return fq::msg::builder::Init_ActorHumans_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_HUMANS__BUILDER_HPP_
