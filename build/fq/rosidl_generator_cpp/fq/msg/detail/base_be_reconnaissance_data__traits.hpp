// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__TRAITS_HPP_
#define FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__TRAITS_HPP_

#include "fq/msg/detail/base_be_reconnaissance_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::BaseBeReconnaissanceData>()
{
  return "fq::msg::BaseBeReconnaissanceData";
}

template<>
inline const char * name<fq::msg::BaseBeReconnaissanceData>()
{
  return "fq/msg/BaseBeReconnaissanceData";
}

template<>
struct has_fixed_size<fq::msg::BaseBeReconnaissanceData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fq::msg::BaseBeReconnaissanceData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fq::msg::BaseBeReconnaissanceData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__TRAITS_HPP_
