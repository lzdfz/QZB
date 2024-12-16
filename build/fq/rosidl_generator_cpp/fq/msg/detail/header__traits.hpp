// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__HEADER__TRAITS_HPP_
#define FQ__MSG__DETAIL__HEADER__TRAITS_HPP_

#include "fq/msg/detail/header__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::Header>()
{
  return "fq::msg::Header";
}

template<>
inline const char * name<fq::msg::Header>()
{
  return "fq/msg/Header";
}

template<>
struct has_fixed_size<fq::msg::Header>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fq::msg::Header>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fq::msg::Header>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__HEADER__TRAITS_HPP_
