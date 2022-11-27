#include <bits/stdc++.h>
using namespace std;


void Insert(int A[], int n)
{
    int temp, i = n;  //n being size of array
    temp = A[n];
    while (i > 1 && temp > A[i / 2])  //takes floor value
    {
        A[i] = A[i / 2];
        i = i / 2;
    }
    A[i] = temp;
}


void createHeap(int A[], int n)
{
    for (int i = 2; i <= n; i++)
    {
        Insert(A, i);
    }
}

int Delete(int A[], int n){
    int x, i, j;
    int val = A[1];             //just to print the first element (deleted element)
    x = A[n];                   //last element
    A[1] = A[n];               //replace root with last element
    i = 1; j = 2 * i;         //j is pointing to first child of i
    while (j<n-1){
        if(A[j+1]>A[j])      //comparing the two children of the root
            j = j + 1;
        if(A[i]<A[j]){
            swap(A[i], A[j]);
            i = j;
            j = 2 * j;      //going to next root level
        }
        else
        break;
    }
    A[n] = x;
    return val;
}


int main(){
    int H[] = {0, 10, 20, 30, 25, 5, 40, 35};
    // int H[] = {0,2,5,8,9,4,10,7};


    int A[8];               // just to copy array H to A for cout
    copy(H,H+8,A);


    createHeap(H, 7);
    for(int i = 7; i > 0; i--){
        cout << Delete(A, i) << " ";
    }
        cout<<endl;
    for(int i = 1; i<8; i++){
        cout<<H[i]<<" ";
    }

    return 0;
} 