## Problem with an array:
Array is of a fixed size, once created it remains the same
add or delete elements in the middle of the array while maintaining relative order
cannot add elements if no space available


NOTE: For array inside stack: int A[5];
NOTE: For array inside heap: int *p = new int[5];

## Linked list
* A linked list is a data structure which can change during execution.
* is formed inside heap
* A 'Node' contains an element and a pointer
* More flexible than array
* They grow and shrink one element at a time, without inefficiencies of arrays

- Successive elements are connected by pointers
- first element is called first/head and is a pointer which points to first/head node
- Can grow or shrink during execution of a program
- Can be made as long as needed and doesnt waste memory space
- Last node is NULL
- Insertion and deletion support
- Are non-contiguous: Random addresses assigned (as it lies in heap memory)


## Node:
* Has data and *pointer
* pointer of its own type (node type)
* struct Node is used for this (as it is an ADT)

        [data][next]
            node

```
* struct Node {
    int data;                           2 or 4 bytes
    struct Node *next;                  2 or 4 bytes
};

* main(){
    struct Node *p;
    p = new Node;                or p = (struct Node*)malloc(sizeof(struct Node));
    p->data = 10;
    p->next = 0;                 or p = NULL
}
```

each node occupies 2 or 4 bytes so if it takes 4 bytes, the node takes addresses
200, 201, 202 and 204 (if 200 is the first address)

### *p should not be NULL or 0.
### if(p->next ==NULL || 0) then p->next is the last node


## Displaying Linked List
Let there already be a linked list having pointer p pointing to it.
first
```
[200]
    \->[8|210]->[3|270]->[7|300]->[12|350]->[9|0]
addr:   200       210      270      300      350     
``` 
```
display(struct Node *p)
struct Node *p = first;
while(p!=0){
cout<<p->data;
p=p->next;               {p will move to next node until reaching null}
}

display(first);
```

## Inserting a node in a linked list
```
0         1      2      3      4       5
    [5][]->[3][]->[9][]->[7][]->[6][/]
       1     2      3      4      5
```
i) Can insert at position first node
* Create a new node 
* Initialize node with data
* point new node to first node
* Move first node to new node
```
 insertfirst(int x):
    Node *t = new Node;
    t-> data = x;
    t->next = first;
    first = t;
```
Complexity: O(1)





ii) Can insert at position last (same code as middle)



iii) Can insert in middle of two nodes also
Lets insert at position 4

* Create new node
* Initialize node with data
* take a pointer p pointing to first node to the 4th or nth node (p moves pos-1 times)
* point new node to p->next
* NewNode->next = lastNode
* p->next = NewNode
```
insertMiddle(int pos, int n){
    Node *t = new Node;
    t-> data = n;
    p = first;
    for(int i=0; i<pos-1; i++){
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
}
```
Time taken: O(n): Maximum time taken
inserting at first node, O(1): Minimum time taken


## Deleting a node
i) Can delete first node