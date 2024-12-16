// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorHuman.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HUMAN__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_HUMAN__TRAITS_HPP_

#include "fq/msg/detail/actor_human__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'base_data'
#include "fq/msg/detail/base_base_data__traits.hpp"
// Member 'kinematics_data'
#include "fq/msg/detail/base_kinematics_data__traits.hpp"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorHuman>()
{
  return "fq::msg::ActorHuman";
}

template<>
inline const char * name<fq::msg::ActorHuman>()
{
  return "fq/msg/ActorHuman";
}

template<>
struct has_fixed_size<fq::msg::ActorHuman>
  : std::integral_constant<bool, has_fixed_size<fq::msg::BaseBaseData>::value && has_fixed_size<fq::msg::BaseBeReconnaissanceData>::value && has_fixed_size<fq::msg::BaseKinematicsData>::value> {};

template<>
struct has_bounded_size<fq::msg::ActorHuman>
  : std::integral_constant<bool, has_bounded_size<fq::msg::BaseBaseData>::value && has_bounded_size<fq::msg::BaseBeReconnaissanceData>::value && has_bounded_size<fq::msg::BaseKinematicsData>::value> {};

template<>
struct is_message<fq::msg::ActorHuman>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_HUMAN__TRAITS_HPP_
