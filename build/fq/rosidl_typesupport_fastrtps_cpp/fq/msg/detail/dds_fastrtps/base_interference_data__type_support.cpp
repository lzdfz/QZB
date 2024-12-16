// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fq:msg/BaseInterferenceData.idl
// generated code does not contain a copyright notice
#include "fq/msg/detail/base_interference_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fq/msg/detail/base_interference_data__struct.hpp"

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
bool cdr_serialize(
  const fq::msg::BaseTargetInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fq::msg::BaseTargetInfo &);
size_t get_serialized_size(
  const fq::msg::BaseTargetInfo &,
  size_t current_alignment);
size_t
max_serialized_size_BaseTargetInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace fq


namespace fq
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_serialize(
  const fq::msg::BaseInterferenceData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: targets
  {
    size_t size = ros_message.targets.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      fq::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.targets[i],
        cdr);
    }
  }
  // Member: num
  cdr << ros_message.num;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fq::msg::BaseInterferenceData & ros_message)
{
  // Member: targets
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.targets.resize(size);
    for (size_t i = 0; i < size; i++) {
      fq::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.targets[i]);
    }
  }

  // Member: num
  cdr >> ros_message.num;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
get_serialized_size(
  const fq::msg::BaseInterferenceData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: targets
  {
    size_t array_size = ros_message.targets.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.targets[index], current_alignment);
    }
  }
  // Member: num
  {
    size_t item_size = sizeof(ros_message.num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fq
max_serialized_size_BaseInterferenceData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: targets
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fq::msg::typesupport_fastrtps_cpp::max_serialized_size_BaseTargetInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BaseInterferenceData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fq::msg::BaseInterferenceData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BaseInterferenceData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fq::msg::BaseInterferenceData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BaseInterferenceData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fq::msg::BaseInterferenceData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BaseInterferenceData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BaseInterferenceData(full_bounded, 0);
}

static message_type_support_callbacks_t _BaseInterferenceData__callbacks = {
  "fq::msg",
  "BaseInterferenceData",
  _BaseInterferenceData__cdr_serialize,
  _BaseInterferenceData__cdr_deserialize,
  _BaseInterferenceData__get_serialized_size,
  _BaseInterferenceData__max_serialized_size
};

static rosidl_message_type_support_t _BaseInterferenceData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BaseInterferenceData__callbacks,
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
get_message_type_support_handle<fq::msg::BaseInterferenceData>()
{
  return &fq::msg::typesupport_fastrtps_cpp::_BaseInterferenceData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fq, msg, BaseInterferenceData)() {
  return &fq::msg::typesupport_fastrtps_cpp::_BaseInterferenceData__handle;
}

#ifdef __cplusplus
}
#endif
