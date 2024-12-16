// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/ActorVehicles.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__ACTOR_VEHICLES__STRUCT_HPP_
#define FQ__MSG__DETAIL__ACTOR_VEHICLES__STRUCT_HPP_

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
// Member 'vehicles'
#include "fq/msg/detail/actor_vehicle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fq__msg__ActorVehicles __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__ActorVehicles __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorVehicles_
{
  using Type = ActorVehicles_<ContainerAllocator>;

  explicit ActorVehicles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ActorVehicles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    fq::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vehicles_type =
    std::vector<fq::msg::ActorVehicle_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorVehicle_<ContainerAllocator>>::other>;
  _vehicles_type vehicles;

  // setters for named parameter idiom
  Type & set__header(
    const fq::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vehicles(
    const std::vector<fq::msg::ActorVehicle_<ContainerAllocator>, typename ContainerAllocator::template rebind<fq::msg::ActorVehicle_<ContainerAllocator>>::other> & _arg)
  {
    this->vehicles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::ActorVehicles_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::ActorVehicles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::ActorVehicles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::ActorVehicles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorVehicles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorVehicles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::ActorVehicles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::ActorVehicles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::ActorVehicles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::ActorVehicles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__ActorVehicles
    std::shared_ptr<fq::msg::ActorVehicles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__ActorVehicles
    std::shared_ptr<fq::msg::ActorVehicles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorVehicles_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vehicles != other.vehicles) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorVehicles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorVehicles_

// alias to use template instance with default allocator
using ActorVehicles =
  fq::msg::ActorVehicles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__ACTOR_VEHICLES__STRUCT_HPP_
