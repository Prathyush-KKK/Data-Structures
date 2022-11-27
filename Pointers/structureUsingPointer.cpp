#include <bits/stdc++.h>
using namespace std;


struct Rectangle{
int length;
int breadth;
};

int main(){ 
    struct Rectangle r = {1,4};
    struct Rectangle *p = &r;  //takes only two bytes instead of four or whatever bytes the integer is
    printf("%d\n", p->length);
    cout<<p->breadth<<endl;
    (*p).length = 2;         
    p->breadth = 6;
    cout<<p->length<<endl;
    cout<<(*p).breadth<<endl;
}