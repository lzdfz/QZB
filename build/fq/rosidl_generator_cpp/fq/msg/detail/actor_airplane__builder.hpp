// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorAirplane.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_AIRPLANE__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_AIRPLANE__BUILDER_HPP_

#include "fq/msg/detail/actor_airplane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorAirplane_kinematics_data
{
public:
  explicit Init_ActorAirplane_kinematics_data(::fq::msg::ActorAirplane & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorAirplane kinematics_data(::fq::msg::ActorAirplane::_kinematics_data_type arg)
  {
    msg_.kinematics_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorAirplane msg_;
};

class Init_ActorAirplane_be_reconnaissance_data
{
public:
  explicit Init_ActorAirplane_be_reconnaissance_data(::fq::msg::ActorAirplane & msg)
  : msg_(msg)
  {}
  Init_ActorAirplane_kinematics_data be_reconnaissance_data(::fq::msg::ActorAirplane::_be_reconnaissance_data_type arg)
  {
    msg_.be_reconnaissance_data = std::move(arg);
    return Init_ActorAirplane_kinematics_data(msg_);
  }

private:
  ::fq::msg::ActorAirplane msg_;
};

class Init_ActorAirplane_attributes
{
public:
  explicit Init_ActorAirplane_attributes(::fq::msg::ActorAirplane & msg)
  : msg_(msg)
  {}
  Init_ActorAirplane_be_reconnaissance_data attributes(::fq::msg::ActorAirplane::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_ActorAirplane_be_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorAirplane msg_;
};

class Init_ActorAirplane_base_data
{
public:
  Init_ActorAirplane_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorAirplane_attributes base_data(::fq::msg::ActorAirplane::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorAirplane_attributes(msg_);
  }

private:
  ::fq::msg::ActorAirplane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorAirplane>()
{
  return fq::msg::builder::Init_ActorAirplane_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_AIRPLANE__BUILDER_HPP_
