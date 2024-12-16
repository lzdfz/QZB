// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorBuilding.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_BUILDING__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_BUILDING__TRAITS_HPP_

#include "fq/msg/detail/actor_building__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'base_data'
#include "fq/msg/detail/base_base_data__traits.hpp"
// Member 'location'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'rotation'
#include "fq/msg/detail/base_orientation3_d__traits.hpp"
// Member 'damage_condition_data'
#include "fq/msg/detail/base_damage_condition_data__traits.hpp"
// Member 'be_reconnaissance_data'
#include "fq/msg/detail/base_be_reconnaissance_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorBuilding>()
{
  return "fq::msg::ActorBuilding";
}

template<>
inline const char * name<fq::msg::ActorBuilding>()
{
  return "fq/msg/ActorBuilding";
}

template<>
struct has_fixed_size<fq::msg::ActorBuilding>
  : std::integral_constant<bool, has_fixed_size<fq::msg::BaseBaseData>::value && has_fixed_size<fq::msg::BaseBeReconnaissanceData>::value && has_fixed_size<fq::msg::BaseDamageConditionData>::value && has_fixed_size<fq::msg::BaseOrientation3D>::value && has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<fq::msg::ActorBuilding>
  : std::integral_constant<bool, has_bounded_size<fq::msg::BaseBaseData>::value && has_bounded_size<fq::msg::BaseBeReconnaissanceData>::value && has_bounded_size<fq::msg::BaseDamageConditionData>::value && has_bounded_size<fq::msg::BaseOrientation3D>::value && has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<fq::msg::ActorBuilding>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_BUILDING__TRAITS_HPP_
