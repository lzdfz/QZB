// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseBaseData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BASE_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_BASE_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_base_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseBaseData_b_target
{
public:
  explicit Init_BaseBaseData_b_target(::fq::msg::BaseBaseData & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseBaseData b_target(::fq::msg::BaseBaseData::_b_target_type arg)
  {
    msg_.b_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseBaseData msg_;
};

class Init_BaseBaseData_bounding_box
{
public:
  explicit Init_BaseBaseData_bounding_box(::fq::msg::BaseBaseData & msg)
  : msg_(msg)
  {}
  Init_BaseBaseData_b_target bounding_box(::fq::msg::BaseBaseData::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_BaseBaseData_b_target(msg_);
  }

private:
  ::fq::msg::BaseBaseData msg_;
};

class Init_BaseBaseData_actor_type
{
public:
  explicit Init_BaseBaseData_actor_type(::fq::msg::BaseBaseData & msg)
  : msg_(msg)
  {}
  Init_BaseBaseData_bounding_box actor_type(::fq::msg::BaseBaseData::_actor_type_type arg)
  {
    msg_.actor_type = std::move(arg);
    return Init_BaseBaseData_bounding_box(msg_);
  }

private:
  ::fq::msg::BaseBaseData msg_;
};

class Init_BaseBaseData_type_id
{
public:
  explicit Init_BaseBaseData_type_id(::fq::msg::BaseBaseData & msg)
  : msg_(msg)
  {}
  Init_BaseBaseData_actor_type type_id(::fq::msg::BaseBaseData::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_BaseBaseData_actor_type(msg_);
  }

private:
  ::fq::msg::BaseBaseData msg_;
};

class Init_BaseBaseData_health_point
{
public:
  explicit Init_BaseBaseData_health_point(::fq::msg::BaseBaseData & msg)
  : msg_(msg)
  {}
  Init_BaseBaseData_type_id health_point(::fq::msg::BaseBaseData::_health_point_type arg)
  {
    msg_.health_point = std::move(arg);
    return Init_BaseBaseData_type_id(msg_);
  }

private:
  ::fq::msg::BaseBaseData msg_;
};

class Init_BaseBaseData_id
{
public:
  Init_BaseBaseData_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseBaseData_health_point id(::fq::msg::BaseBaseData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BaseBaseData_health_point(msg_);
  }

private:
  ::fq::msg::BaseBaseData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseBaseData>()
{
  return fq::msg::builder::Init_BaseBaseData_id();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BASE_DATA__BUILDER_HPP_
