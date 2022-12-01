## n-ary trees
n represents the number of degrees (no. of children)
The tree cannot have more than n degree but can have less than n.

## strict n-ary trees
Every node can either have 0 children or exactly n children
eg:![]    5       20
```(https://cdn.discordapp.com/attachments/763862219649450025/1019539251215466516/unknown.png?size=4096)


## Formulas

### For n-ary trees
* If height (h) is given:
minimum nodes => n = m*h+1
maximum nodes => n = m^(h+1)-1/m-1

* if nodes (n) are given:
minimum height => h = logm[n(m-1)+1]-1 
maximum height => h = n-1/m

### For strict n-ary trees
* e = external nodes (number of nodes)
  h = internal nodes (height of tree)

  e = (m-1)i+1


*