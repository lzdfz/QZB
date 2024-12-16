// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorHuman.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HUMAN__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_HUMAN__BUILDER_HPP_

#include "fq/msg/detail/actor_human__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorHuman_be_reconnaissance_data
{
public:
  explicit Init_ActorHuman_be_reconnaissance_data(::fq::msg::ActorHuman & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorHuman be_reconnaissance_data(::fq::msg::ActorHuman::_be_reconnaissance_data_type arg)
  {
    msg_.be_reconnaissance_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorHuman msg_;
};

class Init_ActorHuman_kinematics_data
{
public:
  explicit Init_ActorHuman_kinematics_data(::fq::msg::ActorHuman & msg)
  : msg_(msg)
  {}
  Init_ActorHuman_be_reconnaissance_data kinematics_data(::fq::msg::ActorHuman::_kinematics_data_type arg)
  {
    msg_.kinematics_data = std::move(arg);
    return Init_ActorHuman_be_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorHuman msg_;
};

class Init_ActorHuman_base_data
{
public:
  Init_ActorHuman_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorHuman_kinematics_data base_data(::fq::msg::ActorHuman::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorHuman_kinematics_data(msg_);
  }

private:
  ::fq::msg::ActorHuman msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorHuman>()
{
  return fq::msg::builder::Init_ActorHuman_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_HUMAN__BUILDER_HPP_
