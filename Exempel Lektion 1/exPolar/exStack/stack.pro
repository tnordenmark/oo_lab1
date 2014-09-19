(UMLStudio "7.2" project)
(repository "" 0)
(notation "UML.not")
(genProfile 114 "C++" ("" "" "" "" "") "" 0 ("" "" "" "" "") ("" "" "" "" "") 
            700 360 251 219 70 50 80 50 80 60 0 0)
(codeFiles)
(docFiles)
(otherFiles)
(revFiles "C++" 
          "C:\dat\GRUTB\KURSER\DT060G\Lektioner\Lektion2\Exempel\exStack\Stack.cpp" 
          "C:\dat\GRUTB\KURSER\DT060G\Lektioner\Lektion2\Exempel\exStack\Stack.h" 
          "C:\dat\GRUTB\KURSER\DT060G\Lektioner\Lektion2\Exempel\exStack\TestStack.cpp")
(masters (master "@&!%F.d)!y85A0!" 1 4 "Node" "" 
                 "C:\dat\GRUTB\KURSER\DT060G\Lektioner\Lektion2\Exempel\exStack\Stack.h" 
                 "This Stack is implemented as a linked list of^r^nNode-objects. The nodes are dynamically created^r^nand destroyed as the stack grows and shrink. " 
                 "" "" 1 
                 (("Stack" "friend class" "" "" "" 
                           "/ Give Stack access to private members" 1 16 
                           "B&!%F.d)!y85A0!") 
                  ("value" "int" "" "" "" "" 1 16 "C&!%F.d)!y85A0!")) 
                 (("Node" "" "/ Constructor" 1 16 (("v" "int" "" 0)) nil 
                          "D&!%F.d)!y85A0!" "") 
                  ("setNext" "void" "/ Getters & Setters" 1 16 
                             (("np" "Node*" "" 0)) nil "E&!%F.d)!y85A0!" "") 
                  ("getNext" "Node*" "" 1 18 nil nil "F&!%F.d)!y85A0!" "") 
                  ("getValue" "int" "" 1 18 nil nil "G&!%F.d)!y85A0!" "")) nil 
                 nil nil 10 "") 
         (master "7&!%F.d)!y85A0!" 1 4 "Stack" "" 
                 "C:\dat\GRUTB\KURSER\DT060G\Lektioner\Lektion2\Exempel\exStack\Stack.h" 
                 "/ class Node" "" "" 1 
                 (("topNode" "Node*" "" "" "" "/ Points to the top Node" 1 
                             16 "9&!%F.d)!y85A0!")) 
                 (("Stack" "" "/ Constructor" 3 16 nil nil ":&!%F.d)!y85A0!" 
                           "") 
                  ("~Stack" "" "/ Destructor" 3 16 nil nil ";&!%F.d)!y85A0!" 
                            "") 
                  ("empty" "bool" "/ Operations" 3 18 nil nil 
                           "<&!%F.d)!y85A0!" "") 
                  ("top" "int" "" 3 18 nil nil "=&!%F.d)!y85A0!" "") 
                  ("pop" "void" "" 3 16 nil nil ">&!%F.d)!y85A0!" "") 
                  ("push" "void" "" 3 16 (("v" "int" "" 0)) nil 
                          "?&!%F.d)!y85A0!" "")) nil nil nil 10 ""))
(customModel "6&!FF.d)!y85A0!" 0 3 "Untitled" "" "" 17 "" "" 1.000000 1.000000 
             (0 0 827 1168) (0 0 827 1168) 
             (place "7&!%F.d)!y85A0!" (3) "" 10 "8&!%F.d)!y85A0!" 
                    (37 30 159 180) (32 25 164 185) (38 33 158 177) 1 0 
                    (nil 1 -15 0 18 12 29 0) "") 
             (place "@&!%F.d)!y85A0!" (3) "" 10 "A&!%F.d)!y85A0!" 
                    (354 39 520 173) (349 34 525 178) (356 41 518 171) 1 0 
                    (nil 1 -15 0 18 12 29 0) "") 
             (link "8&!%F.d)!y85A0!" "A&!%F.d)!y85A0!" (158 105 353 105) 1 "" 
                   "" "%%" "%%" "" "" "" 65 0 (251 95 259 115) 
                   (166 84 192 101) (319 84 345 101) 3 3 "H&!%F.d)!y85A0!" 
                   (158 95 353 115) (153 79 358 125) (251 95 259 115) 2 0 
                   (nil 1 -15 0 18 12 29 0) "") 
             (link "A&!%F.d)!y85A0!" "A&!%F.d)!y85A0!" 
                   (519 74 552 64 552 144 519 132) 1 "next" "" "%%" "%%" "" 
                   "" "" 33 1 (537 95 567 113) (527 78 553 95) 
                   (527 111 553 128) 3 3 "I&!%F.d)!y85A0!" (519 64 567 144) 
                   (514 44 572 164) (537 95 567 113) 2 0 
                   (nil 1 -15 0 18 12 29 0) ""))
