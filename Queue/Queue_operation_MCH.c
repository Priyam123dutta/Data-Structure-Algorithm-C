#include <stdio.h>
#define MAX 10

typedef struct 
{
    int top;
    int array[MAX];
}Queue;

void enQueue(Queue *, int);

int main()
{
    int num;
    scanf("%d", &num);

    Queue *q1;

    q1 -> top = -1;

    enQueue(q1, num);
}

void enQueue(Queue * q, int val)
{
    if(q -> top == MAX - 1)
        printf("OverFlow");
    else
        q -> array[++q -> top] = val;
}
