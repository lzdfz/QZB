// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseDamageConditionData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseDamageConditionData __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseDamageConditionData __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseDamageConditionData_
{
  using Type = BaseDamageConditionData_<ContainerAllocator>;

  explicit BaseDamageConditionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BaseDamageConditionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _attack_remaining_amounts_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _attack_remaining_amounts_type attack_remaining_amounts;
  using _face_health_points_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _face_health_points_type face_health_points;

  // setters for named parameter idiom
  Type & set__attack_remaining_amounts(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->attack_remaining_amounts = _arg;
    return *this;
  }
  Type & set__face_health_points(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->face_health_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseDamageConditionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseDamageConditionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseDamageConditionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseDamageConditionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseDamageConditionData
    std::shared_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseDamageConditionData
    std::shared_ptr<fq::msg::BaseDamageConditionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseDamageConditionData_ & other) const
  {
    if (this->attack_remaining_amounts != other.attack_remaining_amounts) {
      return false;
    }
    if (this->face_health_points != other.face_health_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseDamageConditionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseDamageConditionData_

// alias to use template instance with default allocator
using BaseDamageConditionData =
  fq::msg::BaseDamageConditionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_DAMAGE_CONDITION_DATA__STRUCT_HPP_
