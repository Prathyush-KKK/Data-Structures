## Number of Binary Trees
Q If i) 3 ii) 4
nodes are given, how many binary trees can be generated? What is the maximum height? How many binary trees with max height?
![](https://cdn.discordapp.com/attachments/763862219649450025/1018877516238307418/unknown.png?size=4096)

### Formulae:
Number of Trees:
    T(n) = 2nCn/n+1      {also called Catalan number}
    n- number of nodes

    or

    T(n) = summation(n, i=1) T(i-1)*T(n-i)

Maximum Height:
    n-1

Number of trees with maximum height:
    2^n-1


## Labelling of Trees
The number of ways each node of a given tree of n nodes can be labelled 
![](https://cdn.discordapp.com/attachments/763862219649450025/1018880080400892095/unknown.png?size=4096)

Formula:
 T(n) = 2nCn/n+1 * n!


