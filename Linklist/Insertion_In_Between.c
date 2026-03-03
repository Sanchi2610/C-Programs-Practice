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

struct node *insertionatindex(struct node *first,int data,int index)
{
  struct node *ptr=(struct node*)malloc(sizeof(struct node));
  struct node *p=first;//move 
  int i=0;
  while(i!=index-1)//count
  {
      p=p->next;
      i++;
  }
  ptr->data=data;
  ptr->next=p->next;
  p->next=ptr;
  return first;
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
    
    third->data=4;
    third->next=NULL;
    
    travel(first);
    first=insertionatindex(first,35,2);
    travel(first);
    
    return 0;
}
