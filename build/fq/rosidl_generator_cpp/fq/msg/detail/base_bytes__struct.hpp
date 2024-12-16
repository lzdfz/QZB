// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fq:msg/BaseBytes.idl
// generated code does not contain a copyright notice

#ifndef FQ__MSG__DETAIL__BASE_BYTES__STRUCT_HPP_
#define FQ__MSG__DETAIL__BASE_BYTES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fq__msg__BaseBytes __attribute__((deprecated))
#else
# define DEPRECATED__fq__msg__BaseBytes __declspec(deprecated)
#endif

namespace fq
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseBytes_
{
  using Type = BaseBytes_<ContainerAllocator>;

  explicit BaseBytes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BaseBytes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fq::msg::BaseBytes_<ContainerAllocator> *;
  using ConstRawPtr =
    const fq::msg::BaseBytes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fq::msg::BaseBytes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fq::msg::BaseBytes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBytes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBytes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fq::msg::BaseBytes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fq::msg::BaseBytes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fq::msg::BaseBytes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fq::msg::BaseBytes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fq__msg__BaseBytes
    std::shared_ptr<fq::msg::BaseBytes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fq__msg__BaseBytes
    std::shared_ptr<fq::msg::BaseBytes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseBytes_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseBytes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseBytes_

// alias to use template instance with default allocator
using BaseBytes =
  fq::msg::BaseBytes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fq

#endif  // FQ__MSG__DETAIL__BASE_BYTES__STRUCT_HPP_
