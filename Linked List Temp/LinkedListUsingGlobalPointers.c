// Linked list using Global Head & Global Tail

#include <stdio.h>
#include <stdlib.h>

// Creating a structure Node

typedef struct Node
{
    int data;
    struct Node* next;   
}Node;

// Creating Global head & tail

Node* head = NULL;
Node* tail = NULL;

// Node counter

int countNode = 0;

// Declearing function prototype

void insertAtFirst(int);
void insertAtLast(int);
void insertAtPosition(int, int);
void deleteAtFirst();
void deleteAtLast();
void deleteAtPosition();
void deleteList();
void display();

// implementing main function

int main()
{
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);
    display();
    printf("\n%d", tail -> data);
}

// function for creating Node

Node* getNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    if (!newNode)
        exit(1);
    if (!countNode)
        head = newNode;
        tail = newNode;
    

    return newNode;
}

// inserting element at first

void insertAtFirst(int data)
{
    Node *newNode = getNode(data);
    if (!head && !tail)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode -> next = head;
        head = newNode;
    }
    countNode++;
}

// inserting element at last

void insertAtLast(int data)
{
    Node *newNode = getNode(data);
    if (!head && !tail)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail -> next = newNode;
        tail = tail -> next;
    }
    countNode++;
}

// inserting element at any position

void insertAtPosition(int position, int data)
{
    Node *newNode = getNode(data);
    if (position < 0 || position > countNode)
        exit(2);
    else if (position == 0)
        insertAtFirst(data);
    else if (position == countNode)
        insertAtLast(data);
    else
    {
        
    }
}

// deleting element at first

void deleteAtFirst()
{
    
}    
void display()
{
    Node * temp = head;
    while(NULL != temp)
    {
    printf("| %d |", temp -> data);
    temp = temp -> next;
    }
}
