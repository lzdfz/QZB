// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorControlInfos.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__TRAITS_HPP_

#include "fq/msg/detail/actor_control_infos__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "fq/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorControlInfos>()
{
  return "fq::msg::ActorControlInfos";
}

template<>
inline const char * name<fq::msg::ActorControlInfos>()
{
  return "fq/msg/ActorControlInfos";
}

template<>
struct has_fixed_size<fq::msg::ActorControlInfos>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fq::msg::ActorControlInfos>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fq::msg::ActorControlInfos>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__TRAITS_HPP_
