// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseBytes.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BYTES__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_BYTES__BUILDER_HPP_

#include "fq/msg/detail/base_bytes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseBytes_data
{
public:
  Init_BaseBytes_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fq::msg::BaseBytes data(::fq::msg::BaseBytes::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseBytes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseBytes>()
{
  return fq::msg::builder::Init_BaseBytes_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BYTES__BUILDER_HPP_
