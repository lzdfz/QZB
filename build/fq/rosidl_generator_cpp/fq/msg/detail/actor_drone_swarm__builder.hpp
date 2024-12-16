// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__BUILDER_HPP_

#include "fq/msg/detail/actor_drone_swarm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorDroneSwarm_interference_data
{
public:
  explicit Init_ActorDroneSwarm_interference_data(::fq::msg::ActorDroneSwarm & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorDroneSwarm interference_data(::fq::msg::ActorDroneSwarm::_interference_data_type arg)
  {
    msg_.interference_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarm msg_;
};

class Init_ActorDroneSwarm_reconnaissance_data
{
public:
  explicit Init_ActorDroneSwarm_reconnaissance_data(::fq::msg::ActorDroneSwarm & msg)
  : msg_(msg)
  {}
  Init_ActorDroneSwarm_interference_data reconnaissance_data(::fq::msg::ActorDroneSwarm::_reconnaissance_data_type arg)
  {
    msg_.reconnaissance_data = std::move(arg);
    return Init_ActorDroneSwarm_interference_data(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarm msg_;
};

class Init_ActorDroneSwarm_load_data
{
public:
  explicit Init_ActorDroneSwarm_load_data(::fq::msg::ActorDroneSwarm & msg)
  : msg_(msg)
  {}
  Init_ActorDroneSwarm_reconnaissance_data load_data(::fq::msg::ActorDroneSwarm::_load_data_type arg)
  {
    msg_.load_data = std::move(arg);
    return Init_ActorDroneSwarm_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarm msg_;
};

class Init_ActorDroneSwarm_drone_swarm_kinematics_data
{
public:
  explicit Init_ActorDroneSwarm_drone_swarm_kinematics_data(::fq::msg::ActorDroneSwarm & msg)
  : msg_(msg)
  {}
  Init_ActorDroneSwarm_load_data drone_swarm_kinematics_data(::fq::msg::ActorDroneSwarm::_drone_swarm_kinematics_data_type arg)
  {
    msg_.drone_swarm_kinematics_data = std::move(arg);
    return Init_ActorDroneSwarm_load_data(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarm msg_;
};

class Init_ActorDroneSwarm_attributes
{
public:
  explicit Init_ActorDroneSwarm_attributes(::fq::msg::ActorDroneSwarm & msg)
  : msg_(msg)
  {}
  Init_ActorDroneSwarm_drone_swarm_kinematics_data attributes(::fq::msg::ActorDroneSwarm::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_ActorDroneSwarm_drone_swarm_kinematics_data(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarm msg_;
};

class Init_ActorDroneSwarm_base_data
{
public:
  Init_ActorDroneSwarm_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorDroneSwarm_attributes base_data(::fq::msg::ActorDroneSwarm::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorDroneSwarm_attributes(msg_);
  }

private:
  ::fq::msg::ActorDroneSwarm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorDroneSwarm>()
{
  return fq::msg::builder::Init_ActorDroneSwarm_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__BUILDER_HPP_
