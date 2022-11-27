## Representation
* Store the elements
* Preserve the relationships (parent, left child, right child)

                    A
                  /     \
                B          C
              /    \      /   \  
            D       E   F       G

        T [A][B][C][D][E][F][G]
           1  2  3  4  5  6  7

element     index   Lchild  Rchild
A            1         2      3
B            2         4      5
C            3         6      7
D            4
E            5
F            6
G            7
**Formula**  i         2i    2i+1

parent - i/2