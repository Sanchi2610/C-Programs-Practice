#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// int cycle(struct node * head)
// {
//     struct node *slow=head;
//     struct node *fast=head;
//     // while(fast->next!=NULL && fast->next->next!=NULL)
//     // {
//     //     slow=slow->next;
//     //     fast=fast->next->next;
//     // }

//     int mid = slow->data;
//     return mid;
// }
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
    head->next->next->next = newnode(4);
    struct node *slow=head;
    struct node *fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("Middle of Link List : %d", slow->data);
    return 0;
}