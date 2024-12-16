# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/ActorControlInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'target_headings'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActorControlInfo(type):
    """Metaclass of message 'ActorControlInfo'."""

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
                'fq.msg.ActorControlInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actor_control_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actor_control_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actor_control_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actor_control_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actor_control_info

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActorControlInfo(metaclass=Metaclass_ActorControlInfo):
    """Message class 'ActorControlInfo'."""

    __slots__ = [
        '_id',
        '_target_positions',
        '_max_velocity',
        '_target_velocity',
        '_target_headings',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'target_positions': 'sequence<geometry_msgs/Point>',
        'max_velocity': 'float',
        'target_velocity': 'float',
        'target_headings': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.target_positions = kwargs.get('target_positions', [])
        self.max_velocity = kwargs.get('max_velocity', float())
        self.target_velocity = kwargs.get('target_velocity', float())
        self.target_headings = array.array('f', kwargs.get('target_headings', []))

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
        if self.id != other.id:
            return False
        if self.target_positions != other.target_positions:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.target_velocity != other.target_velocity:
            return False
        if self.target_headings != other.target_headings:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def target_positions(self):
        """Message field 'target_positions'."""
        return self._target_positions

    @target_positions.setter
    def target_positions(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'target_positions' field must be a set or sequence and each value of type 'Point'"
        self._target_positions = value

    @property
    def max_velocity(self):
        """Message field 'max_velocity'."""
        return self._max_velocity

    @max_velocity.setter
    def max_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity' field must be of type 'float'"
        self._max_velocity = value

    @property
    def target_velocity(self):
        """Message field 'target_velocity'."""
        return self._target_velocity

    @target_velocity.setter
    def target_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_velocity' field must be of type 'float'"
        self._target_velocity = value

    @property
    def target_headings(self):
        """Message field 'target_headings'."""
        return self._target_headings

    @target_headings.setter
    def target_headings(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'target_headings' array.array() must have the type code of 'f'"
            self._target_headings = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'target_headings' field must be a set or sequence and each value of type 'float'"
        self._target_headings = array.array('f', value)
