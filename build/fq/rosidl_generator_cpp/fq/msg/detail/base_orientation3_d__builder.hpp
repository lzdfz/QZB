// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseOrientation3D.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_ORIENTATION3_D__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_ORIENTATION3_D__BUILDER_HPP_

#include "fq/msg/detail/base_orientation3_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseOrientation3D_yaw
{
public:
  explicit Init_BaseOrientation3D_yaw(::fq::msg::BaseOrientation3D & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseOrientation3D yaw(::fq::msg::BaseOrientation3D::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseOrientation3D msg_;
};

class Init_BaseOrientation3D_pitch
{
public:
  explicit Init_BaseOrientation3D_pitch(::fq::msg::BaseOrientation3D & msg)
  : msg_(msg)
  {}
  Init_BaseOrientation3D_yaw pitch(::fq::msg::BaseOrientation3D::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_BaseOrientation3D_yaw(msg_);
  }

private:
  ::fq::msg::BaseOrientation3D msg_;
};

class Init_BaseOrientation3D_roll
{
public:
  Init_BaseOrientation3D_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseOrientation3D_pitch roll(::fq::msg::BaseOrientation3D::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_BaseOrientation3D_pitch(msg_);
  }

private:
  ::fq::msg::BaseOrientation3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseOrientation3D>()
{
  return fq::msg::builder::Init_BaseOrientation3D_roll();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_ORIENTATION3_D__BUILDER_HPP_
