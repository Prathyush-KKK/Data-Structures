## Questions
1. Infix : a+ b
2. Prefix +ab
3. Postfix ab+

## Why?
We will have to jump everywhere to decide which operation to perform next which means we have to scan the expression multiple times.

If arranged in postfix, we can scan and perform once and write the operation


## How?
1) a+b*c 

Prefix: 
Step 1: parentisize the expression
        a+(b*c)

Step 2: bring the operators first in the expression according to parenthesis
        (a+[*bc])

Step 3: repeat
        +a*bc

Postfix: (used more than prefix)
Step 1: (a+(b*c))
Step 2: (a+[bc]*)
Step 3: (abc*+)

2) a+b+c*d

Prefix:
Step 1: a+b+ [*cd]

Step 2: +[ab] + [*cd]                        take as y + z

Step 3: ++ab*cd

Postfix: 
Step 1: a+b+[cd*]

Step 2: [ab+]+[cd*]

Step 2: ab+cd*+


3) (a+b) * (c-d)

Prefix: 

Step 1: [+ab] * [-cd]

Step 2: *+ab- cd


Postfix:

Step 1: [ab+] * [cd-] 

Step 2: ab+cd-*




## Associativity

*** L-R (+, -, *, /, ())
    R-L (^, unary -, unary "*", all unary operators) ***

Q) a+b+c-d
Use associativity to parenthesize from left to right

(((a+b)+c)-d)

Q) a^b^c
A (a^(b^c))

Q) --a
A (-(-a))

Q) -a + b*logn! convert to postfix
A -a + b*log[n!]
  -a + b*[n!log]
  [a-] + b*[n!log]
  [a-]+[bn!log]*
  a-bn!log*+

  