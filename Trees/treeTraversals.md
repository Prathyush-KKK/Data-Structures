## Tree traversals
For binary trees:

a)        A                   b)    A                   c)      A
        /  \                       /                              \  
        B   C                    B                                  B





i) Pre order: visit(node{root}), preorder(left subtree), preorder(right subtree)__
    a) A,B,C
    b) A,B,
    c) A,B

ii) Inorder: Inorder(left), visit(node{root}), Inorder(right)__
    a) B,A,C
    b) B,A
    c) A,B

iii) Postorder: Postorder(left), Postorder(right), visit(node)__
    a) B,C,A
    b) B,A
    c) B,A

iv) Level Order: Level by level__
    a) A,B,C
    b) A,B
    c) A,B



## METHOD 1 
Q)          A
        B        C
    D      E  F     G

* Break tree into smaller trees.
* From the top node, if the next level node has children break it into its own seperate trees.


            A
    ________  _______  
   |    B  | |  C   |
   |D     E| |F    G|
    --------  ------

* It will become like->  A,(...), (...)

* Preorder: A,(B,D,E),(C,F,G)
        = A,B,D,E,C,F,G

* Inorder: A,(D,B,E),(F,C,G)
        = A,D,B,E,F,C,G

* Postorder: (D,E,B), (F,G,C), A
        = D,E,B,F,G,C,A

* Levelorder: (DEB), (FGC), A
        = D,E,B,F,G,C,A



## METHOD 2 (EASY METHOD)
*** Draw a line at the bottom of the tree.***

### Preorder: 
* connect all elements to the line from left to right order
* write the order in which elements are connected to the line from left to right

### Inorder:
* connect all elements to the line from the middle of node (draw a straight line)
* write order from left to right

### Postorder:
* connect all elements tot he line from right to left
* write order from left to right



## METHOD 3 (EASY METHOD)


### Preorder:
* write a mark on every node on its left hand side
* Trace around the boundary from left to right and write all elements which you come across


### Inorder:
* write a mark on every node on its bottom
* Trace around the boundary from left to right and write all elements which you come across

### Postorder:
* write a mark on right hand side of each node.
* Trace around the boundary from left to right and write all elements which you come across



## METHOD 4 (DIRECT METHOD)

*** Always point your finger starting from above the root node not at the root node***

### Preorder: (similar to boundary method)
* Mark your finger on A from the left
* trace the finger around the boundaries and write down all elements which you come across


### Inorder:
* Mark finger on the top (point to the top, finger should point to the bottom of the node)
* trace the finger around the boundaries and write down all elements which you come across

### Postorder:
* Make finger on right (should point to the node from the right)
* trace the finger around the boundaries and write down all elements which you come across

