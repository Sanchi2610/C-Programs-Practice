#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode(int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
int main()
{
    struct node *head=newnode(1);
    head->next=newnode(2);
    head->next->next=newnode(3);
    head->next->next->next=newnode(4);
    printf("single Link List:");
    while(head!=NULL)
   {
    printf("%d->",head->data);
    head=head->next;
   }
   printf("NULL");
    return 0;
}