### Linked Representation of Tree
                    A
                  /     \
                B          C
              /    \      /   \  
            D       E   F       G

                     [][A][]
                  /          \
                [][B][]       [][C][]
              /       \      /        \  
       [/][D][/]   [/][E][/]   [/][F][/]   [/][G][/]

                            NODE
                    [Lchild][data][Rchild]


## Formulas 
* If there are n nodes, 
null pointers = n+1            {similar to e = i+1 from strict binary tree}
