// Static Linked List Creation

#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node * next;
}Node;

int main()
{
    Node * head = NULL;

    Node a,b,c;
    a.data = 10;
    a.next = NULL;

    b.data = 20;
    b.next = NULL;

    c.data = 30;
    c.next = NULL;

    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printf("%d\t", (*head).data);
    printf("%d\t", head -> data);
    printf("%d\t", (*((*head).next)).data);
    printf("%d\t", head -> next -> data);
    printf("%d\t", (*((*((*head).next)).next)).data);
    printf("%d\t", head -> next -> next -> data);
    
    return 0;
}
