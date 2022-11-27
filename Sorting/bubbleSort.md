## Logic 
Basically compares nth and n+1th element for array of size n till n-1. -> This process of comparision is called Pass
Heaviest element (largest) is swapped till n-1    {1st pass} -> This element will end up at the last
Same process is repeated until all elements are swapped, heavier elements are to the end and array is sorted   {nth passes}


### There will be n-1 passes for n elements
for eg if theres an array of size 5, 
No. of passes: 4 -> (n-1) passes
No. of comparisions: 1+2+3+4 +...+ n-1 = n(n-1)/2  = O(n^2)
Max no. of swaps: 1 + 2 + 3 + 4 -> 1+ 2+ 3+ ....+ n-1 = n*(n-1)/2 = O(n^2)


NOTE: n pass wields n greatest elements (largest elements collects at the end of the array)

Space complexity: O(1)
Min Time: O(n)
Max Time: O(n^2)
Average case performance: O(n^2)

Therefore, Bubble sort is: Adaptive, Stable, In-place, O(n^2)


