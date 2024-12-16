// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__HEADER__BUILDER_HPP_
#define FQ__MSG__DETAIL__HEADER__BUILDER_HPP_

#include "fq/msg/detail/header__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_Header_timestamp_sec
{
public:
  Init_Header_timestamp_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fq::msg::Header timestamp_sec(::fq::msg::Header::_timestamp_sec_type arg)
  {
    msg_.timestamp_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::Header msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::Header>()
{
  return fq::msg::builder::Init_Header_timestamp_sec();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__HEADER__BUILDER_HPP_
