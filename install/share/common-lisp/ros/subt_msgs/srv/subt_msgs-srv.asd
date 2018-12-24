
(cl:in-package :asdf)

(defsystem "subt_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "PoseFromArtifact" :depends-on ("_package_PoseFromArtifact"))
    (:file "_package_PoseFromArtifact" :depends-on ("_package"))
  ))