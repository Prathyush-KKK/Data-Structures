## Creating Nodes
```
                        5
                    /      \
                 8            6
                  \          /
                    9       3
                  /   \
                4       2
```

* Create root node and have both addresses null
* ```
    [/][5][/]
      200
  ```
* Insert the address of root node in the queue                     [200][][][][][][][][]

---
* Take root node address from the queue and insert it to the linked list (left node)
---
* Ask the tree if there is left child
* if true: create a new node with the value of left child and make the two addresses null
    [/][8][/]
      210
* point the root node having address (on the left of linked list) to the new node created
* Insert the address of the new linked list into the queue.         [200][210][][][][][][]
---
* Ask tree if there is right child
* if true: create a new node with value of right child and make the two addresses null
    [/][6][/]
      230
* point the root node having address (on the right of linked list) to the new node created
* Insert the address of the new linked list into the queue.         [200][210][230][][][][][]

Repeat above steps until tree is completed


The following steps for above tree are:

* take out address 210 from the queue, point it to left node
* take value of right side 
* new node on right create
  [/][9][/]
    250
* insert pointer of new node to right  [/][8][250] to the new node

* 