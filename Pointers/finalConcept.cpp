#include <bits/stdc++.h>

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b; 
}

void changeValue(struct Rectangle *r, int changeLength){
    r->length = changeLength;
}

int display(struct Rectangle r){
    std::cout<<r.length*r.breadth<<"\n";
    return 0;
}

int main(){
    struct Rectangle r1;
    initialize(&r1, 10, 5);
    changeValue(&r1, 20);
    display(r1);
}
