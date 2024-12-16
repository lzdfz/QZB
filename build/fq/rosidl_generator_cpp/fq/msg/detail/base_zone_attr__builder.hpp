// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseZoneAttr.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_ZONE_ATTR__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_ZONE_ATTR__BUILDER_HPP_

#include "fq/msg/detail/base_zone_attr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseZoneAttr_radius
{
public:
  explicit Init_BaseZoneAttr_radius(::fq::msg::BaseZoneAttr & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseZoneAttr radius(::fq::msg::BaseZoneAttr::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseZoneAttr msg_;
};

class Init_BaseZoneAttr_height
{
public:
  Init_BaseZoneAttr_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseZoneAttr_radius height(::fq::msg::BaseZoneAttr::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_BaseZoneAttr_radius(msg_);
  }

private:
  ::fq::msg::BaseZoneAttr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseZoneAttr>()
{
  return fq::msg::builder::Init_BaseZoneAttr_height();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_ZONE_ATTR__BUILDER_HPP_
