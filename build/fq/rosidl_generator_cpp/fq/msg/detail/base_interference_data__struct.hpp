// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseInterferenceData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'targets'
#include "fq/msg/detail/base_target_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseInterferenceData __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseInterferenceData __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseInterferenceData_
{
  using Type = BaseInterferenceData_<ContainerAllocator>;

  explicit BaseInterferenceData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
    }
  }

  explicit BaseInterferenceData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0l;
    }
  }

  // field types and members
  using _targets_type =
    std::vector<fq::msg::BaseTargetInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::BaseTargetInfo_<ContainerAllocator>>::other>;
  _targets_type targets;
  using _num_type =
    int32_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__targets(
    const std::vector<fq::msg::BaseTargetInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::BaseTargetInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->targets = _arg;
    return *this;
  }
  Type & set__num(
    const int32_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseInterferenceData_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseInterferenceData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseInterferenceData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseInterferenceData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseInterferenceData
    std::shared_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseInterferenceData
    std::shared_ptr<fq::msg::BaseInterferenceData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseInterferenceData_ & other) const
  {
    if (this->targets != other.targets) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseInterferenceData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseInterferenceData_

// alias to use template instance with default allocator
using BaseInterferenceData =
  fq::msg::BaseInterferenceData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_INTERFERENCE_DATA__STRUCT_HPP_
