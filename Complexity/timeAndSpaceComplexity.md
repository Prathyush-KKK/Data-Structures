## Time and space complexity
for eg: in a 2x2 matrix:
time complexity for processing rows or columns - O(n)
time complexity for processing both - O(n^2)

for array (m elements) of linked list (n) - O(m+n)

for tree- along single path, it depends on height of the tree- O(logn)
	  for all elements: O(n)
	  

## Space complexity

eg:

swap(x,y){
int t;
t = x;  1
x = y;  1      O(3) or O(1)
y = t;  1
}



sum(int A[], int n){
int s, i;
s = 0;           1
for(i=0 : n){   	 n+1        O(1+n+1+n+1) or O(2n+3) or O(n)
s +=A[i];	 n
}
return s;	 1
}


add(int n){
int i, j;
for(i=0: n){                        n
	for(j=0:n){			n*(n+1)
		c[i][j] = A[i]][j]+B[i][j];    n*n
	}
}					O((n+1)+n*(n+1)+n*n) or  O(2n^2+2n+1) or O(n^2) 												
}


fun(){
	fun1();		n
}
fun1(){						O(n)
	for(i=0:N){
		...     n+1
	}
}
