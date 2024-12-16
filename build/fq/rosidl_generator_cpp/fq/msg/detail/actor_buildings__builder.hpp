// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorBuildings.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_BUILDINGS__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_BUILDINGS__BUILDER_HPP_

#include "fq/msg/detail/actor_buildings__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorBuildings_buildings
{
public:
  explicit Init_ActorBuildings_buildings(::fq::msg::ActorBuildings & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorBuildings buildings(::fq::msg::ActorBuildings::_buildings_type arg)
  {
    msg_.buildings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorBuildings msg_;
};

class Init_ActorBuildings_header
{
public:
  Init_ActorBuildings_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorBuildings_buildings header(::fq::msg::ActorBuildings::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorBuildings_buildings(msg_);
  }

private:
  ::fq::msg::ActorBuildings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorBuildings>()
{
  return fq::msg::builder::Init_ActorBuildings_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_BUILDINGS__BUILDER_HPP_
