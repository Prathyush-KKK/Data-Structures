# Hashing
* Useful for searching from a dictionary
* There are already search techniques such as-
  1) Linear Search O(n)
  2) Binary Search O(logn)

## Procedure-
Similar to count sort
* Make array of size = max key size
  eg: keys: 8,3,6,10,15,18
* build hashmap
  [][][][3][4][][6][][8][][10][][][][][15][][][18]
* Storage and retrieval of data in an average time does not depend on collection size O(1).

## Some terminology
* Keyspace- set of keys
* Hashtable- where elements(keys) are stored
* TableSize- size of array
* Each key is mapped into some number in the range 0 to tableSize -1
* This mapping is called **Hash Function**


## Theory
* We use the technique of relation and functions
* ![](https://cdn.discordapp.com/attachments/763862219649450025/1046682494805749790/image.png)
* function formula: h(x) = x
* Drawback- Requires high space complexity
* Ideal hash function is one-one

## Modified hash function
* We map key value to its modulus with 10.
* h(x) = x%10
* This becomes many-one function which is its drawback
* For solving this problem there are some methods-
  1) Open Hashing: 
     1) Chaining
  2) Closed Hashing
     1) Open Adressing: if two or more keys are mapped at same place, store it at any other free space.
        * Linear Probing
        * Quadratic Probing
        * Double Hashing
  
  