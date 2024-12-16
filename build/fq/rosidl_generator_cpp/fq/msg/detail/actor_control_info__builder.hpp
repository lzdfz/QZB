// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorControlInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__BUILDER_HPP_

#include "fq/msg/detail/actor_control_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorControlInfo_target_headings
{
public:
  explicit Init_ActorControlInfo_target_headings(::fq::msg::ActorControlInfo & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorControlInfo target_headings(::fq::msg::ActorControlInfo::_target_headings_type arg)
  {
    msg_.target_headings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorControlInfo msg_;
};

class Init_ActorControlInfo_target_velocity
{
public:
  explicit Init_ActorControlInfo_target_velocity(::fq::msg::ActorControlInfo & msg)
  : msg_(msg)
  {}
  Init_ActorControlInfo_target_headings target_velocity(::fq::msg::ActorControlInfo::_target_velocity_type arg)
  {
    msg_.target_velocity = std::move(arg);
    return Init_ActorControlInfo_target_headings(msg_);
  }

private:
  ::fq::msg::ActorControlInfo msg_;
};

class Init_ActorControlInfo_max_velocity
{
public:
  explicit Init_ActorControlInfo_max_velocity(::fq::msg::ActorControlInfo & msg)
  : msg_(msg)
  {}
  Init_ActorControlInfo_target_velocity max_velocity(::fq::msg::ActorControlInfo::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_ActorControlInfo_target_velocity(msg_);
  }

private:
  ::fq::msg::ActorControlInfo msg_;
};

class Init_ActorControlInfo_target_positions
{
public:
  explicit Init_ActorControlInfo_target_positions(::fq::msg::ActorControlInfo & msg)
  : msg_(msg)
  {}
  Init_ActorControlInfo_max_velocity target_positions(::fq::msg::ActorControlInfo::_target_positions_type arg)
  {
    msg_.target_positions = std::move(arg);
    return Init_ActorControlInfo_max_velocity(msg_);
  }

private:
  ::fq::msg::ActorControlInfo msg_;
};

class Init_ActorControlInfo_id
{
public:
  Init_ActorControlInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorControlInfo_target_positions id(::fq::msg::ActorControlInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ActorControlInfo_target_positions(msg_);
  }

private:
  ::fq::msg::ActorControlInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorControlInfo>()
{
  return fq::msg::builder::Init_ActorControlInfo_id();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFO__BUILDER_HPP_
