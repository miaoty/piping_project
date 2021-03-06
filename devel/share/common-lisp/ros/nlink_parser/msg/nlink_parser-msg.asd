
(cl:in-package :asdf)

(defsystem "nlink_parser-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "IotFrame0" :depends-on ("_package_IotFrame0"))
    (:file "_package_IotFrame0" :depends-on ("_package"))
    (:file "IotFrame0Node" :depends-on ("_package_IotFrame0Node"))
    (:file "_package_IotFrame0Node" :depends-on ("_package"))
    (:file "LinktrackAnchorframe0" :depends-on ("_package_LinktrackAnchorframe0"))
    (:file "_package_LinktrackAnchorframe0" :depends-on ("_package"))
    (:file "LinktrackAoaNode0" :depends-on ("_package_LinktrackAoaNode0"))
    (:file "_package_LinktrackAoaNode0" :depends-on ("_package"))
    (:file "LinktrackAoaNodeframe0" :depends-on ("_package_LinktrackAoaNodeframe0"))
    (:file "_package_LinktrackAoaNodeframe0" :depends-on ("_package"))
    (:file "LinktrackNode0" :depends-on ("_package_LinktrackNode0"))
    (:file "_package_LinktrackNode0" :depends-on ("_package"))
    (:file "LinktrackNode1" :depends-on ("_package_LinktrackNode1"))
    (:file "_package_LinktrackNode1" :depends-on ("_package"))
    (:file "LinktrackNode2" :depends-on ("_package_LinktrackNode2"))
    (:file "_package_LinktrackNode2" :depends-on ("_package"))
    (:file "LinktrackNode4Anchor" :depends-on ("_package_LinktrackNode4Anchor"))
    (:file "_package_LinktrackNode4Anchor" :depends-on ("_package"))
    (:file "LinktrackNode4Tag" :depends-on ("_package_LinktrackNode4Tag"))
    (:file "_package_LinktrackNode4Tag" :depends-on ("_package"))
    (:file "LinktrackNode5" :depends-on ("_package_LinktrackNode5"))
    (:file "_package_LinktrackNode5" :depends-on ("_package"))
    (:file "LinktrackNode6" :depends-on ("_package_LinktrackNode6"))
    (:file "_package_LinktrackNode6" :depends-on ("_package"))
    (:file "LinktrackNodeframe0" :depends-on ("_package_LinktrackNodeframe0"))
    (:file "_package_LinktrackNodeframe0" :depends-on ("_package"))
    (:file "LinktrackNodeframe1" :depends-on ("_package_LinktrackNodeframe1"))
    (:file "_package_LinktrackNodeframe1" :depends-on ("_package"))
    (:file "LinktrackNodeframe2" :depends-on ("_package_LinktrackNodeframe2"))
    (:file "_package_LinktrackNodeframe2" :depends-on ("_package"))
    (:file "LinktrackNodeframe3" :depends-on ("_package_LinktrackNodeframe3"))
    (:file "_package_LinktrackNodeframe3" :depends-on ("_package"))
    (:file "LinktrackNodeframe4" :depends-on ("_package_LinktrackNodeframe4"))
    (:file "_package_LinktrackNodeframe4" :depends-on ("_package"))
    (:file "LinktrackNodeframe5" :depends-on ("_package_LinktrackNodeframe5"))
    (:file "_package_LinktrackNodeframe5" :depends-on ("_package"))
    (:file "LinktrackNodeframe6" :depends-on ("_package_LinktrackNodeframe6"))
    (:file "_package_LinktrackNodeframe6" :depends-on ("_package"))
    (:file "LinktrackTag" :depends-on ("_package_LinktrackTag"))
    (:file "_package_LinktrackTag" :depends-on ("_package"))
    (:file "LinktrackTagframe0" :depends-on ("_package_LinktrackTagframe0"))
    (:file "_package_LinktrackTagframe0" :depends-on ("_package"))
    (:file "TofsenseCascade" :depends-on ("_package_TofsenseCascade"))
    (:file "_package_TofsenseCascade" :depends-on ("_package"))
    (:file "TofsenseFrame0" :depends-on ("_package_TofsenseFrame0"))
    (:file "_package_TofsenseFrame0" :depends-on ("_package"))
    (:file "TofsenseMFrame0" :depends-on ("_package_TofsenseMFrame0"))
    (:file "_package_TofsenseMFrame0" :depends-on ("_package"))
    (:file "TofsenseMFrame0Pixel" :depends-on ("_package_TofsenseMFrame0Pixel"))
    (:file "_package_TofsenseMFrame0Pixel" :depends-on ("_package"))
  ))