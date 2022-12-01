# DFS
* Similar to preorder traversal of Binary Trees
* Uses stack instead of queue
* Can have any starting vertex
* Traversal:
  i) Start with any vertex and push it into the stack
  ii) Choose any one adjacent vertex and find its any one adjacent vertex, push it to stack and go on.
  iii) If there are no more adjacent vertices, pop the vertex from the stack and explore the next vertex.
  iv) similar to bfs traversal draw dotted lines to the vertices that are already visited.

* The tree we get here is called DFS spanning tree
* and the dotted lines we get is called back edge (connects back to already visited vertices.)
![](https://cdn.discordapp.com/attachments/763862219649450025/1039183192013422632/image.png )

