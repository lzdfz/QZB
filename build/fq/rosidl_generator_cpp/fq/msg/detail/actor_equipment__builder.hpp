// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorEquipment.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_EQUIPMENT__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_EQUIPMENT__BUILDER_HPP_

#include "fq/msg/detail/actor_equipment__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorEquipment_be_interference_data
{
public:
  explicit Init_ActorEquipment_be_interference_data(::fq::msg::ActorEquipment & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorEquipment be_interference_data(::fq::msg::ActorEquipment::_be_interference_data_type arg)
  {
    msg_.be_interference_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorEquipment msg_;
};

class Init_ActorEquipment_be_reconnaissance_data
{
public:
  explicit Init_ActorEquipment_be_reconnaissance_data(::fq::msg::ActorEquipment & msg)
  : msg_(msg)
  {}
  Init_ActorEquipment_be_interference_data be_reconnaissance_data(::fq::msg::ActorEquipment::_be_reconnaissance_data_type arg)
  {
    msg_.be_reconnaissance_data = std::move(arg);
    return Init_ActorEquipment_be_interference_data(msg_);
  }

private:
  ::fq::msg::ActorEquipment msg_;
};

class Init_ActorEquipment_kinematics_data
{
public:
  explicit Init_ActorEquipment_kinematics_data(::fq::msg::ActorEquipment & msg)
  : msg_(msg)
  {}
  Init_ActorEquipment_be_reconnaissance_data kinematics_data(::fq::msg::ActorEquipment::_kinematics_data_type arg)
  {
    msg_.kinematics_data = std::move(arg);
    return Init_ActorEquipment_be_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorEquipment msg_;
};

class Init_ActorEquipment_base_data
{
public:
  Init_ActorEquipment_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorEquipment_kinematics_data base_data(::fq::msg::ActorEquipment::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorEquipment_kinematics_data(msg_);
  }

private:
  ::fq::msg::ActorEquipment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorEquipment>()
{
  return fq::msg::builder::Init_ActorEquipment_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_EQUIPMENT__BUILDER_HPP_
