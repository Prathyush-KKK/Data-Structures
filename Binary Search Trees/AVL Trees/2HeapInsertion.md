## Insertion (for maxheap- same for minheap as well)
```
        30

    20      15      

5       10  12      6


T[30][20][15][5][10][12][6][][][]
  1   2   3   4  5   6   7  8 9 10
```


### Insert 40

- Insert key element in an array at next free space: (we want to maintain a complete binary tree)
```
T[30][20][15][5][10][12][6][40][][]
  1   2   3   4  5   6   7  8 9 10

                30

            20      15      

        5       10  12      6
    
    40
```
- Rearrange elements to make it as max heap
* keep 40 at a temporary variable 
* move it up until it is greater than its parent (how? divide the index by 2 and compare [this gives parent])
```

                40

            30      15      

        20       10  12      6
    
    5
```
Now, it is a max heap
```
T[40][30][15][20][10][12][6][5][][]
  1   2   3   4  5   6   7  8 9 10
```

### Insert 35
```
T[40][30][15][20][10][12][6][5][35][]
  1   2   3   4  5   6   7  8   9 10

                  40

            30      15      

        20       10  12      6
    
    5       35
```
- Rearrange elements to make it as max heap
* keep 35 at a temporary variable 
* move it up until it is greater than its parent (how? divide the index by 2 and compare [this gives parent])
```
                  40

            35      15      

        30       10  12      6
    
    5       20

T[40][35][15][30][10][12][6][5][20][]
   1   2   3   4  5   6   7  8 9 10
```


   ** Time taken: logn (depends on height of the tree)**


## Creation of Heap
- a array of n elements will be given and we need to adjust it into a heap.
```
A[10][20][30][25][5][40][35]
  1   2   3   4  5   6   7

### Insert 20
A[20][10]                    //swapped once

### Insert 30               
A[30][10][20]               //swapped once

### Insert 25
-A[30][25][20][10]          //Swapped once

### Insert 5
-A[30][25][20][10][5]      //nothing swapped

### Insert 40
-A[30][25][40][10][5][20]  //swapped once
-A[40][25][30][10][5][20]  //swapped once more

### Insert 35
-A[40][25][35][10][5][20][30]  //swapped once

```

## Deletion of Heap
- In a heap you can only delete root elements (or higher priority elements)
* How to delete?
-A[40][35][30][15][10][25][5]  

1. Remove the root node (40) and replace it with the last element (5)
-A[5][35][30][15][10][25][5] 

2. Compare the children of newRoot and swap the greater child with new root until the last child of that node
-A[35][5][30][15][10][25][5] 
                                       note (children are i and i+1 and i+2 are the children to that node)
-A[35][15][30][5][10][25][5] 
