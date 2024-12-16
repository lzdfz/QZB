// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorWarships.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_WARSHIPS__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_WARSHIPS__BUILDER_HPP_

#include "fq/msg/detail/actor_warships__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorWarships_warships
{
public:
  explicit Init_ActorWarships_warships(::fq::msg::ActorWarships & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorWarships warships(::fq::msg::ActorWarships::_warships_type arg)
  {
    msg_.warships = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorWarships msg_;
};

class Init_ActorWarships_header
{
public:
  Init_ActorWarships_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorWarships_warships header(::fq::msg::ActorWarships::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorWarships_warships(msg_);
  }

private:
  ::fq::msg::ActorWarships msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorWarships>()
{
  return fq::msg::builder::Init_ActorWarships_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_WARSHIPS__BUILDER_HPP_
