// Insert at Beginning using local Head

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void insertAtBeginning(Node **head, int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = *head;
    *head = newNode;
}

void display(Node **head)
{
    Node *temp = *head;
    while(temp)
    {
        printf("| %d |", temp -> data);
        temp = temp -> next;
    }
}

int main()
{
    Node *head = NULL;
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 40);
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);
    display(&head);
    return 0;
}
