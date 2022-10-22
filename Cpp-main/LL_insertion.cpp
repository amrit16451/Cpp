#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        // printf("Element: %d\n", ptr->data);
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node * insertAtHead(struct Node * head,int data){

    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct Node * insertinBet(struct Node * head,int data,int index){

    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head;
    int i=0;
    while (i!= index-1)
    {
        p=p->next;
        i++;
    }
    
    p->next=ptr;
    ptr->next=p->next;
    return head;
}

struct Node * insertatEnd(struct Node * head,int data){

    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node * insertAfternode(struct Node * head,struct Node * prevNode,int data){

    struct Node*ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    //struct Node*p=head;
    //while (p->next!=prevNode)
    //{
    //    p=p->next;
    //}
    
    return head;
}


int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *seventh = (struct Node *)malloc(sizeof(struct Node));
    struct Node *eighth = (struct Node *)malloc(sizeof(struct Node));

    // Allocate memory for nodes in the linked list in the heap
    // head = (struct Node *)malloc(sizeof(struct Node));
    // second = (struct Node *)malloc(sizeof(struct Node));
    // third = (struct Node *)malloc(sizeof(struct Node));
    // fourth = (struct Node *)malloc(sizeof(struct Node));
    // fifth = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second node
    head->data = 9;
    head->next = first;

    first->data = 7;
    first->next = second;
    // Link second and third node
    second->data = 11;
    second->next = fourth;

    fourth->data = 900;
    fourth->next = third;
    
    third->data = 66;
    third->next = eighth;

    eighth->data = 90;
    eighth->next = fifth;

    fifth->data = 101;
    fifth->next = seventh; 

    seventh->data = 6;
    seventh->next = NULL;

    // Link third and fourth node
    // Terminate the list at the fourth node





    //linkedlistTraversal(sixthh);

    //head=insertAtHead(head,56);
    ////linkedlistTraversal(first);
//
    //head=insertinBet(head,88,2);
    ////linkedlistTraversal(head);
//
    //head=insertatEnd(head,67);
    ////linkedlistTraversal(head);

    head=insertAfternode(head,fifth,908);
    linkedlistTraversal(head);

    return 0;
}