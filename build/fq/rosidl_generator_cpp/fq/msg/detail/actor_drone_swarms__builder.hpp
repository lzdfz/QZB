// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorDroneSwarms.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_DRONE_SWARMS__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_DRONE_SWARMS__BUILDER_HPP_

#include "fq/msg/detail/actor_drone_swarms__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorDroneSwarms_drone_swarms
{
public:
  explicit Init_ActorDroneSwarms_drone_swarms(::fq::msg::ActorDroneSwarms & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorDroneSwarms drone_swarms(::fq::msg::ActorDroneSwarms::_drone_swarms_type arg)
  {
    msg_.drone_swarms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarms msg_;
};

class Init_ActorDroneSwarms_header
{
public:
  Init_ActorDroneSwarms_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorDroneSwarms_drone_swarms header(::fq::msg::ActorDroneSwarms::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorDroneSwarms_drone_swarms(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarms msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorDroneSwarms>()
{
  return fq::msg::builder::Init_ActorDroneSwarms_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_DRONE_SWARMS__BUILDER_HPP_
