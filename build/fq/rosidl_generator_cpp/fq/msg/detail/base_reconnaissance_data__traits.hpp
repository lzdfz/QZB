// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/BaseReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__TRAITS_HPP_
#define FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__TRAITS_HPP_

#include "fq/msg/detail/base_reconnaissance_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::BaseReconnaissanceData>()
{
  return "fq::msg::BaseReconnaissanceData";
}

template<>
inline const char * name<fq::msg::BaseReconnaissanceData>()
{
  return "fq/msg/BaseReconnaissanceData";
}

template<>
struct has_fixed_size<fq::msg::BaseReconnaissanceData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fq::msg::BaseReconnaissanceData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fq::msg::BaseReconnaissanceData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__TRAITS_HPP_
