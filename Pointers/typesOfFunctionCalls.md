## Function calls can be of- 
i) call by value  fun(int n)    {arrays cant be passed here like fun(int A[3]) not possible}
ii) call by address   fun(int *n)
iii) call by referece  fun(int &n)  -> only in cpp   {pastes the whole function code at the place it is declared}


## passing structure in a function -

i) int area(struct Rectangle r1)  -> call by value

ii) int changeArea(struct Rectangle *p, int l):
p-> length = length + l;
return p.length*p.breadth;
in main(): 
stuct Rectangle r1;
changeArea(&r1, l);


NOTE: in call by value, the main variables wont change, instead another variable is created 
in the heap memory which copies the props of passed variable and that is changed 

basically if you want to change the values, you need call by reference otherwise just for
printing values use call by value

