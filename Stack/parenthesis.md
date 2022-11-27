## Question
* Parenthesized expression is given we need to check if it is balanced or not.
* Every opening bracket must have closing bracket

## Steps:

Step 1 : Scan the Infix Expression from left to right.
Step 2 : If the scanned character is an operand, append it with final Infix to Postfix string.

Step 3 : Else,
Step 3.1 : If the precedence order of the scanned(incoming) operator is greater than the precedence order of the operator in the stack (or the stack is empty or the stack contains a ‘(‘ or ‘[‘ or ‘{‘), push it on stack.

Step 3.2 : If the precedence order of the scanned(incoming) operator is less than the precedence order of the operator in the stack Pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator. After doing that Push the scanned operator to the stack. (If you encounter parenthesis while popping then stop there and push the scanned operator in the stack.)

Step 3.3 : the precedence order of the scanned(incoming) operator is equal to the precedence order of the operator in the stack , go for Associativity.
If R-L then push the operator
If L-R then pop the stack top and then push the scanned operator

Step 4 : If the scanned character is an ‘(‘ or ‘[‘ or ‘{‘, push it to the stack.
Step 5 : If the scanned character is an ‘)’or ‘]’ or ‘}’, pop the stack and and output it until a ‘(‘ or ‘[‘ or ‘{‘ respectively is encountered, and discard both the parenthesis.

Step 6 : Repeat steps 2-6 until infix expression is scanned.
Step 7 : Print the output
Step 8 : Pop and output from the stack until it is not empty.
