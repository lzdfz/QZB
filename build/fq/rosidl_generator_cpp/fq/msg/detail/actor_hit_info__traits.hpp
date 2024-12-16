// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorHitInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HIT_INFO__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_HIT_INFO__TRAITS_HPP_

#include "fq/msg/detail/actor_hit_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorHitInfo>()
{
  return "fq::msg::ActorHitInfo";
}

template<>
inline const char * name<fq::msg::ActorHitInfo>()
{
  return "fq/msg/ActorHitInfo";
}

template<>
struct has_fixed_size<fq::msg::ActorHitInfo>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<fq::msg::ActorHitInfo>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<fq::msg::ActorHitInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_HIT_INFO__TRAITS_HPP_
