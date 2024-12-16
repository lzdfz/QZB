// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseBeReconnaissanceData __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseBeReconnaissanceData __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseBeReconnaissanceData_
{
  using Type = BaseBeReconnaissanceData_<ContainerAllocator>;

  explicit BaseBeReconnaissanceData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b_found = false;
      this->b_covered = false;
    }
  }

  explicit BaseBeReconnaissanceData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b_found = false;
      this->b_covered = false;
    }
  }

  // field types and members
  using _b_found_type =
    bool;
  _b_found_type b_found;
  using _b_covered_type =
    bool;
  _b_covered_type b_covered;

  // setters for named parameter idiom
  Type & set__b_found(
    const bool & _arg)
  {
    this->b_found = _arg;
    return *this;
  }
  Type & set__b_covered(
    const bool & _arg)
  {
    this->b_covered = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseBeReconnaissanceData_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseBeReconnaissanceData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBeReconnaissanceData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBeReconnaissanceData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseBeReconnaissanceData
    std::shared_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseBeReconnaissanceData
    std::shared_ptr<fq::msg::BaseBeReconnaissanceData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseBeReconnaissanceData_ & other) const
  {
    if (this->b_found != other.b_found) {
      return false;
    }
    if (this->b_covered != other.b_covered) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseBeReconnaissanceData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseBeReconnaissanceData_

// alias to use template instance with default allocator
using BaseBeReconnaissanceData =
  fq::msg::BaseBeReconnaissanceData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BE_RECONNAISSANCE_DATA__STRUCT_HPP_
