// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseBeInterferenceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BE_INTERFERENCE_DATA__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_BE_INTERFERENCE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseBeInterferenceData __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseBeInterferenceData __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseBeInterferenceData_
{
  using Type = BaseBeInterferenceData_<ContainerAllocator>;

  explicit BaseBeInterferenceData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percent = 0.0;
    }
  }

  explicit BaseBeInterferenceData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->percent = 0.0;
    }
  }

  // field types and members
  using _percent_type =
    double;
  _percent_type percent;

  // setters for named parameter idiom
  Type & set__percent(
    const double & _arg)
  {
    this->percent = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseBeInterferenceData_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseBeInterferenceData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBeInterferenceData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBeInterferenceData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseBeInterferenceData
    std::shared_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseBeInterferenceData
    std::shared_ptr<fq::msg::BaseBeInterferenceData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseBeInterferenceData_ & other) const
  {
    if (this->percent != other.percent) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseBeInterferenceData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseBeInterferenceData_

// alias to use template instance with default allocator
using BaseBeInterferenceData =
  fq::msg::BaseBeInterferenceData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BE_INTERFERENCE_DATA__STRUCT_HPP_
