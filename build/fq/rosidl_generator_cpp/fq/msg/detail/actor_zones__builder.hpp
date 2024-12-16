// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorZones.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_ZONES__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_ZONES__BUILDER_HPP_

#include "fq/msg/detail/actor_zones__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorZones_zones
{
public:
  explicit Init_ActorZones_zones(::fq::msg::ActorZones & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorZones zones(::fq::msg::ActorZones::_zones_type arg)
  {
    msg_.zones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorZones msg_;
};

class Init_ActorZones_header
{
public:
  Init_ActorZones_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorZones_zones header(::fq::msg::ActorZones::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorZones_zones(msg_);
  }

private:
  ::fq::msg::ActorZones msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorZones>()
{
  return fq::msg::builder::Init_ActorZones_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_ZONES__BUILDER_HPP_
