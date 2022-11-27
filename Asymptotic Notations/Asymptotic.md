Time complexities order:
1< logn< n< nlogn <n^2< n^3< ....< 2^n< 3^n< n^n
    polynomial                      exponential 


## Notations:
Omega-O: Lower Value (lower bound)
    f(n)>= cg(n) >= 0               c and n0 are positive constants and for all n>=n0
Rate of growth is the same as or higher than that of g(n).
    g(n) is asymptotic lower bound for f(n)

Big-O: Upper Value (upper bound) 
        0<=f(n)<=cg(n)           c and n0 are positive constants and for all n>=n0
Rate of growth is same as or lower than that of g(n)
        g(n) is asymptotic upper bound for f(n)

Theta: Exact Value (tight bound)
        0<=c1g(n)<=f(n)<=c2g(n)  c1, c2 and n0 are positive constants for all n>=n0
Rate of growth is same as g(n)
        g(n) is an asymptotically tight bound for f(n)


Notations are used when definite time complexity cannot be found.

We mostly use big O to represent because big O gives equal or upper bound which is more useful than knowing lower bound
if we exactly know the time complexity, we use theta notation.

Theta(g(n)) = O(g(n)) n (g(n))s