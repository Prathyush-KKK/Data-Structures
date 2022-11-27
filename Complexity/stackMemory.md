## Static heap memory
When variables are declared, its memory are allocated in the stack memory 
Everything done at or before compile time is called static 

## Memory allocation from stack
Memory is created and destroyed automatically accordingn to the function calls and its variabels during program execution
	

## Memory allocation from heap
heap is used in cases where program looks like a "Tower". 
heap -> unorganised memory.
heap memory is allocatied when 'new' statements are used


void main(){
int *p;
p = new int[5];    or    (int)malloc(5*int)
}

	the pointer is stored in main() stack and the memory for p is stored in heap
	
	must delete the heap memory when not in use, must be released (causes loss of memory also called memory leak):
delete []p;
p = NULL;



