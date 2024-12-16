// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorBuilding.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_BUILDING__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_BUILDING__BUILDER_HPP_

#include "fq/msg/detail/actor_building__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorBuilding_be_reconnaissance_data
{
public:
  explicit Init_ActorBuilding_be_reconnaissance_data(::fq::msg::ActorBuilding & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorBuilding be_reconnaissance_data(::fq::msg::ActorBuilding::_be_reconnaissance_data_type arg)
  {
    msg_.be_reconnaissance_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorBuilding msg_;
};

class Init_ActorBuilding_damage_condition_data
{
public:
  explicit Init_ActorBuilding_damage_condition_data(::fq::msg::ActorBuilding & msg)
  : msg_(msg)
  {}
  Init_ActorBuilding_be_reconnaissance_data damage_condition_data(::fq::msg::ActorBuilding::_damage_condition_data_type arg)
  {
    msg_.damage_condition_data = std::move(arg);
    return Init_ActorBuilding_be_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorBuilding msg_;
};

class Init_ActorBuilding_rotation
{
public:
  explicit Init_ActorBuilding_rotation(::fq::msg::ActorBuilding & msg)
  : msg_(msg)
  {}
  Init_ActorBuilding_damage_condition_data rotation(::fq::msg::ActorBuilding::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_ActorBuilding_damage_condition_data(msg_);
  }

private:
  ::fq::msg::ActorBuilding msg_;
};

class Init_ActorBuilding_location
{
public:
  explicit Init_ActorBuilding_location(::fq::msg::ActorBuilding & msg)
  : msg_(msg)
  {}
  Init_ActorBuilding_rotation location(::fq::msg::ActorBuilding::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_ActorBuilding_rotation(msg_);
  }

private:
  ::fq::msg::ActorBuilding msg_;
};

class Init_ActorBuilding_base_data
{
public:
  Init_ActorBuilding_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorBuilding_location base_data(::fq::msg::ActorBuilding::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorBuilding_location(msg_);
  }

private:
  ::fq::msg::ActorBuilding msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorBuilding>()
{
  return fq::msg::builder::Init_ActorBuilding_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_BUILDING__BUILDER_HPP_
