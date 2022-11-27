#include <bits/stdc++.h>
using namespace std;


struct Rectangle{
int length;
int breadth;
};

int main(){ 
    struct Rectangle *p;
    cout<<sizeof(*p)<<endl;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));            //malloc returns void pointer so (struct Rectangle *) is needed
    p->length = 10;
    p->breadth = 5;
    cout<<sizeof(p)<<"\n";
    cout<<p->length<<endl;
    printf("%d\n", (*p).breadth);
}