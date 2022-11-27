//queue

#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int front;
    int rear;
    int Q[];
};

void create(struct Queue *q, int A[], int len){

q->front=q->rear = -1;
for(int i =0; i<len; i++){
    q->Q[q->rear++] = A[i];
}
}

void display(struct Queue q){
    while(q.front<=q.rear-1){
        cout<<q.Q[q.rear]<<" ";
        q.front++;
    }
}

int main(){
    int A[] = {1,2,3,4,5,6,7};
    int len = 8;
    struct Queue q = (struct Queue*)malloc(len*sizeof(struct Queue));
    create(&q, A[], 8);
    display(q);
}