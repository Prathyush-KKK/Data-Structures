#include<bits/stdc++.h>
using namespace std;

int main(){
    string fin;
    cin>>fin;
    int count = 0;
    for(int i = 1; i<fin.length(); i++){
        if(fin[i-1]!=fin[i])
        count++;
    }
    cout<<count;
    }

