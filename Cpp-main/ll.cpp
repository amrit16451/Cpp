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

int main()
{
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sixthh = (struct Node *)malloc(sizeof(struct Node));
    struct Node *seventh = (struct Node *)malloc(sizeof(struct Node));
    struct Node *eighth = (struct Node *)malloc(sizeof(struct Node));

    // Allocate memory for nodes in the linked list in the heap
    // head = (struct Node *)malloc(sizeof(struct Node));
    // second = (struct Node *)malloc(sizeof(struct Node));
    // third = (struct Node *)malloc(sizeof(struct Node));
    // fourth = (struct Node *)malloc(sizeof(struct Node));
    // fifth = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second node
    first->data = 7;
    first->next = second;
    // Link second and third node
    second->data = 11;
    second->next = fourth;
    
    third->data = 66;
    third->next = eighth;

    fourth->data = 900;
    fourth->next = third;

    fifth->data = 101;
    fifth->next = seventh; 

    sixthh->data = 9;
    sixthh->next = first;
    // Link third and fourth node
    // Terminate the list at the fourth node
    seventh->data = 6;
    seventh->next = NULL;



    eighth->data = 90;
    eighth->next = fifth;


    linkedlistTraversal(sixthh);
    return 0;
}