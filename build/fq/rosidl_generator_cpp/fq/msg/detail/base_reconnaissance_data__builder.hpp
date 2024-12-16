// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_reconnaissance_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseReconnaissanceData_num
{
public:
  explicit Init_BaseReconnaissanceData_num(::fq::msg::BaseReconnaissanceData & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseReconnaissanceData num(::fq::msg::BaseReconnaissanceData::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseReconnaissanceData msg_;
};

class Init_BaseReconnaissanceData_targets
{
public:
  Init_BaseReconnaissanceData_targets()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseReconnaissanceData_num targets(::fq::msg::BaseReconnaissanceData::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return Init_BaseReconnaissanceData_num(msg_);
  }

private:
  ::fq::msg::BaseReconnaissanceData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseReconnaissanceData>()
{
  return fq::msg::builder::Init_BaseReconnaissanceData_targets();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_RECONNAISSANCE_DATA__BUILDER_HPP_
