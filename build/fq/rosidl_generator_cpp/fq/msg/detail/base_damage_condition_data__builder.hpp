// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseDamageConditionData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_damage_condition_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseDamageConditionData_face_health_points
{
public:
  explicit Init_BaseDamageConditionData_face_health_points(::fq::msg::BaseDamageConditionData & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseDamageConditionData face_health_points(::fq::msg::BaseDamageConditionData::_face_health_points_type arg)
  {
    msg_.face_health_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseDamageConditionData msg_;
};

class Init_BaseDamageConditionData_attack_remaining_amounts
{
public:
  Init_BaseDamageConditionData_attack_remaining_amounts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseDamageConditionData_face_health_points attack_remaining_amounts(::fq::msg::BaseDamageConditionData::_attack_remaining_amounts_type arg)
  {
    msg_.attack_remaining_amounts = std::move(arg);
    return Init_BaseDamageConditionData_face_health_points(msg_);
  }

private:
  ::fq::msg::BaseDamageConditionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseDamageConditionData>()
{
  return fq::msg::builder::Init_BaseDamageConditionData_attack_remaining_amounts();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__BUILDER_HPP_
