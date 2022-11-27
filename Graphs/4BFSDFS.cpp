#include <bits/stdc++.h>
using namespace std;
// we will be using adjacency matrix representation type

int dequeue();
void enqueue(int x);
int isEmpty();


void BFS(int G[][7], int start, int n){            // i is the starting vertex
    int i = start;
    int visited[7] = {0};
    cout<<"Starting BFS from vertex: "<<i<<endl;
    visited[i] = 1;
    enqueue(i);
    while(!isEmpty()){
        i = dequeue();
        for(int j = 1; j<=n; j++){                      //this loop will visit all the adjacent vertices in the array
            if(G[i][j] ==1 && visited[j] ==0){          
                visited[j] = 1;
                cout<<"BFS Visited vertex "<<j<<endl;
                enqueue(j);
            }
            }
        }
    }                                              //using adjacency matrix time complexity is O(N^2) and for adjacency list is O(N)  


//DFS here is a recursive function
void DFS(int G[][7],int start, int n){    //starting vertex
static int visited[7]={0};
    if(visited[start]==0){
        cout<<"DFS Visited vertex "<<start<<endl;
        visited[start]=1;
        for(int j=1;j<=n;j++){          //scan through all adjacent vertices of u.
            if(G[start][j]==1&&visited[j]==0){
                DFS(G,j,n);
            }
        }
    }
}



int main(){
    int G[7][7]={{0,0,0,0,0,0,0},       //an adjacency matrix not counting index 0
                {0,0,1,1,0,0,0},
                {0,1,0,0,1,0,0},
                {0,1,0,0,1,0,0},
                {0,0,1,1,0,1,1},
                {0,0,0,0,1,0,0},
                {0,0,0,0,1,0,0}};
    BFS(G,2,7);
    cout<<"starting DFS from vertex: 2"<<endl;
    DFS(G,2,7);
    return 0;
}


//using Linked List Queue: 
struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;
void enqueue(int x)
{
    struct Node *t;
    t = new Node();
    if (t == NULL)
        printf("Queue is FUll\n");
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int dequeue()
{
    int x = -1;
    struct Node *t;
    if (front == NULL)
        printf("Queue is Empty\n");
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    return front == NULL;
}