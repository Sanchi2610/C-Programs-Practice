#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *middle(struct node *head)
{
    struct node *slow=head;
    struct node *fast=head;
   
    while(fast!=NULL && fast->next!=NULL)//fasst 3 la ahe,next step la to NULL jato so out of loop and return slow 
    {
        slow=slow->next;//1 2
        fast=fast->next->next;//1 3 
    }
    return slow;
}

void travel(struct node *ptr)
{
    printf("Single Link List:");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("Null\n");
}

int main() 
{
    struct node *head;
    struct node *second;
    struct node *third;
    
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    travel(head);
    struct node *mid=middle(head);
    printf("%d",mid->data);
    return 0;
}
