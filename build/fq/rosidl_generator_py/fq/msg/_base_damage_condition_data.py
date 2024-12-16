# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/BaseDamageConditionData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'attack_remaining_amounts'
# Member 'face_health_points'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BaseDamageConditionData(type):
    """Metaclass of message 'BaseDamageConditionData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fq')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fq.msg.BaseDamageConditionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_damage_condition_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_damage_condition_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_damage_condition_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_damage_condition_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_damage_condition_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BaseDamageConditionData(metaclass=Metaclass_BaseDamageConditionData):
    """Message class 'BaseDamageConditionData'."""

    __slots__ = [
        '_attack_remaining_amounts',
        '_face_health_points',
    ]

    _fields_and_field_types = {
        'attack_remaining_amounts': 'sequence<int32>',
        'face_health_points': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.attack_remaining_amounts = array.array('i', kwargs.get('attack_remaining_amounts', []))
        self.face_health_points = array.array('i', kwargs.get('face_health_points', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.attack_remaining_amounts != other.attack_remaining_amounts:
            return False
        if self.face_health_points != other.face_health_points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def attack_remaining_amounts(self):
        """Message field 'attack_remaining_amounts'."""
        return self._attack_remaining_amounts

    @attack_remaining_amounts.setter
    def attack_remaining_amounts(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'attack_remaining_amounts' array.array() must have the type code of 'i'"
            self._attack_remaining_amounts = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'attack_remaining_amounts' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._attack_remaining_amounts = array.array('i', value)

    @property
    def face_health_points(self):
        """Message field 'face_health_points'."""
        return self._face_health_points

    @face_health_points.setter
    def face_health_points(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'face_health_points' array.array() must have the type code of 'i'"
            self._face_health_points = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'face_health_points' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._face_health_points = array.array('i', value)
