// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorControlInfos.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__BUILDER_HPP_

#include "fq/msg/detail/actor_control_infos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorControlInfos_control_info
{
public:
  explicit Init_ActorControlInfos_control_info(::fq::msg::ActorControlInfos & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorControlInfos control_info(::fq::msg::ActorControlInfos::_control_info_type arg)
  {
    msg_.control_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorControlInfos msg_;
};

class Init_ActorControlInfos_header
{
public:
  Init_ActorControlInfos_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorControlInfos_control_info header(::fq::msg::ActorControlInfos::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ActorControlInfos_control_info(msg_);
  }

private:
  ::fq::msg::ActorControlInfos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorControlInfos>()
{
  return fq::msg::builder::Init_ActorControlInfos_header();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__BUILDER_HPP_
