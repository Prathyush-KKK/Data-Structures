## Prim's MST Steps:
i) Select an edge with minimum cost
ii) The next vertex to be selected should be the one which has least weight and which is connected to either edge.
iii) Repeat the same thing.
iv) Stop when there is going to be a loop forming.

## Analysis:
i) We are selecting n-1 edges and we are checking connected one only.
(V-1)*E is time taken
or O(n^2)

ii) if using heap data structure, then it will be O(ElogV)
or O(nlogn)

(REWATCH 11. Prims program- its complicated, take ss of the arrays and stuff)(REWATCH 11. Prims program- its complicated, take ss of the arrays and stuff)