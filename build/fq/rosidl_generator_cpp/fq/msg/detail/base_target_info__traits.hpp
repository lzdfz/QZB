// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/BaseTargetInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_TARGET_INFO__TRAITS_HPP_
#define FQ__MSG__DETAIL__BASE_TARGET_INFO__TRAITS_HPP_

#include "fq/msg/detail/base_target_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::BaseTargetInfo>()
{
  return "fq::msg::BaseTargetInfo";
}

template<>
inline const char * name<fq::msg::BaseTargetInfo>()
{
  return "fq/msg/BaseTargetInfo";
}

template<>
struct has_fixed_size<fq::msg::BaseTargetInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fq::msg::BaseTargetInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fq::msg::BaseTargetInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__BASE_TARGET_INFO__TRAITS_HPP_
