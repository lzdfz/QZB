// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorVehicles.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_VEHICLES__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_VEHICLES__BUILDER_HPP_

#include "fq/msg/detail/actor_vehicles__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorVehicles_vehicles
{
public:
  explicit Init_ActorVehicles_vehicles(::fq::msg::ActorVehicles & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorVehicles vehicles(::fq::msg::ActorVehicles::_vehicles_type arg)
  {
    msg_.vehicles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorVehicles msg_;
};

class Init_ActorVehicles_header
{
public:
  Init_ActorVehicles_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorVehicles_vehicles header(::fq::msg::ActorVehicles::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorVehicles_vehicles(msg_);
  }

private:
  ::fq::msg::ActorVehicles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorVehicles>()
{
  return fq::msg::builder::Init_ActorVehicles_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_VEHICLES__BUILDER_HPP_
