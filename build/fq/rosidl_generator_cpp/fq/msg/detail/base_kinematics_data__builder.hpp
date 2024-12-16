// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseKinematicsData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_kinematics_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseKinematicsData_rotation
{
public:
  explicit Init_BaseKinematicsData_rotation(::fq::msg::BaseKinematicsData & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseKinematicsData rotation(::fq::msg::BaseKinematicsData::_rotation_type arg)
  {
    msg_.rotation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseKinematicsData msg_;
};

class Init_BaseKinematicsData_location
{
public:
  Init_BaseKinematicsData_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseKinematicsData_rotation location(::fq::msg::BaseKinematicsData::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_BaseKinematicsData_rotation(msg_);
  }

private:
  ::fq::msg::BaseKinematicsData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseKinematicsData>()
{
  return fq::msg::builder::Init_BaseKinematicsData_location();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__BUILDER_HPP_
