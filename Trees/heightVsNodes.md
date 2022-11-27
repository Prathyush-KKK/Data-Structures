## Height vs Nodes  {Note: Only for Binary Trees}
essentially find the min and max no. of nodes one can make with a given height
for eg: Tree of height 1
min nodes- 2
max nodes- 3

### Formula:
minimum nodes: n = h+1                            n- nodes
maximum nodes: n = 2^(h+1) -1                     h- height                                                              
https://cdn.discordapp.com/attachments/763862219649450025/1018881508737556500/unknown.png?size=4096

if nodes are given and we need to find min and max height,
we just subs h = n-1

minimum height: h = log2(n+1)-1
maximum height: h = n-1


## Conclusion
* Height of a Binary Tree: (can range from)
    log2(n+1)-1 <= h <= n-1
    O(logn)             O(n)

* Number of Nodes in a Binary Tree: 
    h+1 <= n <= 2^(h+1) -1