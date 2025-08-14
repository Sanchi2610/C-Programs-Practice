#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int cycle(struct node *head)
{
    struct node *slow=head;
    struct node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
        return 1;
        }
    }
    return 0;
}
struct node *newnode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
int main()
{
    struct node *head = newnode(1);
    head->next = newnode(2);
    head->next->next = newnode(3);
    head->next->next->next = head->next;
    if(cycle(head))
    printf("Cycle detect");
    else
    printf("cycle not detect");
    return 0;
}