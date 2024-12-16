// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorVehicle.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_VEHICLE__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_VEHICLE__BUILDER_HPP_

#include "fq/msg/detail/actor_vehicle__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorVehicle_be_reconnaissance_data
{
public:
  explicit Init_ActorVehicle_be_reconnaissance_data(::fq::msg::ActorVehicle & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorVehicle be_reconnaissance_data(::fq::msg::ActorVehicle::_be_reconnaissance_data_type arg)
  {
    msg_.be_reconnaissance_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorVehicle msg_;
};

class Init_ActorVehicle_damage_condition_data
{
public:
  explicit Init_ActorVehicle_damage_condition_data(::fq::msg::ActorVehicle & msg)
  : msg_(msg)
  {}
  Init_ActorVehicle_be_reconnaissance_data damage_condition_data(::fq::msg::ActorVehicle::_damage_condition_data_type arg)
  {
    msg_.damage_condition_data = std::move(arg);
    return Init_ActorVehicle_be_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorVehicle msg_;
};

class Init_ActorVehicle_kinematics_data
{
public:
  explicit Init_ActorVehicle_kinematics_data(::fq::msg::ActorVehicle & msg)
  : msg_(msg)
  {}
  Init_ActorVehicle_damage_condition_data kinematics_data(::fq::msg::ActorVehicle::_kinematics_data_type arg)
  {
    msg_.kinematics_data = std::move(arg);
    return Init_ActorVehicle_damage_condition_data(msg_);
  }

private:
  ::fq::msg::ActorVehicle msg_;
};

class Init_ActorVehicle_base_data
{
public:
  Init_ActorVehicle_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorVehicle_kinematics_data base_data(::fq::msg::ActorVehicle::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorVehicle_kinematics_data(msg_);
  }

private:
  ::fq::msg::ActorVehicle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorVehicle>()
{
  return fq::msg::builder::Init_ActorVehicle_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_VEHICLE__BUILDER_HPP_
