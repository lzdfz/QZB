// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__HEADER__STRUCT_HPP_
#define FQ__MSG__DETAIL__HEADER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__Header __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__Header __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Header_
{
  using Type = Header_<ContainerAllocator>;

  explicit Header_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_sec = 0.0;
    }
  }

  explicit Header_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp_sec = 0.0;
    }
  }

  // field types and members
  using _timestamp_sec_type =
    double;
  _timestamp_sec_type timestamp_sec;

  // setters for named parameter idiom
  Type & set__timestamp_sec(
    const double & _arg)
  {
    this->timestamp_sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::Header_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::Header_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::Header_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::Header_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::Header_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::Header_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::Header_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::Header_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::Header_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::Header_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__Header
    std::shared_ptr<fq::msg::Header_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__Header
    std::shared_ptr<fq::msg::Header_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Header_ & other) const
  {
    if (this->timestamp_sec != other.timestamp_sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const Header_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Header_

// alias to use template instance with default allocator
using Header =
  fq::msg::Header_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__HEADER__STRUCT_HPP_
