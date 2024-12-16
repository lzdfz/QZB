// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseAirplaneKinematicsData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_AIRPLANE_KINEMATICS_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_AIRPLANE_KINEMATICS_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_airplane_kinematics_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseAirplaneKinematicsData_acceleration
{
public:
  explicit Init_BaseAirplaneKinematicsData_acceleration(::fq::msg::BaseAirplaneKinematicsData & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseAirplaneKinematicsData acceleration(::fq::msg::BaseAirplaneKinematicsData::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseAirplaneKinematicsData msg_;
};

class Init_BaseAirplaneKinematicsData_angular_velocity
{
public:
  explicit Init_BaseAirplaneKinematicsData_angular_velocity(::fq::msg::BaseAirplaneKinematicsData & msg)
  : msg_(msg)
  {}
  Init_BaseAirplaneKinematicsData_acceleration angular_velocity(::fq::msg::BaseAirplaneKinematicsData::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_BaseAirplaneKinematicsData_acceleration(msg_);
  }

private:
  ::fq::msg::BaseAirplaneKinematicsData msg_;
};

class Init_BaseAirplaneKinematicsData_velocity
{
public:
  explicit Init_BaseAirplaneKinematicsData_velocity(::fq::msg::BaseAirplaneKinematicsData & msg)
  : msg_(msg)
  {}
  Init_BaseAirplaneKinematicsData_angular_velocity velocity(::fq::msg::BaseAirplaneKinematicsData::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_BaseAirplaneKinematicsData_angular_velocity(msg_);
  }

private:
  ::fq::msg::BaseAirplaneKinematicsData msg_;
};

class Init_BaseAirplaneKinematicsData_rotation
{
public:
  explicit Init_BaseAirplaneKinematicsData_rotation(::fq::msg::BaseAirplaneKinematicsData & msg)
  : msg_(msg)
  {}
  Init_BaseAirplaneKinematicsData_velocity rotation(::fq::msg::BaseAirplaneKinematicsData::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return Init_BaseAirplaneKinematicsData_velocity(msg_);
  }

private:
  ::fq::msg::BaseAirplaneKinematicsData msg_;
};

class Init_BaseAirplaneKinematicsData_location
{
public:
  Init_BaseAirplaneKinematicsData_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseAirplaneKinematicsData_rotation location(::fq::msg::BaseAirplaneKinematicsData::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_BaseAirplaneKinematicsData_rotation(msg_);
  }

private:
  ::fq::msg::BaseAirplaneKinematicsData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseAirplaneKinematicsData>()
{
  return fq::msg::builder::Init_BaseAirplaneKinematicsData_location();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_AIRPLANE_KINEMATICS_DATA__BUILDER_HPP_
