#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int n){
    q->size = n;
    q->front=q->rear=0;
    q->Q = new int[n];
}



void enqueue(struct Queue *q, int x){
    if((q->rear+1)%q->size == q->front)
        cout<<"Queue is full"<<endl;
    else{
        q->rear = (q->rear+1)%q->size;
        q->rear = x;
    }
}

int dequeue(struct Queue *q){
    int x = -1;
    if(q->front == q->rear)
        cout<<"Queue is empty";
    else{
        q->front=(q->front+1)%q->size;
        x = q->front;
    }
    return x;
}

void display(struct Queue q){
    int i = q.front +1;

    do{
        cout<<q.Q[i];
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    printf("\n");
}


int main(){
    struct Queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
        enqueue(&q, 10);
    enqueue(&q, 10);

    enqueue(&q, 10);

    display(q);

    cout<<"\n"<<dequeue(&q);

}