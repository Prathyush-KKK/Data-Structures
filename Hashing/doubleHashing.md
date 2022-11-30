# Double Hashing
* Indeces are given such that al spaces are utilized
* Result of hash function should not be zero 

## Formula
h1(x) = x%10
h2(x) = 7-(x%7)
h'(x) = (h1(x) + i*h2(x))%10 where i = 0,1,2,3
https://cdn.discordapp.com/attachments/763862219649450025/1046765660971217016/image.png