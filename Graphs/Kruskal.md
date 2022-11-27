# Kruskal's Method:
* Kruskal's method is a greedy algorithm that finds a minimum spanning tree for a connected weighted graph.
* Steps:
  i) Take smallest edge 
  ii) Then next take the second smallest edge and continue it like that until you reach a loop. If there is a cycle forming, ignore that minimum and take the next minimum.
* Complexity is- V-1*E or O(n^2)
* If we are taking heap, then complexity is O(ElogV) or O(nlogn)


# Disjoint Subset (useful for Kruskals Method)
* If intersection between two sets are taken and it results in null set then it is called disjoin subset.
* Steps:
  i) We assume each element is a set of itself
  ii) Take an array filled with -1 (denotes each element is set of itself)
  iii) Choose one set and select one of the element as a head or parent [parent is the element which other elements point to]
  iv) fill up parent element number in the indexes of its children element in another array. The negative of parent element will be the element at its index.

* To make a UNION SET:
  i) make parent the parent of set having more elements
  ii) Connect the smaller set to the parent of this new set.
  iii) We need to reorder the set array to make the parent of the new set as the parent of the smaller set. {update index with new parent element}
  
  https://cdn.discordapp.com/attachments/763862219649450025/1039503648205570099/image.png
  https://cdn.discordapp.com/attachments/763862219649450025/1039504173881901096/image.png
  https://cdn.discordapp.com/attachments/763862219649450025/1039504596382519336/image.png
  https://cdn.discordapp.com/attachments/763862219649450025/1039505231379173447/image.png

(See kruskals program first half also its complicated 15. Kruskal's Problem)