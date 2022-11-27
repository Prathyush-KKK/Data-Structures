#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int regno;
    int age;
    struct Node *next;
    string name;
} *top = NULL;

void push(string z, int x, int y)
{
    Node *t = new Node; 
    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->age = x;
        t->regno = y;
        t->name = z;
        t->next = top;
        top = t;
    }
}

void pop()
{
    struct Node *t;
    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        t = top;
        top = top->next;
        cout << t->name << " " << t->age << " " << t->regno << endl;
        free(t);
    }
}

void Display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        cout<<p->name<<" "<<p->age<<" "<<p->regno<<endl;
        p = p->next;
    }
    printf("\n");
}

int main()
{
    push("Prathyush", 19, 210934);
    push("Jay", 29, 3213434);
    push("Dan", 11, 346223);
    Display();
    pop();
    return 0;
}