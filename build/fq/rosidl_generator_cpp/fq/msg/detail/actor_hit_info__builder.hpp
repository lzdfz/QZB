// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorHitInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HIT_INFO__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_HIT_INFO__BUILDER_HPP_

#include "fq/msg/detail/actor_hit_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorHitInfo_direction
{
public:
  explicit Init_ActorHitInfo_direction(::fq::msg::ActorHitInfo & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorHitInfo direction(::fq::msg::ActorHitInfo::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorHitInfo msg_;
};

class Init_ActorHitInfo_id
{
public:
  Init_ActorHitInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorHitInfo_direction id(::fq::msg::ActorHitInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ActorHitInfo_direction(msg_);
  }

private:
  ::fq::msg::ActorHitInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorHitInfo>()
{
  return fq::msg::builder::Init_ActorHitInfo_id();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_HIT_INFO__BUILDER_HPP_
