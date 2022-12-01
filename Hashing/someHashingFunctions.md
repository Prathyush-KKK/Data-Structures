## Properties and tips of Hash function
* Programmer must choose hash function such that collision of elements does not occur in chaining
* The loading factor (lambda) of half table must be less than or equal to 0.5 i.e, the hash table must be double the size of no. of key elements
* Note: It is preferred that number of hash table must be a prime number to reduce number of collisions, and have a definite pattern.

## Mid square method
* Suggests that you must square the key then take its middle digit 
* eg: 11^2 = 121, we must pick 2 {middle digit} as the hash table key
* 13^2 = 169, 6 is the index for hash table
* if even number of digits, take mod on that key or take the middle two digits if its present inside hash table


## Folding
* Take all digits of key and add each two digits. add the two digits obtained in sum too. This value is the key.
![](https://cdn.discordapp.com/attachments/763862219649450025/1046770471049363466/image.png)

