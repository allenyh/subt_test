# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from x2_msgs/Drive.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Drive(genpy.Message):
  _md5sum = "601cf097cd47c174590c366c6ddd5fb3"
  _type = "x2_msgs/Drive"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# This message represents a low-level motor command to X2.

# Command units dependent on the value of this field
int8 MODE_VELOCITY=0   # velocity command (rad/s of wheels)
int8 MODE_PWM=1        # proportion of full voltage command [-1.0..1.0]
int8 MODE_EFFORT=2     # torque command (Nm)
int8 MODE_NONE=-1      # no control, commanded values ignored.
int8 mode

# Units as above, +ve direction propels chassis forward.
int8 LEFT=0
int8 RIGHT=1
float32[2] drivers
"""
  # Pseudo-constants
  MODE_VELOCITY = 0
  MODE_PWM = 1
  MODE_EFFORT = 2
  MODE_NONE = -1
  LEFT = 0
  RIGHT = 1

  __slots__ = ['mode','drivers']
  _slot_types = ['int8','float32[2]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       mode,drivers

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Drive, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.mode is None:
        self.mode = 0
      if self.drivers is None:
        self.drivers = [0.] * 2
    else:
      self.mode = 0
      self.drivers = [0.] * 2

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_b().pack(self.mode))
      buff.write(_get_struct_2f().pack(*self.drivers))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.mode,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 8
      self.drivers = _get_struct_2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_b().pack(self.mode))
      buff.write(self.drivers.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.mode,) = _get_struct_b().unpack(str[start:end])
      start = end
      end += 8
      self.drivers = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=2)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b
