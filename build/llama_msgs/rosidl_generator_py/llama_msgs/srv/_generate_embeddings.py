# generated from rosidl_generator_py/resource/_idl.py.em
# with input from llama_msgs:srv/GenerateEmbeddings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenerateEmbeddings_Request(type):
    """Metaclass of message 'GenerateEmbeddings_Request'."""

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
                'llama_msgs.srv.GenerateEmbeddings_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_embeddings__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_embeddings__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_embeddings__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_embeddings__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_embeddings__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NORMALIZE__DEFAULT': True,
        }

    @property
    def NORMALIZE__DEFAULT(cls):
        """Return default value for message field 'normalize'."""
        return True


class GenerateEmbeddings_Request(metaclass=Metaclass_GenerateEmbeddings_Request):
    """Message class 'GenerateEmbeddings_Request'."""

    __slots__ = [
        '_prompt',
        '_normalize',
    ]

    _fields_and_field_types = {
        'prompt': 'string',
        'normalize': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.prompt = kwargs.get('prompt', str())
        self.normalize = kwargs.get(
            'normalize', GenerateEmbeddings_Request.NORMALIZE__DEFAULT)

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
        if self.prompt != other.prompt:
            return False
        if self.normalize != other.normalize:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prompt(self):
        """Message field 'prompt'."""
        return self._prompt

    @prompt.setter
    def prompt(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'prompt' field must be of type 'str'"
        self._prompt = value

    @builtins.property
    def normalize(self):
        """Message field 'normalize'."""
        return self._normalize

    @normalize.setter
    def normalize(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'normalize' field must be of type 'bool'"
        self._normalize = value


# Import statements for member types

# Member 'embeddings'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateEmbeddings_Response(type):
    """Metaclass of message 'GenerateEmbeddings_Response'."""

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
                'llama_msgs.srv.GenerateEmbeddings_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_embeddings__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_embeddings__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_embeddings__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_embeddings__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_embeddings__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateEmbeddings_Response(metaclass=Metaclass_GenerateEmbeddings_Response):
    """Message class 'GenerateEmbeddings_Response'."""

    __slots__ = [
        '_embeddings',
        '_n_tokens',
    ]

    _fields_and_field_types = {
        'embeddings': 'sequence<float>',
        'n_tokens': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.embeddings = array.array('f', kwargs.get('embeddings', []))
        self.n_tokens = kwargs.get('n_tokens', int())

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
        if self.embeddings != other.embeddings:
            return False
        if self.n_tokens != other.n_tokens:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def embeddings(self):
        """Message field 'embeddings'."""
        return self._embeddings

    @embeddings.setter
    def embeddings(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'embeddings' array.array() must have the type code of 'f'"
            self._embeddings = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'embeddings' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._embeddings = array.array('f', value)

    @builtins.property
    def n_tokens(self):
        """Message field 'n_tokens'."""
        return self._n_tokens

    @n_tokens.setter
    def n_tokens(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_tokens' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n_tokens' field must be an integer in [-2147483648, 2147483647]"
        self._n_tokens = value


class Metaclass_GenerateEmbeddings(type):
    """Metaclass of service 'GenerateEmbeddings'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('llama_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'llama_msgs.srv.GenerateEmbeddings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_embeddings

            from llama_msgs.srv import _generate_embeddings
            if _generate_embeddings.Metaclass_GenerateEmbeddings_Request._TYPE_SUPPORT is None:
                _generate_embeddings.Metaclass_GenerateEmbeddings_Request.__import_type_support__()
            if _generate_embeddings.Metaclass_GenerateEmbeddings_Response._TYPE_SUPPORT is None:
                _generate_embeddings.Metaclass_GenerateEmbeddings_Response.__import_type_support__()


class GenerateEmbeddings(metaclass=Metaclass_GenerateEmbeddings):
    from llama_msgs.srv._generate_embeddings import GenerateEmbeddings_Request as Request
    from llama_msgs.srv._generate_embeddings import GenerateEmbeddings_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
