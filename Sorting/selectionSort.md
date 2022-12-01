## Selection sort
* Comparison based sorting
```
A[8][6][3][2][5][4]
```
* We select a position (let it be index 0 in this case), find out minimum element.
  -We will take two pointers j and k
  -keep k at selected position (here 0) and iterate j through the array
  -if j is smaller than the element k is pointing, shift k to j and continue iterating through j
  
  -This gives the minimum element and we find its index
  -Now interchange the 'i'th element with k. (i is 0 in this case)
    Move i to next position and repeat until array is sorted.


Space Complexity:  O(n)
**Complexity- O(n^2)**
Sorting in Place:  Yes
Stable:  No

* It has least number of swaps among all swapping type sorting.
* also just like bubble sort where we get k largest elements, we get k smallest elements.
* It is not adaptive because we cannot check unlike bubble sort where if it doesnt swap we know it is sorted.
* It is not stable, original order of equal elements is not preserved.