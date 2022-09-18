; Auto-generated. Do not edit!


(cl:in-package jsk_footstep_msgs-msg)


;//! \htmlinclude PlanFootstepsFeedback.msg.html

(cl:defclass <PlanFootstepsFeedback> (roslisp-msg-protocol:ros-message)
  ((feedback
    :reader feedback
    :initarg :feedback
    :type jsk_footstep_msgs-msg:FootstepArray
    :initform (cl:make-instance 'jsk_footstep_msgs-msg:FootstepArray)))
)

(cl:defclass PlanFootstepsFeedback (<PlanFootstepsFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PlanFootstepsFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PlanFootstepsFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name jsk_footstep_msgs-msg:<PlanFootstepsFeedback> is deprecated: use jsk_footstep_msgs-msg:PlanFootstepsFeedback instead.")))

(cl:ensure-generic-function 'feedback-val :lambda-list '(m))
(cl:defmethod feedback-val ((m <PlanFootstepsFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader jsk_footstep_msgs-msg:feedback-val is deprecated.  Use jsk_footstep_msgs-msg:feedback instead.")
  (feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PlanFootstepsFeedback>) ostream)
  "Serializes a message object of type '<PlanFootstepsFeedback>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'feedback) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PlanFootstepsFeedback>) istream)
  "Deserializes a message object of type '<PlanFootstepsFeedback>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'feedback) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PlanFootstepsFeedback>)))
  "Returns string type for a message object of type '<PlanFootstepsFeedback>"
  "jsk_footstep_msgs/PlanFootstepsFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PlanFootstepsFeedback)))
  "Returns string type for a message object of type 'PlanFootstepsFeedback"
  "jsk_footstep_msgs/PlanFootstepsFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PlanFootstepsFeedback>)))
  "Returns md5sum for a message object of type '<PlanFootstepsFeedback>"
  "5f4757afbf7a130712f963e49c7f5f00")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PlanFootstepsFeedback)))
  "Returns md5sum for a message object of type 'PlanFootstepsFeedback"
  "5f4757afbf7a130712f963e49c7f5f00")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PlanFootstepsFeedback>)))
  "Returns full string definition for message of type '<PlanFootstepsFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback~%FootstepArray feedback~%~%================================================================================~%MSG: jsk_footstep_msgs/FootstepArray~%Header header~%Footstep[] footsteps~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: jsk_footstep_msgs/Footstep~%uint8 RIGHT=2~%uint8 LEFT=1~%~%# Constants to visualize progress~%uint8 REJECTED=3~%uint8 APPROVED=4~%~%## limb_indicator values~%uint8 LLEG=1~%uint8 RLEG=2~%uint8 LARM=5~%uint8 RARM=6~%~%uint8 leg ## value should be one of limb_indicator values.~%geometry_msgs/Pose pose ## 'pose' represents nominal pose. It may be an end-effector of limb.~%duration duration~%# optional parameters~%uint32 footstep_group~%geometry_msgs/Vector3 dimensions ## cube [length(x), width(y), height(z)]~%geometry_msgs/Vector3 offset     ## offset from pose to center of cube~%float32 swing_height~%float32 cost~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PlanFootstepsFeedback)))
  "Returns full string definition for message of type 'PlanFootstepsFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# feedback~%FootstepArray feedback~%~%================================================================================~%MSG: jsk_footstep_msgs/FootstepArray~%Header header~%Footstep[] footsteps~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: jsk_footstep_msgs/Footstep~%uint8 RIGHT=2~%uint8 LEFT=1~%~%# Constants to visualize progress~%uint8 REJECTED=3~%uint8 APPROVED=4~%~%## limb_indicator values~%uint8 LLEG=1~%uint8 RLEG=2~%uint8 LARM=5~%uint8 RARM=6~%~%uint8 leg ## value should be one of limb_indicator values.~%geometry_msgs/Pose pose ## 'pose' represents nominal pose. It may be an end-effector of limb.~%duration duration~%# optional parameters~%uint32 footstep_group~%geometry_msgs/Vector3 dimensions ## cube [length(x), width(y), height(z)]~%geometry_msgs/Vector3 offset     ## offset from pose to center of cube~%float32 swing_height~%float32 cost~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PlanFootstepsFeedback>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PlanFootstepsFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'PlanFootstepsFeedback
    (cl:cons ':feedback (feedback msg))
))
