#include <bits/stdc++.h>
using namespace std;

void insertionSort(int A[], int n){
    int j,x;
    for(int i = 1; i<n; i++){
        j = i-1;
        x = A[i];                      //saves the pivot element
        while (j>-1&A[j]>x)
        {
            A[j+1] = A[j];          //Transfers elements from left to one position right
            j--;
        }
        A[j+1] = x;
    }   
}


int main(){
    int A[] = {3,7,9,10,6,5,12,4,11,2}, n = 10;
    insertionSort(A, n);
    for(int i = 0; i < 10 ; i++){
        cout<<A[i]<<" ";
    }
}