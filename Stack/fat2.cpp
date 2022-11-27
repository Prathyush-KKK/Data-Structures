// Stack using array
// #include <stdio.h>
// #include <stdlib.h>
// struct Stack
// {
//     int size;
//     int top;
//     int *S;
// };
// void create(struct Stack *st)
// {
//     printf("Enter Size");
//     scanf("%d", &st->size);
//     st->top = -1;
//     st->S = (int *)malloc(st->size * sizeof(int));
// }
// void Display(struct Stack st)
// {
//     int i;
//     for (i = st.top; i >= 0; i--)
//         printf("%d ", st.S[i]);
//     printf("\n");
// }
// void push(struct Stack *st, int x)
// {
//     if (st->top == st->size - 1)
//         printf("Stack overflow\n");
//     else
//     {
//         st->top++;
//         st->S[st->top] = x;
//     }
// }
// int pop(struct Stack *st)
// {
//     int x = -1;
//     if (st->top == -1)
//         printf("Stack Underflow\n");
//     else
//     {
//         x = st->S[st->top--];
//     }
//     return x;
// }
// int peek(struct Stack st, int index)
// {
//     int x = -1;
//     if (st.top - index + 1 < 0)
//         printf("Invalid Index \n");
//     x = st.S[st.top - index + 1];
//     return x;
// }
// int isEmpty(struct Stack st)
// {
//     if (st.top == -1)
//         return 1;
//     return 0;
// }
// int isFull(struct Stack st)
// {
//     return st.top == st.size - 1;
// }
// int stackTop(struct Stack st)
// {
//     if (!isEmpty(st))
//         return st.S[st.top];
//     return -1;
// }
// int main()
// {
//     struct Stack st;
//     create(&st);
//     push(&st, 10);
//     push(&st, 20);
//     push(&st, 30);
//     push(&st, 40);
//     printf("%d \n", peek(st, 2));
//     Display(st);
//     return 0;
// }

// Stack using Linked List

// Queue using array
// #include <stdio.h>
// #include <stdlib.h>
// struct Queue
// {
//     int size;
//     int front;
//     int rear;
//     int *Q;
// };
// void create(struct Queue *q, int size)
// {
//     q->size = size;
//     q->front = q->rear = -1;
//     q->Q = (int *)malloc(q->size * sizeof(int));
// }
// void enqueue(struct Queue *q, int x)
// {
//     if (q->rear == q->size - 1)
//         printf("Queue is Full");
//     else
//     {
//         q->rear++;
//         q->Q[q->rear] = x;
//     }
// }
// int dequeue(struct Queue *q)
// {
//     int x = -1;
//     if (q->front == q->rear)
//         printf("Queue is Empty\n");
//     else
//     {
//         q->front++;
//         x = q->Q[q->front];
//     }
//     return x;
// }
// void Display(struct Queue q)
// {
//     int i;
//     for (i = q.front + 1; i <= q.rear; i++)
//         printf("%d ", q.Q[i]);
//     printf("\n");
// }
// int main()
// {
//     struct Queue q;
//     create(&q, 5);
//     enqueue(&q, 10);
//     enqueue(&q, 20);
//     enqueue(&q, 30);
//     Display(q);
//     printf("%d ", dequeue(&q));
//     return 0;
// }


//Queue using Linked List
