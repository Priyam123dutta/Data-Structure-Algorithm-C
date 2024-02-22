#include <stdio.h>
#include <stdlib.h>

// Declearing Structure of Node

typedef  struct Node {
    int data;
    struct Node *next;
}Node;

// Declearing Global Head & Tail

Node *head = NULL;
Node *tail = NULL;

int countNode = 0;

// Declering Function Prototypes

void insertAtFirst(int);
void insertAtLast(int);
void insertAtPosition(int, int);

void deleteAtFirst();
void deleteAtLast();
void deleteAtPosition(int);

void deleteList();

void displayList();

//Declearing the main function

int main()
{
    insertAtFirst(1);
    insertAtFirst(2);

    displayList();
    return 0;
}

// Declearing a function to create a Node

Node *createNode(int data)
{
    Node *newNode = malloc(sizeof(Node));

    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

// Declearing the function prototype

void insertAtFirst(int data)
{
    if (!head)
    {
        Node *newNode = createNode(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = createNode(data);
        newNode -> next = head;
        head = newNode;
    }
    countNode++;
}

void insertAtLast(int data)
{
    if (!head)
    {
        Node *newNode = createNode(data);
        head = newNode;
        tail = newNode; 
    }
    else
    {
        Node *newNode = createNode(data);
        tail -> next = newNode;
        tail = tail -> next;
    }
    countNode++;
}

void insertAtPosition(int data, int position)
{
    if (0 > position || countNode - 1 < position)
    {
        printf("Not found position!");
        return;
    }
    else if (position == 0)
    {
        insertAtFirst(data);
    }
    else if (position == countNode - 1)
    {
        insertAtLast(data);
    }
    else
    {
        Node *newNode = createNode(data);
        Node *temp = head;
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp -> next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
        countNode++;
    }
}

void deleteAtFirst()
{
    if (!head)
    {
        printf("Deletion not possible!");
        return;
    }
    else if (head == tail)
    {
        free(head);
        head = NULL;
        tail = NULL;
        countNode--;
    }
    else
    {
        Node *temp = head;
        head = head -> next;
        temp -> next = NULL;
        free(temp);
        countNode--;
    }
}

void deleteAtLast()
{
    if (!head)
    {
        printf("Deletion not possible!");
        return;
    }
    else if (head == tail)
    {
        free(head);
        head = NULL;
        tail = NULL;
        countNode--;
    }
    else
    {
        Node *temp = head;
        while(temp -> next != tail)
        {
            temp = temp -> next;
        } 
        tail = temp;
        temp = temp -> next;
        tail -> next = NULL;
        free(temp);
        countNode--;
    }
}

void deleteAtPosition(int position)
{

}

void displayList()
{
    Node * temp = head;
    while(NULL != temp)
    {
    printf("| %d |", temp -> data);
    temp = temp -> next;
    }
}
