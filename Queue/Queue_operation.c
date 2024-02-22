#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node *front;
Node *rare;

Node *getNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

void enQueue(int data)
{
    Node *newNode = getNode(data);
    if(!front && !rare)
        front = rare = newNode;
    else
    {
        rare -> next = newNode;
        rare = rare -> next;
    }
}

int deQueue()
{
    int value = NULL;
    if(!front && !rare)
        exit(1);
    else if(front == rare)
    {
        value = front -> data;
        free(front);
        front = rare = NULL;
    }
    else
    {
        value = front -> data;
        Node *temp = front;
        front = front -> next;
        temp -> next = NULL;
        free(temp);
    }
    return value;
}

int main()
{
    // here come a menu driven function, can be modified by own
    return 0;
}