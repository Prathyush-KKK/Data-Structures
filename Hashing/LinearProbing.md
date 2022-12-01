# Linear Probing
* Follow normal hashing technique
* If there is an overlap of elements in the same index then just shift the element to the next index.
* While shifting the element count the number of indexes it moves and this is stored as probes.
![](https://cdn.discordapp.com/attachments/763862219649450025/1046705365330427924/image.png)
* h'(x) = (h(x)+f(i))%10 where f(i) = i

## Searching
* Get index from hash function and search the index
* If element not available then go on searching next element linearly
* If empty index is found, then the element is not present {UNSUCCESSFUL SEARCH}


## Analysis
* {loading factor} lambda = n/size
* Average successful search t = 1/lambda*ln(1/1-lambda)
* Average unsuccssful search t = 1/1-lambda
**NOTE: LAMBDA MUST BE <=0.5 FOR LINEAR PROBING**

## Drawbacks
* Half the space in hashtable must be empty
* clusters can be formed (a block of keys at one place)
* Rehashing- when a key is deleted, you have to re insert the whole hash table otherwise the hash wont work 
* Note: In linear probing we dont suggest deletion of element.
