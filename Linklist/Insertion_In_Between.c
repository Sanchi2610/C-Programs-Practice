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
  struct node *ptr=(struct node*)malloc(sizeof(struct node));//new node
  struct node *p=first;//move 
  int i=0;//count
  while(i!=index-1)//0 ala tar out out of loop
  {
      p=p->next;
      i++;
  }
  ptr->data=data;//ptr=7,p=2
  ptr->next=p->next;//(ini. so 0)  ptr->nt=2->nt 3  ptr->nt=2->nt 7
  p->next=ptr;//                   p->nt=7 (7,3)    p->nt=ptr (hold address of ptr) 
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
    
    third->data=3;
    third->next=NULL;
    
    travel(first);
    first=insertionatindex(first,7,2);
    travel(first);
    
    return 0;
}
