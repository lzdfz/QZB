// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorControlInfos.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__STRUCT_HPP_

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
// Member 'control_info'
#include "fq/msg/detail/actor_control_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorControlInfos __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorControlInfos __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorControlInfos_
{
  using Type = ActorControlInfos_<ContainerAllocator>;

  explicit ActorControlInfos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ActorControlInfos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    fq::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _control_info_type =
    std::vector<fq::msg::ActorControlInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorControlInfo_<ContainerAllocator>>::other>;
  _control_info_type control_info;

  // setters for named parameter idiom
  Type & set__header(
    const fq::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__control_info(
    const std::vector<fq::msg::ActorControlInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorControlInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->control_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorControlInfos_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorControlInfos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorControlInfos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorControlInfos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorControlInfos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorControlInfos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorControlInfos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorControlInfos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorControlInfos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorControlInfos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorControlInfos
    std::shared_ptr<fq::msg::ActorControlInfos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorControlInfos
    std::shared_ptr<fq::msg::ActorControlInfos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorControlInfos_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->control_info != other.control_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorControlInfos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorControlInfos_

// alias to use template instance with default allocator
using ActorControlInfos =
  fq::msg::ActorControlInfos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_CONTROL_INFOS__STRUCT_HPP_
