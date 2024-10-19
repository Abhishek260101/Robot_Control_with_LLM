# generated from rosidl_generator_py/resource/_idl.py.em
# with input from llama_msgs:srv/FormatChatMessages.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FormatChatMessages_Request(type):
    """Metaclass of message 'FormatChatMessages_Request'."""

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
                'llama_msgs.srv.FormatChatMessages_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__format_chat_messages__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__format_chat_messages__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__format_chat_messages__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__format_chat_messages__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__format_chat_messages__request

            from llama_msgs.msg import Message
            if Message.__class__._TYPE_SUPPORT is None:
                Message.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ADD_ASS__DEFAULT': True,
        }

    @property
    def ADD_ASS__DEFAULT(cls):
        """Return default value for message field 'add_ass'."""
        return True


class FormatChatMessages_Request(metaclass=Metaclass_FormatChatMessages_Request):
    """Message class 'FormatChatMessages_Request'."""

    __slots__ = [
        '_messages',
        '_add_ass',
    ]

    _fields_and_field_types = {
        'messages': 'sequence<llama_msgs/Message>',
        'add_ass': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['llama_msgs', 'msg'], 'Message')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.messages = kwargs.get('messages', [])
        self.add_ass = kwargs.get(
            'add_ass', FormatChatMessages_Request.ADD_ASS__DEFAULT)

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
        if self.messages != other.messages:
            return False
        if self.add_ass != other.add_ass:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def messages(self):
        """Message field 'messages'."""
        return self._messages

    @messages.setter
    def messages(self, value):
        if __debug__:
            from llama_msgs.msg import Message
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
                 all(isinstance(v, Message) for v in value) and
                 True), \
                "The 'messages' field must be a set or sequence and each value of type 'Message'"
        self._messages = value

    @builtins.property
    def add_ass(self):
        """Message field 'add_ass'."""
        return self._add_ass

    @add_ass.setter
    def add_ass(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'add_ass' field must be of type 'bool'"
        self._add_ass = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FormatChatMessages_Response(type):
    """Metaclass of message 'FormatChatMessages_Response'."""

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
                'llama_msgs.srv.FormatChatMessages_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__format_chat_messages__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__format_chat_messages__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__format_chat_messages__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__format_chat_messages__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__format_chat_messages__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FormatChatMessages_Response(metaclass=Metaclass_FormatChatMessages_Response):
    """Message class 'FormatChatMessages_Response'."""

    __slots__ = [
        '_formatted_prompt',
    ]

    _fields_and_field_types = {
        'formatted_prompt': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.formatted_prompt = kwargs.get('formatted_prompt', str())

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
        if self.formatted_prompt != other.formatted_prompt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def formatted_prompt(self):
        """Message field 'formatted_prompt'."""
        return self._formatted_prompt

    @formatted_prompt.setter
    def formatted_prompt(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'formatted_prompt' field must be of type 'str'"
        self._formatted_prompt = value


class Metaclass_FormatChatMessages(type):
    """Metaclass of service 'FormatChatMessages'."""

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
                'llama_msgs.srv.FormatChatMessages')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__format_chat_messages

            from llama_msgs.srv import _format_chat_messages
            if _format_chat_messages.Metaclass_FormatChatMessages_Request._TYPE_SUPPORT is None:
                _format_chat_messages.Metaclass_FormatChatMessages_Request.__import_type_support__()
            if _format_chat_messages.Metaclass_FormatChatMessages_Response._TYPE_SUPPORT is None:
                _format_chat_messages.Metaclass_FormatChatMessages_Response.__import_type_support__()


class FormatChatMessages(metaclass=Metaclass_FormatChatMessages):
    from llama_msgs.srv._format_chat_messages import FormatChatMessages_Request as Request
    from llama_msgs.srv._format_chat_messages import FormatChatMessages_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
