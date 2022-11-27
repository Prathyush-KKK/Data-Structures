## Quick Sort
Eg: Students with height differences are standing in a line.
Teacher arranges herself or she asks students to arrange themselves.
The latter will be the better approach and is using quick sort (similar)

## Algorithm
        (50) 70 60 90 40 80 10 20 30
* Let first element be the pivot element
* Take i pointing to first element and j be pointing to last element
* 'i' looks for greater element and 'j' looks for lesser element
* Let pivot be 50 
* Compare 'i' such that it is greater than pivot element by iterating it rightwards (assuming pivot to be 50 here)
* Compare 'j' such that it is lesser than pivot element by iterating it leftwards
* Swap 'i' and 'j'
* Repeat the above steps until 'i' is more than to 'j'
* After reaching this step, pivot is swapped with 'j'
* At this moment, the list will get partitioned into two. So we need to perform quick sort again now.

eg2:  (20) 10 30   inf 
            i  j
    
* 10(i) greater than 20(pivot)? no, move on to next element (30)-> greater than 20
* 30(j) lesser than 20(pivot)? no, move j-- to 10 which is lesser than 20. 
* After both conditions satisfied, pivot swaps with j. 



## Complexity- 
n, n-1, n-2, n-3 .... 2, 1 = n(n+1)/2  =>  O(n^2)