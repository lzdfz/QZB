// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseZoneAttr.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_ZONE_ATTR__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_ZONE_ATTR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseZoneAttr __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseZoneAttr __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseZoneAttr_
{
  using Type = BaseZoneAttr_<ContainerAllocator>;

  explicit BaseZoneAttr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
      this->radius = 0.0f;
    }
  }

  explicit BaseZoneAttr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0.0f;
      this->radius = 0.0f;
    }
  }

  // field types and members
  using _height_type =
    float;
  _height_type height;
  using _radius_type =
    float;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseZoneAttr_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseZoneAttr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseZoneAttr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseZoneAttr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseZoneAttr
    std::shared_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseZoneAttr
    std::shared_ptr<fq::msg::BaseZoneAttr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseZoneAttr_ & other) const
  {
    if (this->height != other.height) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseZoneAttr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseZoneAttr_

// alias to use template instance with default allocator
using BaseZoneAttr =
  fq::msg::BaseZoneAttr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_ZONE_ATTR__STRUCT_HPP_
