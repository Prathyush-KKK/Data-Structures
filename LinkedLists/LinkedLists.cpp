#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
struct Node *next;   //self referential pointer
}*first=NULL;


void create(int A[], int n){
    int i;
    struct Node *temp, *last;
    first = new Node;
    first->data = A[0];
    first ->next = NULL;
    last = first;

    for(i = 1; i<n; i++){
        temp = new Node;   
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
    }
}


void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}


int main(){
int A[] = {3, 5, 7, 10, 15};
create(A, 5);
display(first);
return 0;
}