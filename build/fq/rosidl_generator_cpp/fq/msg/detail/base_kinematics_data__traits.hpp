// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/BaseKinematicsData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__TRAITS_HPP_
#define FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__TRAITS_HPP_

#include "fq/msg/detail/base_kinematics_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'location'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'rotation'
#include "fq/msg/detail/base_orientation3_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::BaseKinematicsData>()
{
  return "fq::msg::BaseKinematicsData";
}

template<>
inline const char * name<fq::msg::BaseKinematicsData>()
{
  return "fq/msg/BaseKinematicsData";
}

template<>
struct has_fixed_size<fq::msg::BaseKinematicsData>
  : std::integral_constant<bool, has_fixed_size<fq::msg::BaseOrientation3D>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<fq::msg::BaseKinematicsData>
  : std::integral_constant<bool, has_bounded_size<fq::msg::BaseOrientation3D>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<fq::msg::BaseKinematicsData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__BASE_KINEMATICS_DATA__TRAITS_HPP_
