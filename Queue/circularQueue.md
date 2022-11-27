## Initialize
array of n elements present
front and rear both point to 0 element
move rear from 0 to 1 to 2...
front element (pointing at 0) must always be 0 at start
to dequeue same process iterate front and delete element

## To insert
Bring rear at 0 then insert at 0
next move rear to the next position and insert

Cannot insert at position where front is pointing otherwise it will show that queue is empty
So when the pointers reach last element, then the pointers should shift to 0

We can achieve such operation using mod operation
Rear = (rear + 1)%size
if array is of size 7, 
0  |  (0+1)%7 | 1
1  |  (1+1)%7 | 2
2  |  (2+1)%7 | 3
3  |  (3+1)%7 | 4
4  |  (4+1)%7 | 5
5  |  (5+1)%7 | 6
6  |  (6+1)%7 | 0
7  |  (7+1)%7 | 1


