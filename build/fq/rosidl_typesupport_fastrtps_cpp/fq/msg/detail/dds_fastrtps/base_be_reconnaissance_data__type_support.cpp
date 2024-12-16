// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/BaseBeReconnaissanceData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_be_reconnaissance_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fq/msg/detail/base_be_reconnaissance_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace fq
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_serialize(
  const fq::msg::BaseBeReconnaissanceData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: b_found
  cdr << (ros_message.b_found ? true : false);
  // Member: b_covered
  cdr << (ros_message.b_covered ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fq::msg::BaseBeReconnaissanceData & ros_message)
{
  // Member: b_found
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.b_found = tmp ? true : false;
  }

  // Member: b_covered
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.b_covered = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
get_serialized_size(
  const fq::msg::BaseBeReconnaissanceData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: b_found
  {
    size_t item_size = sizeof(ros_message.b_found);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_covered
  {
    size_t item_size = sizeof(ros_message.b_covered);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
max_serialized_size_BaseBeReconnaissanceData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: b_found
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: b_covered
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _BaseBeReconnaissanceData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fq::msg::BaseBeReconnaissanceData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BaseBeReconnaissanceData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fq::msg::BaseBeReconnaissanceData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BaseBeReconnaissanceData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fq::msg::BaseBeReconnaissanceData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BaseBeReconnaissanceData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BaseBeReconnaissanceData(full_bounded, 0);
}

static message_type_support_callbacks_t _BaseBeReconnaissanceData__callbacks = {
  "fq::msg",
  "BaseBeReconnaissanceData",
  _BaseBeReconnaissanceData__cdr_serialize,
  _BaseBeReconnaissanceData__cdr_deserialize,
  _BaseBeReconnaissanceData__get_serialized_size,
  _BaseBeReconnaissanceData__max_serialized_size
};

static rosidl_message_type_support_t _BaseBeReconnaissanceData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BaseBeReconnaissanceData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fq

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fq
const rosidl_message_type_support_t *
get_message_type_support_handle<fq::msg::BaseBeReconnaissanceData>()
{
  return &fq::msg::typesupport_fastrtps_cpp::_BaseBeReconnaissanceData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fq, msg, BaseBeReconnaissanceData)() {
  return &fq::msg::typesupport_fastrtps_cpp::_BaseBeReconnaissanceData__handle;
}

#ifdef __cplusplus
}
#endif
