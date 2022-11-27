#include <bits/stdc++.h>
using namespace std;





int main(){
    int A[] = {50,70,60,90,40,80,10,20,30};
    int j=8; 
    int n = 0;
    for(int i = 1; i<9/2; i++){
        if(A[i]>A[n] && A[j]<A[n]){
            int temp = A[j];
            A[j] = A[i];
            A[i] = temp;
        }
     j--;
    }

    for(int i = 0; i<9; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}