// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseInterferenceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_interference_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseInterferenceData_num
{
public:
  explicit Init_BaseInterferenceData_num(::fq::msg::BaseInterferenceData & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseInterferenceData num(::fq::msg::BaseInterferenceData::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseInterferenceData msg_;
};

class Init_BaseInterferenceData_targets
{
public:
  Init_BaseInterferenceData_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseInterferenceData_num targets(::fq::msg::BaseInterferenceData::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_BaseInterferenceData_num(msg_);
  }

private:
  ::fq::msg::BaseInterferenceData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseInterferenceData>()
{
  return fq::msg::builder::Init_BaseInterferenceData_targets();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__BUILDER_HPP_
