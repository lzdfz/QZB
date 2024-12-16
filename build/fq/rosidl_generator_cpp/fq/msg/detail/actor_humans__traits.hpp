// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorHumans.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HUMANS__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_HUMANS__TRAITS_HPP_

#include "fq/msg/detail/actor_humans__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "fq/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorHumans>()
{
  return "fq::msg::ActorHumans";
}

template<>
inline const char * name<fq::msg::ActorHumans>()
{
  return "fq/msg/ActorHumans";
}

template<>
struct has_fixed_size<fq::msg::ActorHumans>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fq::msg::ActorHumans>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fq::msg::ActorHumans>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_HUMANS__TRAITS_HPP_
