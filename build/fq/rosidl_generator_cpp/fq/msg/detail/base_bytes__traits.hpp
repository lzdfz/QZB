// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/BaseBytes.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BYTES__TRAITS_HPP_
#define FQ__MSG__DETAIL__BASE_BYTES__TRAITS_HPP_

#include "fq/msg/detail/base_bytes__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::BaseBytes>()
{
  return "fq::msg::BaseBytes";
}

template<>
inline const char * name<fq::msg::BaseBytes>()
{
  return "fq/msg/BaseBytes";
}

template<>
struct has_fixed_size<fq::msg::BaseBytes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fq::msg::BaseBytes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fq::msg::BaseBytes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__BASE_BYTES__TRAITS_HPP_
