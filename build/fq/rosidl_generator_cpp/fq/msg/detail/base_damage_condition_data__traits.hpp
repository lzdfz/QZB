// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/BaseDamageConditionData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__TRAITS_HPP_
#define FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__TRAITS_HPP_

#include "fq/msg/detail/base_damage_condition_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::BaseDamageConditionData>()
{
  return "fq::msg::BaseDamageConditionData";
}

template<>
inline const char * name<fq::msg::BaseDamageConditionData>()
{
  return "fq/msg/BaseDamageConditionData";
}

template<>
struct has_fixed_size<fq::msg::BaseDamageConditionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fq::msg::BaseDamageConditionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fq::msg::BaseDamageConditionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__TRAITS_HPP_
