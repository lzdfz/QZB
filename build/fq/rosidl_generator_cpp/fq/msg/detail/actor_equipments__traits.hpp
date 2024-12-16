// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fq:msg/ActorEquipments.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_EQUIPMENTS__TRAITS_HPP_
#define FQ__MSG__DETAIL__ACTOR_EQUIPMENTS__TRAITS_HPP_

#include "fq/msg/detail/actor_equipments__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "fq/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fq::msg::ActorEquipments>()
{
  return "fq::msg::ActorEquipments";
}

template<>
inline const char * name<fq::msg::ActorEquipments>()
{
  return "fq/msg/ActorEquipments";
}

template<>
struct has_fixed_size<fq::msg::ActorEquipments>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fq::msg::ActorEquipments>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fq::msg::ActorEquipments>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FQ__MSG__DETAIL__ACTOR_EQUIPMENTS__TRAITS_HPP_
