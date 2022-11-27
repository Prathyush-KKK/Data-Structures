#include <bits/stdc++.h>
using namespace std;

void swapper(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void selectionSort(int A[], int n){
    int i,j,k;
    for(i = 0; i<n-1; i++){
        for(j=k=i; j<n; j++){
            if(A[j]<A[k]){
                k = j;
            }
            swapper(&A[i], &A[k]);
        }
    }
}

int main(){
    int A[] = {11,13,7,2,6,9,4,5,10,3};
    int n = sizeof(A)/sizeof(A[0]);
    selectionSort(A, n);

    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }
}