#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
int a[5] = {5,4,6,8,9}, i;
string S;
getline(cin, S);
for(i=S.length()-1; i>=0; i--){
    cout<<*(a+i);
}
}