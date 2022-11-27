# Representation of Undirected Graphs


## Using adjacency Matrix

* Fill up the edges connected at each node (columns of matrix) by filling 1 if there is a connection otherwise 0 (rows of the matrix).
* For accessing edges, we have to access all edges
* Time complexity: O(n^2)
NOTE: Undirected graph is symmetric, so we can use only half of the matrix.


## Using adjacency List
* For each vertical column, we have a list of nodes that are connected to the node at the column.
* Time consumed here is set of vertices (n) and set of edges. n + 2e.


**NOTE: if cost is given at each edge, we input the cost of edge instead of 1 in adjacency matrix (now called cost adjacency matrix) and if its a list, we add another element to the link data structure to store the weight of the edge (now called cost adjacency list).**


https://cdn.discordapp.com/attachments/763862219649450025/1039136996448284733/image.png


## Using compact list
  i) Usage of single array
  ii) Formula- V + 2E + 1 
    vertices  + 2 * edges + 1 (extra element to store the number of vertices)
  iii) First V spaces are used to represent vertices.
  iv) The next location after V spaces is skipped for now. (V+1th location is skipped)
  v) next E spaces are used to represent edges.
  vi) The index of ending edge for that vertex is stored in the respective  Vth location.
  vii) Now we fill the V+1th location we left free with the index of the last filled element in array.

See diagram to understand better.
https://cdn.discordapp.com/attachments/763862219649450025/1039139272550264852/image.png

* Space consumed by compact list is linear O(n)


# Representation of Directed Graphs

## Using adjacency Matrix
* Similar to undirected graphs, but we fill up only those edges for each vertices that are directed towards some other element and not towards itself.
* Edges going out can be seen in the row of the matrix and edges coming in can be seen in the column of the matrix.

## Using adjacency List
* Similar to undirected graphs, but we fill up only those edges for each vertices that are directed towards some other element and not towards itself.

## Using inverse adjacency list
* Similar to undirected graphs, but we fill up only those edges for each vertices that are directed towards itself and not towards some other element.


* https://cdn.discordapp.com/attachments/763862219649450025/1039144207400575006/image.png