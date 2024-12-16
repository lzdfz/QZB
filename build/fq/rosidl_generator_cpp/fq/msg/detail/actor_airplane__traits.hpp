// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorAirplane.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_AIRPLANE__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_AIRPLANE__TRAITS_HPP_

#include "fq/msg/detail/actor_airplane__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'base_data'
#include "fq/msg/detail/base_base_data__traits.hpp"
// Member 'attributes'
#include "fq/msg/detail/base_plane_attr__traits.hpp"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__traits.hpp"
// Member 'kinematics_data'
#include "fq/msg/detail/base_kinematics_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorAirplane>()
{
  return "fq::msg::ActorAirplane";
}

template<>
inline const char * name<fq::msg::ActorAirplane>()
{
  return "fq/msg/ActorAirplane";
}

template<>
struct has_fixed_size<fq::msg::ActorAirplane>
  : std::integral_constant<bool, has_fixed_size<fq::msg::BaseBaseData>::value && has_fixed_size<fq::msg::BaseBeReconnaissanceData>::value && has_fixed_size<fq::msg::BaseKinematicsData>::value && has_fixed_size<fq::msg::BasePlaneAttr>::value> {};

template<>
struct has_bounded_size<fq::msg::ActorAirplane>
  : std::integral_constant<bool, has_bounded_size<fq::msg::BaseBaseData>::value && has_bounded_size<fq::msg::BaseBeReconnaissanceData>::value && has_bounded_size<fq::msg::BaseKinematicsData>::value && has_bounded_size<fq::msg::BasePlaneAttr>::value> {};

template<>
struct is_message<fq::msg::ActorAirplane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_AIRPLANE__TRAITS_HPP_
