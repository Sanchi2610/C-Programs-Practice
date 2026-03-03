#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

void travel(struct node *ptr)
{
    printf("Single Link List:");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

struct node *insertion(struct node *first,int data)
{
   struct node *ptr=(struct node*)malloc(sizeof(struct node));//node space by using ptr
   ptr->data=data;//
   ptr->next=first;//
   return ptr;//
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
    
    travel(first);
    first=insertion(first,4);
    travel(first);
    
    return 0;
}
