#include <bits/stdc++.h>
using namespace std;
//We import linked list and sorted insert from linked list to perform operations

void Insert(struct Node *H[], int key){
    int index = hash(key);
    SortedInsert(&H[index], key);
}

int hash(int key){
    return key%10;
}

int main(){
    struct Node *HT[10];
    int i;
    struct Node *temp;
    for(i = 0;i<10;i++)
        HT[i] = NULL;
    Insert(HT, 12);
    Insert(HT,22);
    Insert(HT,42);
    temp = Search(HT[hash(key)], key);
    cout<<temp->data;
}