# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/BaseBaseData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BaseBaseData(type):
    """Metaclass of message 'BaseBaseData'."""

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
                'fq.msg.BaseBaseData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_base_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_base_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_base_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_base_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_base_data

            from fq.msg import BaseBoundingBox
            if BaseBoundingBox.__class__._TYPE_SUPPORT is None:
                BaseBoundingBox.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BaseBaseData(metaclass=Metaclass_BaseBaseData):
    """Message class 'BaseBaseData'."""

    __slots__ = [
        '_id',
        '_health_point',
        '_type_id',
        '_actor_type',
        '_bounding_box',
        '_b_target',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'health_point': 'int32',
        'type_id': 'string',
        'actor_type': 'string',
        'bounding_box': 'fq/BaseBoundingBox',
        'b_target': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['fq', 'msg'], 'BaseBoundingBox'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.health_point = kwargs.get('health_point', int())
        self.type_id = kwargs.get('type_id', str())
        self.actor_type = kwargs.get('actor_type', str())
        from fq.msg import BaseBoundingBox
        self.bounding_box = kwargs.get('bounding_box', BaseBoundingBox())
        self.b_target = kwargs.get('b_target', bool())

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
        if self.health_point != other.health_point:
            return False
        if self.type_id != other.type_id:
            return False
        if self.actor_type != other.actor_type:
            return False
        if self.bounding_box != other.bounding_box:
            return False
        if self.b_target != other.b_target:
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
    def health_point(self):
        """Message field 'health_point'."""
        return self._health_point

    @health_point.setter
    def health_point(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health_point' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'health_point' field must be an integer in [-2147483648, 2147483647]"
        self._health_point = value

    @property
    def type_id(self):
        """Message field 'type_id'."""
        return self._type_id

    @type_id.setter
    def type_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type_id' field must be of type 'str'"
        self._type_id = value

    @property
    def actor_type(self):
        """Message field 'actor_type'."""
        return self._actor_type

    @actor_type.setter
    def actor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'actor_type' field must be of type 'str'"
        self._actor_type = value

    @property
    def bounding_box(self):
        """Message field 'bounding_box'."""
        return self._bounding_box

    @bounding_box.setter
    def bounding_box(self, value):
        if __debug__:
            from fq.msg import BaseBoundingBox
            assert \
                isinstance(value, BaseBoundingBox), \
                "The 'bounding_box' field must be a sub message of type 'BaseBoundingBox'"
        self._bounding_box = value

    @property
    def b_target(self):
        """Message field 'b_target'."""
        return self._b_target

    @b_target.setter
    def b_target(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'b_target' field must be of type 'bool'"
        self._b_target = value
