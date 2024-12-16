// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BasePlaneAttr.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_PLANE_ATTR__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_PLANE_ATTR__BUILDER_HPP_

#include "fq/msg/detail/base_plane_attr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BasePlaneAttr_bomb_cold_down_time
{
public:
  explicit Init_BasePlaneAttr_bomb_cold_down_time(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  ::fq::msg::BasePlaneAttr bomb_cold_down_time(::fq::msg::BasePlaneAttr::_bomb_cold_down_time_type arg)
  {
    msg_.bomb_cold_down_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_bomb_velocity
{
public:
  explicit Init_BasePlaneAttr_bomb_velocity(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_bomb_cold_down_time bomb_velocity(::fq::msg::BasePlaneAttr::_bomb_velocity_type arg)
  {
    msg_.bomb_velocity = std::move(arg);
    return Init_BasePlaneAttr_bomb_cold_down_time(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_bomb_range
{
public:
  explicit Init_BasePlaneAttr_bomb_range(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_bomb_velocity bomb_range(::fq::msg::BasePlaneAttr::_bomb_range_type arg)
  {
    msg_.bomb_range = std::move(arg);
    return Init_BasePlaneAttr_bomb_velocity(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_bombload
{
public:
  explicit Init_BasePlaneAttr_bombload(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_bomb_range bombload(::fq::msg::BasePlaneAttr::_bombload_type arg)
  {
    msg_.bombload = std::move(arg);
    return Init_BasePlaneAttr_bomb_range(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_reconnaissance_angle
{
public:
  explicit Init_BasePlaneAttr_reconnaissance_angle(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_bombload reconnaissance_angle(::fq::msg::BasePlaneAttr::_reconnaissance_angle_type arg)
  {
    msg_.reconnaissance_angle = std::move(arg);
    return Init_BasePlaneAttr_bombload(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_reconnaissance_radius
{
public:
  explicit Init_BasePlaneAttr_reconnaissance_radius(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_reconnaissance_angle reconnaissance_radius(::fq::msg::BasePlaneAttr::_reconnaissance_radius_type arg)
  {
    msg_.reconnaissance_radius = std::move(arg);
    return Init_BasePlaneAttr_reconnaissance_angle(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_damage_value
{
public:
  explicit Init_BasePlaneAttr_damage_value(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_reconnaissance_radius damage_value(::fq::msg::BasePlaneAttr::_damage_value_type arg)
  {
    msg_.damage_value = std::move(arg);
    return Init_BasePlaneAttr_reconnaissance_radius(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_health_point
{
public:
  explicit Init_BasePlaneAttr_health_point(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_damage_value health_point(::fq::msg::BasePlaneAttr::_health_point_type arg)
  {
    msg_.health_point = std::move(arg);
    return Init_BasePlaneAttr_damage_value(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_limit_height
{
public:
  explicit Init_BasePlaneAttr_limit_height(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_health_point limit_height(::fq::msg::BasePlaneAttr::_limit_height_type arg)
  {
    msg_.limit_height = std::move(arg);
    return Init_BasePlaneAttr_health_point(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_yaw_rate_to_max_roll
{
public:
  explicit Init_BasePlaneAttr_yaw_rate_to_max_roll(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_limit_height yaw_rate_to_max_roll(::fq::msg::BasePlaneAttr::_yaw_rate_to_max_roll_type arg)
  {
    msg_.yaw_rate_to_max_roll = std::move(arg);
    return Init_BasePlaneAttr_limit_height(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_pitch_rate
{
public:
  explicit Init_BasePlaneAttr_pitch_rate(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_yaw_rate_to_max_roll pitch_rate(::fq::msg::BasePlaneAttr::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_BasePlaneAttr_yaw_rate_to_max_roll(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_roll_rate
{
public:
  explicit Init_BasePlaneAttr_roll_rate(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_pitch_rate roll_rate(::fq::msg::BasePlaneAttr::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_BasePlaneAttr_pitch_rate(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_max_pitch_angle
{
public:
  explicit Init_BasePlaneAttr_max_pitch_angle(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_roll_rate max_pitch_angle(::fq::msg::BasePlaneAttr::_max_pitch_angle_type arg)
  {
    msg_.max_pitch_angle = std::move(arg);
    return Init_BasePlaneAttr_roll_rate(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_max_roll_angle
{
public:
  explicit Init_BasePlaneAttr_max_roll_angle(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_max_pitch_angle max_roll_angle(::fq::msg::BasePlaneAttr::_max_roll_angle_type arg)
  {
    msg_.max_roll_angle = std::move(arg);
    return Init_BasePlaneAttr_max_pitch_angle(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_max_deceleration
{
public:
  explicit Init_BasePlaneAttr_max_deceleration(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_max_roll_angle max_deceleration(::fq::msg::BasePlaneAttr::_max_deceleration_type arg)
  {
    msg_.max_deceleration = std::move(arg);
    return Init_BasePlaneAttr_max_roll_angle(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_max_acceleration
{
public:
  explicit Init_BasePlaneAttr_max_acceleration(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_max_deceleration max_acceleration(::fq::msg::BasePlaneAttr::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_BasePlaneAttr_max_deceleration(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_max_velocity
{
public:
  explicit Init_BasePlaneAttr_max_velocity(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_max_acceleration max_velocity(::fq::msg::BasePlaneAttr::_max_velocity_type arg)
  {
    msg_.max_velocity = std::move(arg);
    return Init_BasePlaneAttr_max_acceleration(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_min_velocity
{
public:
  explicit Init_BasePlaneAttr_min_velocity(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_max_velocity min_velocity(::fq::msg::BasePlaneAttr::_min_velocity_type arg)
  {
    msg_.min_velocity = std::move(arg);
    return Init_BasePlaneAttr_max_velocity(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_load_type
{
public:
  explicit Init_BasePlaneAttr_load_type(::fq::msg::BasePlaneAttr & msg)
  : msg_(msg)
  {}
  Init_BasePlaneAttr_min_velocity load_type(::fq::msg::BasePlaneAttr::_load_type_type arg)
  {
    msg_.load_type = std::move(arg);
    return Init_BasePlaneAttr_min_velocity(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

class Init_BasePlaneAttr_airfoil_type
{
public:
  Init_BasePlaneAttr_airfoil_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasePlaneAttr_load_type airfoil_type(::fq::msg::BasePlaneAttr::_airfoil_type_type arg)
  {
    msg_.airfoil_type = std::move(arg);
    return Init_BasePlaneAttr_load_type(msg_);
  }

private:
  ::fq::msg::BasePlaneAttr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BasePlaneAttr>()
{
  return fq::msg::builder::Init_BasePlaneAttr_airfoil_type();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_PLANE_ATTR__BUILDER_HPP_
