## Wat is Heap?
### 1
- It is a complete Binary Tree

eg: [30][20][15][5][10][12][6]
 ^ no element must be empty here


### 2
- Two possibilities: 
* Every element must have greater to or equal to its descendants (can have duplicates)  {MAX-HEAP}
            30

        20      15

    5       10  12      6
* Every node is having elements smaller than or equal to its descendants (can have duplicates) {MIN-HEAP}
            5

        15      12

    20       25  30      18

* NOTE: Height of binary tree will always be be logn

