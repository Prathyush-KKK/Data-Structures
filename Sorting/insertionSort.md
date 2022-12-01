## Logic
Basically need to insert an element in a sorted array.

* Need to find out where the number to be inserted should come, how will we do that?
* To insert element, compare the element to the last element of sorted list. 
* Keep decrementing by 1 until the given element < last element.
* Insert the element at the current index.

In a linked list, no shifting is required.
* Take a pointer to check linked list
* Compare the element to the next element
* If the element is greater, then move the pointer to next element
* If the element is less or equal, then insert the element at the current index


It takes minimum time O(n) and maximum O(n^2)

## Example
```
[A] -> [8][5][7][3][2]
```
1. Insert 5
Take out the ith element and insert it at the correct position.
```
 [8][ ][7][3][2]
        5
 [5][8][7][3][2]      1st pass
```
2. Insert 7
```
 [5][8][ ][3][2]
        7
 [5][7][8][3][2]      2nd pass
```
1. Insert 3
```
 [5][7][8][ ][2]
        3
 [3][5][7][8][2]      3rd pass
```
1. Insert 2
```
 [3][5][7][8][ ]
        2
 [2][3][5][7][8]      4th pass
```

No. of passes -> n-1 passes
No. of comparisions -> 1+2+3+4+...+n-1 = n(n-1)/2 = O(n^2)
No. of swaps -> 1+2+3+4+...+n-1 = n(n-1)/2 = O(n^2)

NOTE: We do not get any useful info from insertion sort unlike bubble where we got the largest element at each pass.
      Insertion sort is designed for linked lists as it is more compatible and easy to work with.

    

