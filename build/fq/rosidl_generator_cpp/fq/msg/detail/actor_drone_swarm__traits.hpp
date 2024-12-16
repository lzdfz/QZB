// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorDroneSwarm.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__TRAITS_HPP_

#include "fq/msg/detail/actor_drone_swarm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'base_data'
#include "fq/msg/detail/base_base_data__traits.hpp"
// Member 'attributes'
#include "fq/msg/detail/base_plane_attr__traits.hpp"
// Member 'drone_swarm_kinematics_data'
#include "fq/msg/detail/base_airplane_kinematics_data__traits.hpp"
// Member 'load_data'
#include "fq/msg/detail/base_load_data__traits.hpp"
// Member 'reconnaissance_data'
#include "fq/msg/detail/base_reconnaissance_data__traits.hpp"
// Member 'interference_data'
#include "fq/msg/detail/base_interference_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorDroneSwarm>()
{
  return "fq::msg::ActorDroneSwarm";
}

template<>
inline const char * name<fq::msg::ActorDroneSwarm>()
{
  return "fq/msg/ActorDroneSwarm";
}

template<>
struct has_fixed_size<fq::msg::ActorDroneSwarm>
  : std::integral_constant<bool, has_fixed_size<fq::msg::BaseAirplaneKinematicsData>::value && has_fixed_size<fq::msg::BaseBaseData>::value && has_fixed_size<fq::msg::BaseInterferenceData>::value && has_fixed_size<fq::msg::BaseLoadData>::value && has_fixed_size<fq::msg::BasePlaneAttr>::value && has_fixed_size<fq::msg::BaseReconnaissanceData>::value> {};

template<>
struct has_bounded_size<fq::msg::ActorDroneSwarm>
  : std::integral_constant<bool, has_bounded_size<fq::msg::BaseAirplaneKinematicsData>::value && has_bounded_size<fq::msg::BaseBaseData>::value && has_bounded_size<fq::msg::BaseInterferenceData>::value && has_bounded_size<fq::msg::BaseLoadData>::value && has_bounded_size<fq::msg::BasePlaneAttr>::value && has_bounded_size<fq::msg::BaseReconnaissanceData>::value> {};

template<>
struct is_message<fq::msg::ActorDroneSwarm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_DRONE_SWARM__TRAITS_HPP_
