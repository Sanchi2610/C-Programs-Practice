#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *reverse(struct node *head)
{
    struct node *current = head;
    struct node *previous = NULL;
    while (current != NULL)
    {
        struct node *temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    return previous;
}
struct node *newnode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
struct node printList(struct node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL");
    printf("\n");
};
int main()
{
    struct node *head = newnode(1);
    head->next = newnode(2);
    head->next->next = newnode(3);
    head->next->next->next = newnode(4);
    printf("Forward Link List:");
    printList(head);
    struct node *rev = reverse(head);
    printf("Reverse Link List:");
    printList(rev);
    return 0;
}