// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseBeInterferenceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BE_INTERFERENCE_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_BE_INTERFERENCE_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_be_interference_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseBeInterferenceData_percent
{
public:
  Init_BaseBeInterferenceData_percent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fq::msg::BaseBeInterferenceData percent(::fq::msg::BaseBeInterferenceData::_percent_type arg)
  {
    msg_.percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseBeInterferenceData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseBeInterferenceData>()
{
  return fq::msg::builder::Init_BaseBeInterferenceData_percent();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BE_INTERFERENCE_DATA__BUILDER_HPP_
