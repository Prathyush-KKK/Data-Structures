## Theory:
* Declare an array of fixed size (max size).
* A stack having integer size, top and integer pointer s is declared in a stack
* The pointer must point outside the stack(or before the first element [0]) so = -1

Conditions: Empty- top ==-1
            Full- top == size-1

### Insert (push)
Now we have to insert element in the stack push
* it needs the stack in which we need to insert element and second is the value
 
push(Stack *st, int x)  {pointer because we want to change the value}
    check if stack full (top==size-1)
otherwise 
        increment top by one and assign the stack[top] some value    

### Pop
Now we want to delete some elements
first need to check if stack is empty
if top is -1
    stack underflow
otherwise
    temp = stack[top]
    decrement top by one
    return temp (deleted element)

### Peek
If we want to know the element at given index we use: peek(stack, index)
first we need to see if position is empty or not
    if top is <0
        return false
    else
        return false


NOTE: -> is similar to . operator from java/javascript

### Stack Top: 
returns current top element of stack
first need to assign top to -1 
if top == -1 
    return -1
else
    return stack[top];


### isEmpty and isFull
if stack top == -1 
    return 1
else
    return 0

if stack top == size-1
    return 1
else
    return 0
    


## Program: 

struct Stack{                       stack
    int size;                       [size] <- int
    int top;                        [top] <- int 
    int *s                          [s] <- int pointer
}

int main(){
    struct Stack st;
    printf("Enter size of stack: ");
    scanf("%d", &st.size);
    st.s = (int *)malloc(st.size * sizeof(int));   or       new int[st.size];
    st.top = -1;
}

void push(Stack *st, int x)+
    if(st->Top == st->size-1){
        printf("Stack is full\n");
    }
    else{
        st->top++;
        st->s[st->top] = x;
    }
}

void pop(Stack *st){
    int x = -1;
    if(st->top == -1){
        printf("Stack is empty\n");
    }
    else{
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

void peek(Stack st, int pos){
    int x =-1;
    if(top-pos+1)
}
