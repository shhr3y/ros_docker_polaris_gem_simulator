; Auto-generated. Do not edit!


(cl:in-package jsk_recognition_msgs-msg)


;//! \htmlinclude ParallelEdgeArray.msg.html

(cl:defclass <ParallelEdgeArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (edge_groups
    :reader edge_groups
    :initarg :edge_groups
    :type (cl:vector jsk_recognition_msgs-msg:ParallelEdge)
   :initform (cl:make-array 0 :element-type 'jsk_recognition_msgs-msg:ParallelEdge :initial-element (cl:make-instance 'jsk_recognition_msgs-msg:ParallelEdge))))
)

(cl:defclass ParallelEdgeArray (<ParallelEdgeArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ParallelEdgeArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ParallelEdgeArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name jsk_recognition_msgs-msg:<ParallelEdgeArray> is deprecated: use jsk_recognition_msgs-msg:ParallelEdgeArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ParallelEdgeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader jsk_recognition_msgs-msg:header-val is deprecated.  Use jsk_recognition_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'edge_groups-val :lambda-list '(m))
(cl:defmethod edge_groups-val ((m <ParallelEdgeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader jsk_recognition_msgs-msg:edge_groups-val is deprecated.  Use jsk_recognition_msgs-msg:edge_groups instead.")
  (edge_groups m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ParallelEdgeArray>) ostream)
  "Serializes a message object of type '<ParallelEdgeArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'edge_groups))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'edge_groups))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ParallelEdgeArray>) istream)
  "Deserializes a message object of type '<ParallelEdgeArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'edge_groups) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'edge_groups)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'jsk_recognition_msgs-msg:ParallelEdge))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ParallelEdgeArray>)))
  "Returns string type for a message object of type '<ParallelEdgeArray>"
  "jsk_recognition_msgs/ParallelEdgeArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ParallelEdgeArray)))
  "Returns string type for a message object of type 'ParallelEdgeArray"
  "jsk_recognition_msgs/ParallelEdgeArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ParallelEdgeArray>)))
  "Returns md5sum for a message object of type '<ParallelEdgeArray>"
  "7c8ef4f5976c55fb32293ceaa19a1189")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ParallelEdgeArray)))
  "Returns md5sum for a message object of type 'ParallelEdgeArray"
  "7c8ef4f5976c55fb32293ceaa19a1189")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ParallelEdgeArray>)))
  "Returns full string definition for message of type '<ParallelEdgeArray>"
  (cl:format cl:nil "Header header~%ParallelEdge[] edge_groups~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: jsk_recognition_msgs/ParallelEdge~%Header header~%pcl_msgs/PointIndices[] cluster_indices~%pcl_msgs/ModelCoefficients[] coefficients~%~%================================================================================~%MSG: pcl_msgs/PointIndices~%Header header~%int32[] indices~%~%~%================================================================================~%MSG: pcl_msgs/ModelCoefficients~%Header header~%float32[] values~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ParallelEdgeArray)))
  "Returns full string definition for message of type 'ParallelEdgeArray"
  (cl:format cl:nil "Header header~%ParallelEdge[] edge_groups~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: jsk_recognition_msgs/ParallelEdge~%Header header~%pcl_msgs/PointIndices[] cluster_indices~%pcl_msgs/ModelCoefficients[] coefficients~%~%================================================================================~%MSG: pcl_msgs/PointIndices~%Header header~%int32[] indices~%~%~%================================================================================~%MSG: pcl_msgs/ModelCoefficients~%Header header~%float32[] values~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ParallelEdgeArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'edge_groups) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ParallelEdgeArray>))
  "Converts a ROS message object to a list"
  (cl:list 'ParallelEdgeArray
    (cl:cons ':header (header msg))
    (cl:cons ':edge_groups (edge_groups msg))
))
