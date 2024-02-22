# include<stdio.h>
# include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;


Node* insertNode(Node*, int);
void insertNodeDeRef(Node**, int);
void display(Node*);

int main()
{
    Node * head = NULL;
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);
    insertNodeDeRef(&head, 40);
    insertNodeDeRef(&head, 50);
    insertNodeDeRef(&head, 60);
    display(head);
    return 0;
}

 Node* insertNode(Node* head, int data)
{
    Node * newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode -> next = head;
    head = newNode;
    return head;
}

void insertNodeDeRef(Node** head, int data)
{
    Node * newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode -> next = *head;
    *head = newNode;
}
void display(Node* head)
{
    while(NULL != head)
    {
    printf("| %d |", head -> data);
    head = head -> next;
    }
}
