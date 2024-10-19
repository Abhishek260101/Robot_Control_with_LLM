# generated from rosidl_generator_py/resource/_idl.py.em
# with input from llama_msgs:msg/Response.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'tokens'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Response(type):
    """Metaclass of message 'Response'."""

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
            module = import_type_support('llama_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llama_msgs.msg.Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__response

            from llama_msgs.msg import TokenProbArray
            if TokenProbArray.__class__._TYPE_SUPPORT is None:
                TokenProbArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Response(metaclass=Metaclass_Response):
    """Message class 'Response'."""

    __slots__ = [
        '_text',
        '_tokens',
        '_probs',
    ]

    _fields_and_field_types = {
        'text': 'string',
        'tokens': 'sequence<int32>',
        'probs': 'sequence<llama_msgs/TokenProbArray>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['llama_msgs', 'msg'], 'TokenProbArray')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.text = kwargs.get('text', str())
        self.tokens = array.array('i', kwargs.get('tokens', []))
        self.probs = kwargs.get('probs', [])

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
        if self.text != other.text:
            return False
        if self.tokens != other.tokens:
            return False
        if self.probs != other.probs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def text(self):
        """Message field 'text'."""
        return self._text

    @text.setter
    def text(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'text' field must be of type 'str'"
        self._text = value

    @builtins.property
    def tokens(self):
        """Message field 'tokens'."""
        return self._tokens

    @tokens.setter
    def tokens(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'tokens' array.array() must have the type code of 'i'"
            self._tokens = value
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
                "The 'tokens' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._tokens = array.array('i', value)

    @builtins.property
    def probs(self):
        """Message field 'probs'."""
        return self._probs

    @probs.setter
    def probs(self, value):
        if __debug__:
            from llama_msgs.msg import TokenProbArray
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
                 all(isinstance(v, TokenProbArray) for v in value) and
                 True), \
                "The 'probs' field must be a set or sequence and each value of type 'TokenProbArray'"
        self._probs = value
