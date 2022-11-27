#include <bits/stdc++.h>
using namespace std;

void MergeSeperate(int A[], int B[], int m, int n){
    int i, j, k;
    i=j=k=0;
    int *C = (int *)malloc(m+n*sizeof(int));
    while(i<m && j<n){
    if(A[i]<B[j])
        C[k++] = A[i++];
    else    
        C[k++]=B[j++];
    }

    for(;i<m;i++){
        C[k++]=A[i];
    }

    for(;j<n;j++){
        C[k++]=B[j];
    }
}


void MergeSingular(int A[], int B[], int low, int mid, int high){
    int i, j, k;
    i=low; j = mid; k = high;
    int *C = (int *)malloc(sizeof(A)/sizeof(int));
    while(i<=mid && j<=high){
    if(A[i]<A[j])
        C[k++] = A[i++];
    else    
        C[k++]=A[j++];
    }

    for(;i<=mid;i++){
        C[k++]=A[i];
    }

    for(;j<h;j++){
        C[k++]=A[j];
    }

    for( i =low ; i<=high; i++){
        A[i] = C[i];
    }
}


int main(){
    

    return 0;
}