#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void travel(struct node *ptr)
{
    printf("Single link list:");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

int detect(struct node *first)
{
    struct node *fast=first;
    struct node *slow=first;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
      {
        return 1;
      }
    }
    return 0;
}

int main()
{
    struct node *first; //node declare
    struct node *second;
    struct node *third;
    
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    first->data=1;//linking
    first->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=first->next;
    
    if(detect(first))
    printf("Yes");
    else
    printf("No");
    return 0;
}
