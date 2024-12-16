// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorAirplanes.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_AIRPLANES__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_AIRPLANES__BUILDER_HPP_

#include "fq/msg/detail/actor_airplanes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorAirplanes_airplanes
{
public:
  explicit Init_ActorAirplanes_airplanes(::fq::msg::ActorAirplanes & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorAirplanes airplanes(::fq::msg::ActorAirplanes::_airplanes_type arg)
  {
    msg_.airplanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorAirplanes msg_;
};

class Init_ActorAirplanes_header
{
public:
  Init_ActorAirplanes_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorAirplanes_airplanes header(::fq::msg::ActorAirplanes::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorAirplanes_airplanes(msg_);
  }

private:
  ::fq::msg::ActorAirplanes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorAirplanes>()
{
  return fq::msg::builder::Init_ActorAirplanes_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_AIRPLANES__BUILDER_HPP_
