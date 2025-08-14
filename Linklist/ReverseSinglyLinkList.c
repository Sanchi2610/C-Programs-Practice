
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* reverseLinkedList(struct node* head)
{
    struct node *current = head;
    struct node *previous = NULL;
    struct node *next = NULL;
    printf("Reverse ");
    while (current != NULL) 
    {
        next = current->next;   // save next
        current->next = previous; // reverse link
        previous = current;     // advance previous
        current = next;         // advance current
    }
    return previous; // new head
}

void travelLinkedList(struct node *ptr)
{
    printf("Single Link List:");
    while (ptr != NULL)
     {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(void) {
    struct node *head  = (struct node*)malloc(sizeof(struct node));
    struct node *second= (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head->data = 7;     head->next = second;
    second->data = 17;  second->next = third;
    third->data = 77;   third->next = NULL;

    travelLinkedList(head); // 7->17->77->NULL
    head = reverseLinkedList(head);
    travelLinkedList(head); // 77->17->7->NULL
    return 0;
}