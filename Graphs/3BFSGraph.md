# Breadth first Search
* Same as level-order of a binary tree.
* Graph without directed/connected vertices is a tree.
* To convert a graph into a tree-
  i) Draw connected edges in the form of a tree
  ii) if for one vertex, the siblings have to connect in the graph, then just draw dotted lines to those connections. (those edges trying to form a cycle)
  iii) extend the tree if the siblings do not connect and form a new vertex.
  iv) Take inorder of the result- This gives the BFS of the graph.

* For a graph there can be different BFS results.

![](https://cdn.discordapp.com/attachments/763862219649450025/1039150669401178112/image.png)

![](https://cdn.discordapp.com/attachments/763862219649450025/1039150744076558386/image.png)

  
### BFS Traversal:
i) Starting vertex can be any vertex
ii) When you visit a vertex, you must explore it completely (visit all adjacent vertices)


### Steps:
i) Create a queue
ii) Take BFS element of the graph and visit it.
iii) Push the starting vertex in the queue.
iv) Take out the vertex from queue and explore that vertex- by explore we mean visit all adjacent vertices of that vertex, write it into BFS array and push it into the queue. After vertex is completely explored, remove the vertex from the queue and explore the next . Repeat.

![](https://cdn.discordapp.com/attachments/763862219649450025/1039151730186801182/image.png)

