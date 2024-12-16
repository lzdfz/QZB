// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/BaseZoneAttr.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_ZONE_ATTR__TRAITS_HPP_
#define FQ__MSG__DETAIL__BASE_ZONE_ATTR__TRAITS_HPP_

#include "fq/msg/detail/base_zone_attr__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::BaseZoneAttr>()
{
  return "fq::msg::BaseZoneAttr";
}

template<>
inline const char * name<fq::msg::BaseZoneAttr>()
{
  return "fq/msg/BaseZoneAttr";
}

template<>
struct has_fixed_size<fq::msg::BaseZoneAttr>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fq::msg::BaseZoneAttr>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fq::msg::BaseZoneAttr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__BASE_ZONE_ATTR__TRAITS_HPP_
