# Chaining (Open hashing)
* Solves clashing of data problem from a modified hash table
* This is implemented using array of pointers to Linked lists

## Procedure
* eg: key space: (16,12,25,6,122,5,68,75)
* Using modified hash function we insert keys See illustration below:
![](https://cdn.discordapp.com/attachments/763862219649450025/1046704437357465653/image.png)

* Searching: 
 1) Select key to search and find modulus value of it
 2) Go to the key in the pointer of array and we find a linked list.
 3) then search for that element in that linked list


## Analysis:
* If there are n = 100 keys, then the size of hash table is 10 because we take modulus of 10.
* size = 10
* {loading factor} lambda = n/size 
* lambda is the number of keys which is stored at each location (Assumed to be uniform but really they can be different)
* Average Successful search time t = 1 + (lambda/2)
* Average Unsuccessful search time t = 1 + lambda


## Deletion
* Use hash function and find pointer index
* search for element in linked list
* delete the node from linked list


NOTE: Hash function must be selected such that keys are uniformly distributed.
