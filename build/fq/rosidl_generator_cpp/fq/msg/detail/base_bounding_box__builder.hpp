// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseBoundingBox.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BOUNDING_BOX__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_BOUNDING_BOX__BUILDER_HPP_

#include "fq/msg/detail/base_bounding_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseBoundingBox_z
{
public:
  explicit Init_BaseBoundingBox_z(::fq::msg::BaseBoundingBox & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseBoundingBox z(::fq::msg::BaseBoundingBox::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseBoundingBox msg_;
};

class Init_BaseBoundingBox_y
{
public:
  explicit Init_BaseBoundingBox_y(::fq::msg::BaseBoundingBox & msg)
  : msg_(msg)
  {}
  Init_BaseBoundingBox_z y(::fq::msg::BaseBoundingBox::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BaseBoundingBox_z(msg_);
  }

private:
  ::fq::msg::BaseBoundingBox msg_;
};

class Init_BaseBoundingBox_x
{
public:
  Init_BaseBoundingBox_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseBoundingBox_y x(::fq::msg::BaseBoundingBox::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BaseBoundingBox_y(msg_);
  }

private:
  ::fq::msg::BaseBoundingBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseBoundingBox>()
{
  return fq::msg::builder::Init_BaseBoundingBox_x();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BOUNDING_BOX__BUILDER_HPP_
