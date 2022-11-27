#include <bits/stdc++.h>
using namespace std;


void BubbleSort(int A[], int n){
    for(int i = 0; i<n-1; i++){
        int flag  = 0;
        for(int j = 0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                swap(A[j], A[j+1]);
                flag = 1;               //to check if given list is sorted or not
            }
        }
        if(flag ==0) break;
    }
}

// void swap(int *x, int *y){
//     int temp = *x;
//     *x = *y;                         if want to solve using this instead of c++ library functions, need to declare swap as (&A[j], A[j+1]) 
//     *y = temp;
// }

int main(){
    int A[] = {3,7,9,10,6,5,12,4,11,2}, n = 10;
    BubbleSort(A,n);
    int B[] = {3, 4, 7, 9};
    BubbleSort(B, 4);  //encounters break point

    for(int i = 0; i<10; i++){
        cout<<A[i]<<" ";
        
    }
    return 0;
}