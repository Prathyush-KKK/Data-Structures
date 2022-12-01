## Count Sort
index based sorting algorithm.
Easy but consumes a lot of memory.

* We need to create another array of max size of given array
* We need to fill the array of that size with 0's
* Scan through taken array one by one
* Increment through given array and elements present in the given array must be taken as the indexes of new array we created, then increment the value of that index by 1
```
Given array: [6][3][9][10][15][6][8][12][3][6]
Count array: [0][0][0][2][0][0][3][0][1][1][1][0][1][0][0][1]
```
* Take given array now to sort the values 
* Now we need to copy all the element from count array back to given array.
* increment through the count array and copy the element that many times as in the index of count array to the given array.

Time complexity: n+n = O(n)
or               m+n = O(n) Linear time taking algorithm
