// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorHitInfos.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HIT_INFOS__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_HIT_INFOS__BUILDER_HPP_

#include "fq/msg/detail/actor_hit_infos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorHitInfos_hit_info
{
public:
  explicit Init_ActorHitInfos_hit_info(::fq::msg::ActorHitInfos & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorHitInfos hit_info(::fq::msg::ActorHitInfos::_hit_info_type arg)
  {
    msg_.hit_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorHitInfos msg_;
};

class Init_ActorHitInfos_header
{
public:
  Init_ActorHitInfos_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorHitInfos_hit_info header(::fq::msg::ActorHitInfos::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorHitInfos_hit_info(msg_);
  }

private:
  ::fq::msg::ActorHitInfos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorHitInfos>()
{
  return fq::msg::builder::Init_ActorHitInfos_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_HIT_INFOS__BUILDER_HPP_
