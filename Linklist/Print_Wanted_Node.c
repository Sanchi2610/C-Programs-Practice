#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

void travel(struct node *ptr,struct node *second)
{
    printf("Single Link List:");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    printf("Second Element:%d",second->data);
}

int main() 
{
    struct node *first;
    struct node *second;
    struct node *third;
    
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    first->data=1;
    first->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;

    travel(first,second);
    return 0;
}
