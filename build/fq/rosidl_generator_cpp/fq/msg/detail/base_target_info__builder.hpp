// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseTargetInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_TARGET_INFO__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_TARGET_INFO__BUILDER_HPP_

#include "fq/msg/detail/base_target_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseTargetInfo_percent
{
public:
  explicit Init_BaseTargetInfo_percent(::fq::msg::BaseTargetInfo & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseTargetInfo percent(::fq::msg::BaseTargetInfo::_percent_type arg)
  {
    msg_.percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseTargetInfo msg_;
};

class Init_BaseTargetInfo_id
{
public:
  Init_BaseTargetInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseTargetInfo_percent id(::fq::msg::BaseTargetInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BaseTargetInfo_percent(msg_);
  }

private:
  ::fq::msg::BaseTargetInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseTargetInfo>()
{
  return fq::msg::builder::Init_BaseTargetInfo_id();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_TARGET_INFO__BUILDER_HPP_
