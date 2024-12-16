// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseTargetInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_TARGET_INFO__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_TARGET_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseTargetInfo __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseTargetInfo __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseTargetInfo_
{
  using Type = BaseTargetInfo_<ContainerAllocator>;

  explicit BaseTargetInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->percent = 0.0;
    }
  }

  explicit BaseTargetInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->percent = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _percent_type =
    double;
  _percent_type percent;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__percent(
    const double & _arg)
  {
    this->percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseTargetInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseTargetInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseTargetInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseTargetInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseTargetInfo
    std::shared_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseTargetInfo
    std::shared_ptr<fq::msg::BaseTargetInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseTargetInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->percent != other.percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseTargetInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseTargetInfo_

// alias to use template instance with default allocator
using BaseTargetInfo =
  fq::msg::BaseTargetInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_TARGET_INFO__STRUCT_HPP_
