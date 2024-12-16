# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fq:msg/BasePlaneAttr.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasePlaneAttr(type):
    """Metaclass of message 'BasePlaneAttr'."""

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
                'fq.msg.BasePlaneAttr')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__base_plane_attr
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__base_plane_attr
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__base_plane_attr
            cls._TYPE_SUPPORT = module.type_support_msg__msg__base_plane_attr
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__base_plane_attr

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasePlaneAttr(metaclass=Metaclass_BasePlaneAttr):
    """Message class 'BasePlaneAttr'."""

    __slots__ = [
        '_airfoil_type',
        '_load_type',
        '_min_velocity',
        '_max_velocity',
        '_max_acceleration',
        '_max_deceleration',
        '_max_roll_angle',
        '_max_pitch_angle',
        '_roll_rate',
        '_pitch_rate',
        '_yaw_rate_to_max_roll',
        '_limit_height',
        '_health_point',
        '_damage_value',
        '_reconnaissance_radius',
        '_reconnaissance_angle',
        '_bombload',
        '_bomb_range',
        '_bomb_velocity',
        '_bomb_cold_down_time',
    ]

    _fields_and_field_types = {
        'airfoil_type': 'string',
        'load_type': 'string',
        'min_velocity': 'float',
        'max_velocity': 'float',
        'max_acceleration': 'float',
        'max_deceleration': 'float',
        'max_roll_angle': 'float',
        'max_pitch_angle': 'float',
        'roll_rate': 'float',
        'pitch_rate': 'float',
        'yaw_rate_to_max_roll': 'float',
        'limit_height': 'float',
        'health_point': 'int32',
        'damage_value': 'int32',
        'reconnaissance_radius': 'float',
        'reconnaissance_angle': 'float',
        'bombload': 'int32',
        'bomb_range': 'float',
        'bomb_velocity': 'float',
        'bomb_cold_down_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.airfoil_type = kwargs.get('airfoil_type', str())
        self.load_type = kwargs.get('load_type', str())
        self.min_velocity = kwargs.get('min_velocity', float())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.max_deceleration = kwargs.get('max_deceleration', float())
        self.max_roll_angle = kwargs.get('max_roll_angle', float())
        self.max_pitch_angle = kwargs.get('max_pitch_angle', float())
        self.roll_rate = kwargs.get('roll_rate', float())
        self.pitch_rate = kwargs.get('pitch_rate', float())
        self.yaw_rate_to_max_roll = kwargs.get('yaw_rate_to_max_roll', float())
        self.limit_height = kwargs.get('limit_height', float())
        self.health_point = kwargs.get('health_point', int())
        self.damage_value = kwargs.get('damage_value', int())
        self.reconnaissance_radius = kwargs.get('reconnaissance_radius', float())
        self.reconnaissance_angle = kwargs.get('reconnaissance_angle', float())
        self.bombload = kwargs.get('bombload', int())
        self.bomb_range = kwargs.get('bomb_range', float())
        self.bomb_velocity = kwargs.get('bomb_velocity', float())
        self.bomb_cold_down_time = kwargs.get('bomb_cold_down_time', float())

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
        if self.airfoil_type != other.airfoil_type:
            return False
        if self.load_type != other.load_type:
            return False
        if self.min_velocity != other.min_velocity:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.max_deceleration != other.max_deceleration:
            return False
        if self.max_roll_angle != other.max_roll_angle:
            return False
        if self.max_pitch_angle != other.max_pitch_angle:
            return False
        if self.roll_rate != other.roll_rate:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.yaw_rate_to_max_roll != other.yaw_rate_to_max_roll:
            return False
        if self.limit_height != other.limit_height:
            return False
        if self.health_point != other.health_point:
            return False
        if self.damage_value != other.damage_value:
            return False
        if self.reconnaissance_radius != other.reconnaissance_radius:
            return False
        if self.reconnaissance_angle != other.reconnaissance_angle:
            return False
        if self.bombload != other.bombload:
            return False
        if self.bomb_range != other.bomb_range:
            return False
        if self.bomb_velocity != other.bomb_velocity:
            return False
        if self.bomb_cold_down_time != other.bomb_cold_down_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def airfoil_type(self):
        """Message field 'airfoil_type'."""
        return self._airfoil_type

    @airfoil_type.setter
    def airfoil_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'airfoil_type' field must be of type 'str'"
        self._airfoil_type = value

    @property
    def load_type(self):
        """Message field 'load_type'."""
        return self._load_type

    @load_type.setter
    def load_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'load_type' field must be of type 'str'"
        self._load_type = value

    @property
    def min_velocity(self):
        """Message field 'min_velocity'."""
        return self._min_velocity

    @min_velocity.setter
    def min_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_velocity' field must be of type 'float'"
        self._min_velocity = value

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
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
        self._max_acceleration = value

    @property
    def max_deceleration(self):
        """Message field 'max_deceleration'."""
        return self._max_deceleration

    @max_deceleration.setter
    def max_deceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_deceleration' field must be of type 'float'"
        self._max_deceleration = value

    @property
    def max_roll_angle(self):
        """Message field 'max_roll_angle'."""
        return self._max_roll_angle

    @max_roll_angle.setter
    def max_roll_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_roll_angle' field must be of type 'float'"
        self._max_roll_angle = value

    @property
    def max_pitch_angle(self):
        """Message field 'max_pitch_angle'."""
        return self._max_pitch_angle

    @max_pitch_angle.setter
    def max_pitch_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_pitch_angle' field must be of type 'float'"
        self._max_pitch_angle = value

    @property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
        self._roll_rate = value

    @property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
        self._pitch_rate = value

    @property
    def yaw_rate_to_max_roll(self):
        """Message field 'yaw_rate_to_max_roll'."""
        return self._yaw_rate_to_max_roll

    @yaw_rate_to_max_roll.setter
    def yaw_rate_to_max_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_to_max_roll' field must be of type 'float'"
        self._yaw_rate_to_max_roll = value

    @property
    def limit_height(self):
        """Message field 'limit_height'."""
        return self._limit_height

    @limit_height.setter
    def limit_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'limit_height' field must be of type 'float'"
        self._limit_height = value

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
    def damage_value(self):
        """Message field 'damage_value'."""
        return self._damage_value

    @damage_value.setter
    def damage_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'damage_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'damage_value' field must be an integer in [-2147483648, 2147483647]"
        self._damage_value = value

    @property
    def reconnaissance_radius(self):
        """Message field 'reconnaissance_radius'."""
        return self._reconnaissance_radius

    @reconnaissance_radius.setter
    def reconnaissance_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reconnaissance_radius' field must be of type 'float'"
        self._reconnaissance_radius = value

    @property
    def reconnaissance_angle(self):
        """Message field 'reconnaissance_angle'."""
        return self._reconnaissance_angle

    @reconnaissance_angle.setter
    def reconnaissance_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reconnaissance_angle' field must be of type 'float'"
        self._reconnaissance_angle = value

    @property
    def bombload(self):
        """Message field 'bombload'."""
        return self._bombload

    @bombload.setter
    def bombload(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bombload' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bombload' field must be an integer in [-2147483648, 2147483647]"
        self._bombload = value

    @property
    def bomb_range(self):
        """Message field 'bomb_range'."""
        return self._bomb_range

    @bomb_range.setter
    def bomb_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bomb_range' field must be of type 'float'"
        self._bomb_range = value

    @property
    def bomb_velocity(self):
        """Message field 'bomb_velocity'."""
        return self._bomb_velocity

    @bomb_velocity.setter
    def bomb_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bomb_velocity' field must be of type 'float'"
        self._bomb_velocity = value

    @property
    def bomb_cold_down_time(self):
        """Message field 'bomb_cold_down_time'."""
        return self._bomb_cold_down_time

    @bomb_cold_down_time.setter
    def bomb_cold_down_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bomb_cold_down_time' field must be of type 'float'"
        self._bomb_cold_down_time = value
