## Theory
There is two lists having n and m elements.
We have to merge them in a sorted order.
```
  m         n
  [2]       [4]
  [10]      [9]
  [18]      [19]
  [20]      [25]
  [23]         
```
* Compare list A and B and copy the smaller element out of the two into a new list.
* Repeat this process until all elements are copied into the new list.
```
            c
            [2]
            [4]
            [9]
            [10]
            [18]
            [19]
            [20]
            [23]            Here, one of the list is finished.
            [25]            So, copy the remaining elements of the other list into the             new list.
```

## Merge Sort in same list
```
  low      mid          high
A [2][5][8][12][3][6][7][10]
   0  1  2   3  4  5  6  7

B [][][][][][][][]
```
* If there is a single list and you want to run mergin (merge sort), then split array in the middle and take the lhs and rhs as two seperate lists
* Same process is repeated
* We need extra array for merging. (Extra space)
* After new list of sorted elements is created, we can copy this list to the original one.

**Time Complexity: O(m+n)**


