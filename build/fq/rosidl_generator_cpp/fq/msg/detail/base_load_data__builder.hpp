// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseLoadData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_LOAD_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_LOAD_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_load_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseLoadData_remaining_projectiles
{
public:
  Init_BaseLoadData_remaining_projectiles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fq::msg::BaseLoadData remaining_projectiles(::fq::msg::BaseLoadData::_remaining_projectiles_type arg)
  {
    msg_.remaining_projectiles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseLoadData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseLoadData>()
{
  return fq::msg::builder::Init_BaseLoadData_remaining_projectiles();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_LOAD_DATA__BUILDER_HPP_
