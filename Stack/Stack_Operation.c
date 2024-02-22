#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node *top = NULL;

int push(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode -> data = data;
    
}