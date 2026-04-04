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

struct node *deletation(struct node *first)
{
   struct node *p=first;
   struct node *q=NULL;
   while(p->next!=NULL)
   {
       q=p;
       p=p->next;
   }
   q->next=NULL;
   free(p);
   return first;
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
    third->next=NULL;
    
    travel(first);
    first=deletation(first);
    travel(first);
    return 0;

}
