// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseLoadData.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_LOAD_DATA__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_LOAD_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseLoadData __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseLoadData __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseLoadData_
{
  using Type = BaseLoadData_<ContainerAllocator>;

  explicit BaseLoadData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_projectiles = 0l;
    }
  }

  explicit BaseLoadData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_projectiles = 0l;
    }
  }

  // field types and members
  using _remaining_projectiles_type =
    int32_t;
  _remaining_projectiles_type remaining_projectiles;

  // setters for named parameter idiom
  Type & set__remaining_projectiles(
    const int32_t & _arg)
  {
    this->remaining_projectiles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseLoadData_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseLoadData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseLoadData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseLoadData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseLoadData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseLoadData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseLoadData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseLoadData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseLoadData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseLoadData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseLoadData
    std::shared_ptr<fq::msg::BaseLoadData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseLoadData
    std::shared_ptr<fq::msg::BaseLoadData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseLoadData_ & other) const
  {
    if (this->remaining_projectiles != other.remaining_projectiles) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseLoadData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseLoadData_

// alias to use template instance with default allocator
using BaseLoadData =
  fq::msg::BaseLoadData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_LOAD_DATA__STRUCT_HPP_
