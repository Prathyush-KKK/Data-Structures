#include <bits/stdc++.h>
using namespace std;

struct Stack{
    int size;
    int top; 
    int *S;
};

void create(struct Stack *s1){
    cout<<"Enter the number of elements: ";
    cin>> s1->size;
    s1->top = -1;
    s1->S = new int[s1->size];
}

void Display(struct Stack s1){
    int i;
    for(i = s1.top; i>=0; i--){
        cout<<s1.S[i]<<"\n";
    }
}

void push(struct Stack *s1, int x){
    if (s1->top == s1->size-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        s1->top++;
        s1->S[s1->top] = x;
    }
}

int pop(struct Stack *s1){
    int x = -1;
    if(s1->top==-1){
        cout<<"Stack is underflow"<<endl;
    }
    else{
        x = s1->S[s1->top--];
    }
    return x;
}


int main(){
    struct Stack st;
    create(&st);
    int i1 = 5;
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st, 40);
    push(&st, 50);
    Display(st);
     cout<<pop(&st);
 cout<<pop(&st);
    cout<<pop(&st);
 
    return 0;
}
