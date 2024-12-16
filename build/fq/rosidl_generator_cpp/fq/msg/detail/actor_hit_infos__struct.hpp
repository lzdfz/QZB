// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorHitInfos.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_HIT_INFOS__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_HIT_INFOS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "fq/msg/detail/header__struct.hpp"
// Member 'hit_info'
#include "fq/msg/detail/actor_hit_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorHitInfos __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorHitInfos __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorHitInfos_
{
  using Type = ActorHitInfos_<ContainerAllocator>;

  explicit ActorHitInfos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ActorHitInfos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    fq::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hit_info_type =
    std::vector<fq::msg::ActorHitInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorHitInfo_<ContainerAllocator>>::other>;
  _hit_info_type hit_info;

  // setters for named parameter idiom
  Type & set__header(
    const fq::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hit_info(
    const std::vector<fq::msg::ActorHitInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorHitInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->hit_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorHitInfos_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorHitInfos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorHitInfos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorHitInfos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorHitInfos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorHitInfos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorHitInfos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorHitInfos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorHitInfos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorHitInfos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorHitInfos
    std::shared_ptr<fq::msg::ActorHitInfos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorHitInfos
    std::shared_ptr<fq::msg::ActorHitInfos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorHitInfos_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hit_info != other.hit_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorHitInfos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorHitInfos_

// alias to use template instance with default allocator
using ActorHitInfos =
  fq::msg::ActorHitInfos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_HIT_INFOS__STRUCT_HPP_
