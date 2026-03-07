#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;//struct node 
};

void travel(struct node *ptr)
{
    printf("Single Link List:");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");//travel pointer initalization
}

struct node *delete(struct node *first)
{
    struct node *p=first;
    first=first->next;
    free(p);
    return first;
}

int main() 
{
    struct node *first;//node declaration
    struct node *second;
    struct node *third;
    
    first=(struct node*)malloc(sizeof(struct node));//memory allocation from heap
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    first->data=1;
    first->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;//data allocation

    travel(first);
  
    //function call by keeping ptr at first 
    first=delete(first);
    printf("After deletion ");
    //first bz head is imp,function 
    travel(first);
   
    return 0;
}
