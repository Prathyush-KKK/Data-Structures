Q a+b*c-d/e  -> infix to postfix
* skip cuz a is an operator, write to postfix
* Push + to stack 
* skip cuz b is operator , write to postfix
* push * because operator and its precedence is greater
* skip c , write to postfix
* '-' has lower precedence than '*' so pop all elements from stack and push - to stack
* now stack has [-]   and postfix is : abc*+
                [+]   
* skip d, write to postfix
* push '/' is having higher precedence 
* skip e, write to postfix
* now string is empty so push full stack empty.


NOTE: OUTSTACK ) HAS THE LOWEST PRECEDENCE {precedence outside stack}
      INSTACK ( HAS THE LOWEST PRECEDENCE  {precedence inside stack}

Q) ((a+b)*c)-d^e^f

* push ( to stack
* push ( to stack
* skip a, write to postfix
* write all in stack out because lesser precedence    ((a
* push + to stack
* write b
* push ) to stack
* write all out because * lower precedence       ((ab+)
* push * to stack
* write c
* push ) to stack
* write all out '-' lower precedence       ((ab+)c*)
* push - to stack
* now we need to evaluate opposite because R-L precedence of ^
* write f
* push ^
* write e
* push ^
* write d
* expression over so now push all         ((ab+)c*)fed-^^  -> postfix

^THIS IS WRONG REDO AGAIN (See vid 19. student challenge)


