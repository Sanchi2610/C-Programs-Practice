#include<stdio.h>
#include<stdlib.h>

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

int search(struct node *ptr,int value)
{
    int pos=0;
    while(ptr!=NULL)
    {
        if(ptr->data==value)
        {
            return pos;
        }
        ptr=ptr->next;
        pos++;
    }
    return -1;
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
    int value=2;
    int pos=search(first,value);
    if(pos!=-1)
    printf("%d is present at %d position",value,pos);
    else
    printf("Ab");
    return 0;

}
