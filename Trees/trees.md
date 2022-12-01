## Terminology
```
  height                                        Level
    0                  A                        1
                    /   |   \   
    1           B       C       D               2
              /     \         / |  \
    2       E        F       G   H   I          3
                  /    \         | 
    3           J       K        L              4
                |              /   \
    4           M              N    O           5
```
*** Tree is a collection of nodes where one of the nodes is taken as root node and the rest are taken as disjoint subsets and each subset is a tree or sub-tree ***

* Root- Very first node on the top 

* Parent & Child- A node and its very next descendent or those nodes connected with one edge

* Children of same parents (eg: GHI, JK and NO are siblings)

* Descendents: All sets of nodes which can be reached from a particular nodes ( for D, GHILNO are descendents)

* Ancestors- All nodes along path of that node to root node (eg for L- HDA are ancestor)

* Degree- number of children any node is having (for A and D degree is 3, for B it is 2)

* Nodes with degree = 0 are ***Leaf Nodes*** or ***external or terminal nodes***

* Levels- Number of nodes in a particular selected path (ADHLO path has 5 levels, BFK has 3 levels)

* Height- Number of edges taken to reach a particular level (F, E, G, H, I have height of 2; K has a height of 3)

NOTE: Level starts from 1 while height starts from 0.

* Forest - is a collection of Trees.

* Depth- Height of tree from bottom.

## Binary Tree
If degree of tree (number of children) is two, it is called a binary tree.
We give names as left and right child
NOTE: Every node can have {0, 1, 2} children
examples of binary trees- 
![](https://media.discordapp.net/attachments/763862219649450025/1018876694565752862/unknown.png)