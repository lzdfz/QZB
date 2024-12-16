// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__BUILDER_HPP_
#define FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__BUILDER_HPP_

#include "fq/msg/detail/base_be_reconnaissance_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fq
{

namespace msg
{

namespace builder
{

class Init_BaseBeReconnaissanceData_b_covered
{
public:
  explicit Init_BaseBeReconnaissanceData_b_covered(::fq::msg::BaseBeReconnaissanceData & msg)
  : msg_(msg)
  {}
  ::fq::msg::BaseBeReconnaissanceData b_covered(::fq::msg::BaseBeReconnaissanceData::_b_covered_type arg)
  {
    msg_.b_covered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fq::msg::BaseBeReconnaissanceData msg_;
};

class Init_BaseBeReconnaissanceData_b_found
{
public:
  Init_BaseBeReconnaissanceData_b_found()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseBeReconnaissanceData_b_covered b_found(::fq::msg::BaseBeReconnaissanceData::_b_found_type arg)
  {
    msg_.b_found = std::move(arg);
    return Init_BaseBeReconnaissanceData_b_covered(msg_);
  }

private:
  ::fq::msg::BaseBeReconnaissanceData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fq::msg::BaseBeReconnaissanceData>()
{
  return fq::msg::builder::Init_BaseBeReconnaissanceData_b_found();
}

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__BUILDER_HPP_
