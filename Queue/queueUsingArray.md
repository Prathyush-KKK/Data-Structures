## Logic
Create int rear and front and initialize it to -1

### Insert
Move rear to next location (rear+1) and insert element at that location
complexity- O(1)


### Remove
The first element only can get dequeued to remove
once removed, need to shift elements to the left had side
need to check and avoid blank spaces whenever using arrays
complexity- O(n)


Position of front and rear will be at -1 initially and during insertion, only the 
rear element moves through array

After all elements inserted, rear element stays at last element

For deletion, front moves and deletes element


### initially 
front = rare = -1

### isEmpty
if(front==rear)

### Full
if(rear=size-1)


## Drawbacks:
If there is a queue filled with some elements and rear element is pointing to the last element {size-1}, and front has already deleted{dequeued} some elements, 
we cannot add more elements and reuse the spaces of deleted elements because the rear pointer will already be showing full.

** Every location can be used only once **

Even if all elements are deleted {then, front=rear}
it will show queue is full.

** We can use each space only one time **

## Solution
Resetting pointers- if any time front and rear elements are at last or same index {Queue is becoming empty}, bring front and rear elements back to first place {-1}.

Still we cannot reuse those queues where front == rear condition is not satisfied i.e not all elements are dequeued.


