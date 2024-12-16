// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorWarship.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_WARSHIP__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_WARSHIP__BUILDER_HPP_

#include "fq/msg/detail/actor_warship__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorWarship_be_reconnaissance_data
{
public:
  explicit Init_ActorWarship_be_reconnaissance_data(::fq::msg::ActorWarship & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorWarship be_reconnaissance_data(::fq::msg::ActorWarship::_be_reconnaissance_data_type arg)
  {
    msg_.be_reconnaissance_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorWarship msg_;
};

class Init_ActorWarship_kinematics_data
{
public:
  explicit Init_ActorWarship_kinematics_data(::fq::msg::ActorWarship & msg)
  : msg_(msg)
  {}
  Init_ActorWarship_be_reconnaissance_data kinematics_data(::fq::msg::ActorWarship::_kinematics_data_type arg)
  {
    msg_.kinematics_data = std::move(arg);
    return Init_ActorWarship_be_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorWarship msg_;
};

class Init_ActorWarship_base_data
{
public:
  Init_ActorWarship_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorWarship_kinematics_data base_data(::fq::msg::ActorWarship::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorWarship_kinematics_data(msg_);
  }

private:
  ::fq::msg::ActorWarship msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorWarship>()
{
  return fq::msg::builder::Init_ActorWarship_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_WARSHIP__BUILDER_HPP_
