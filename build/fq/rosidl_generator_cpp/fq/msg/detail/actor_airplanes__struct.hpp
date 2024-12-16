// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorAirplanes.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_AIRPLANES__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_AIRPLANES__STRUCT_HPP_

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
// Member 'airplanes'
#include "fq/msg/detail/actor_airplane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorAirplanes __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorAirplanes __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorAirplanes_
{
  using Type = ActorAirplanes_<ContainerAllocator>;

  explicit ActorAirplanes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ActorAirplanes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    fq::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _airplanes_type =
    std::vector<fq::msg::ActorAirplane_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorAirplane_<ContainerAllocator>>::other>;
  _airplanes_type airplanes;

  // setters for named parameter idiom
  Type & set__header(
    const fq::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__airplanes(
    const std::vector<fq::msg::ActorAirplane_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorAirplane_<ContainerAllocator>>::other> & _arg)
  {
    this->airplanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorAirplanes_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorAirplanes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorAirplanes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorAirplanes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorAirplanes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorAirplanes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorAirplanes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorAirplanes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorAirplanes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorAirplanes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorAirplanes
    std::shared_ptr<fq::msg::ActorAirplanes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorAirplanes
    std::shared_ptr<fq::msg::ActorAirplanes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorAirplanes_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->airplanes != other.airplanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorAirplanes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorAirplanes_

// alias to use template instance with default allocator
using ActorAirplanes =
  fq::msg::ActorAirplanes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_AIRPLANES__STRUCT_HPP_
