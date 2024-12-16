// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorHitInfo.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HIT_INFO__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_HIT_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'direction'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorHitInfo __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorHitInfo __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorHitInfo_
{
  using Type = ActorHitInfo_<ContainerAllocator>;

  explicit ActorHitInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  explicit ActorHitInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _direction_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__direction(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorHitInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorHitInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorHitInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorHitInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorHitInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorHitInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorHitInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorHitInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorHitInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorHitInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorHitInfo
    std::shared_ptr<fq::msg::ActorHitInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorHitInfo
    std::shared_ptr<fq::msg::ActorHitInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorHitInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorHitInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorHitInfo_

// alias to use template instance with default allocator
using ActorHitInfo =
  fq::msg::ActorHitInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_HIT_INFO__STRUCT_HPP_
