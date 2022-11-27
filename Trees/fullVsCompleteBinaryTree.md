## Full binary tree

 0                   A
                  /     \
 1               B          C
              /    \      /   \                 Q[A][B][C][D][E][F][G]
 2          D       E   F       G                 1  2  3  4  5  6  7

    height = 2
    max nodes for h => 2 = 2^(h+1)-1 
                    => 7 nodes
    This is a full binary tree


## Complete Binary Tree

                    A                                   [COMPLETE]
                  /     \
                B          C
              /    \      /   \  
            D       E   F       

        T[A][B][C][D][E][F][]
          1  2  3  4  5  6  7

                    A                                  [NOT COMPLETE]
                  /     \
                B          C
              /   \       /   \  
            D                   G

        T[A][B][C][D][][][G]
          1  2  3  4  5 6 7

* A complete binary tree of height h will be a full binary tree upto (h-1) height.
  In the last level, elements are filled from left to right. (any element towards right can be missing but not in the middle)


NOTE: A full binary tree is always a complete binary tree.