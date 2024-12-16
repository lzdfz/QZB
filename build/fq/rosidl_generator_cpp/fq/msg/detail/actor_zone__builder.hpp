// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/ActorZone.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_ZONE__BUILDER_HPP_
#define FQ__MSG__DETAIL__ACTOR_ZONE__BUILDER_HPP_

#include "fq/msg/detail/actor_zone__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_ActorZone_be_interference_data
{
public:
  explicit Init_ActorZone_be_interference_data(::fq::msg::ActorZone & msg)
  : msg_(msg)
  {}
  ::fq::msg::ActorZone be_interference_data(::fq::msg::ActorZone::_be_interference_data_type arg)
  {
    msg_.be_interference_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::ActorZone msg_;
};

class Init_ActorZone_be_reconnaissance_data
{
public:
  explicit Init_ActorZone_be_reconnaissance_data(::fq::msg::ActorZone & msg)
  : msg_(msg)
  {}
  Init_ActorZone_be_interference_data be_reconnaissance_data(::fq::msg::ActorZone::_be_reconnaissance_data_type arg)
  {
    msg_.be_reconnaissance_data = std::move(arg);
    return Init_ActorZone_be_interference_data(msg_);
  }

private:
  ::fq::msg::ActorZone msg_;
};

class Init_ActorZone_location
{
public:
  explicit Init_ActorZone_location(::fq::msg::ActorZone & msg)
  : msg_(msg)
  {}
  Init_ActorZone_be_reconnaissance_data location(::fq::msg::ActorZone::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_ActorZone_be_reconnaissance_data(msg_);
  }

private:
  ::fq::msg::ActorZone msg_;
};

class Init_ActorZone_attributes
{
public:
  explicit Init_ActorZone_attributes(::fq::msg::ActorZone & msg)
  : msg_(msg)
  {}
  Init_ActorZone_location attributes(::fq::msg::ActorZone::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_ActorZone_location(msg_);
  }

private:
  ::fq::msg::ActorZone msg_;
};

class Init_ActorZone_base_data
{
public:
  Init_ActorZone_base_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActorZone_attributes base_data(::fq::msg::ActorZone::_base_data_type arg)
  {
    msg_.base_data = std::move(arg);
    return Init_ActorZone_attributes(msg_);
  }

private:
  ::fq::msg::ActorZone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::ActorZone>()
{
  return fq::msg::builder::Init_ActorZone_base_data();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_ZONE__BUILDER_HPP_
