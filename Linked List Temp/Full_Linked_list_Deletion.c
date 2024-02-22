// Deleting the Linked List  

# include<stdio.h>
# include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node * head = NULL;

void insertNode(int);
void deleteList();
void display();

int main()
{
    insertNode(10);
    insertNode(20);
    insertNode(30);
    insertNode(40);
    insertNode(50);
    insertNode(60);
    insertNode(70);
    insertNode(80);
    printf("The List is:\n");
    display();
    deleteList();
    display();
    printf("\nLinked List has been deleted.");
    return 0;
}

void insertNode(int data)
{
    Node * newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode -> next = head;
    head = newNode;
}

void deleteList()
{
    while(head != NULL)
    {
        Node* temp = head;
        head = head -> next;
        free(temp);
    }
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
