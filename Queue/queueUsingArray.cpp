#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int Rear;
    int *Q;
};

void enqueue(Queue *q, int x){
    if(q->Rear == q->size-1){
        cout<<"Queue is Full"<<endl;
    }
    else{
        q->Rear++;
        q->Q[q->Rear] = x;      //constant time
    }
}


int dequeue(Queue *q){
    int x = -1;
    if(q->front==q->Rear){
        cout<<"The Queue is empty\n";
    }
    else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q){
    for(int i=q.front+1; i<=q.Rear; i++){
    cout<<q.Q[i]<<" ";}
    cout<<endl;
}

void create(struct Queue *q, int x){
    cout<<"Ente ra size: ";
    cin>>x;
    q->Q = (int*)malloc(x*sizeof(struct Queue));
    q->front=q->Rear=-1;
}


int main(){
    struct Queue q;
    create(&q, 5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    Display(q);
    cout<<dequeue(&q)<<endl;
 Display(q);
}

