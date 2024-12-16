// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BasePose.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_POSE__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_POSE__BUILDER_HPP_

#include "fq/msg/detail/base_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BasePose_acceleration
{
public:
  explicit Init_BasePose_acceleration(::fq::msg::BasePose & msg)
  : msg_(msg)
  {}
  ::fq::msg::BasePose acceleration(::fq::msg::BasePose::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BasePose msg_;
};

class Init_BasePose_angular_velocity
{
public:
  explicit Init_BasePose_angular_velocity(::fq::msg::BasePose & msg)
  : msg_(msg)
  {}
  Init_BasePose_acceleration angular_velocity(::fq::msg::BasePose::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_BasePose_acceleration(msg_);
  }

private:
  ::fq::msg::BasePose msg_;
};

class Init_BasePose_velocity
{
public:
  explicit Init_BasePose_velocity(::fq::msg::BasePose & msg)
  : msg_(msg)
  {}
  Init_BasePose_angular_velocity velocity(::fq::msg::BasePose::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_BasePose_angular_velocity(msg_);
  }

private:
  ::fq::msg::BasePose msg_;
};

class Init_BasePose_rotation
{
public:
  explicit Init_BasePose_rotation(::fq::msg::BasePose & msg)
  : msg_(msg)
  {}
  Init_BasePose_velocity rotation(::fq::msg::BasePose::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_BasePose_velocity(msg_);
  }

private:
  ::fq::msg::BasePose msg_;
};

class Init_BasePose_location
{
public:
  Init_BasePose_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasePose_rotation location(::fq::msg::BasePose::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_BasePose_rotation(msg_);
  }

private:
  ::fq::msg::BasePose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BasePose>()
{
  return fq::msg::builder::Init_BasePose_location();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_POSE__BUILDER_HPP_
