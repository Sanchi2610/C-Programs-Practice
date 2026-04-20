#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void travel(struct node *ptr)
{
    // printf("Single link list:");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

void duplicate(struct node *first)
{
    struct node *current=first;//1
    while(current!=NULL)
    {
        struct node *previous=current;//1
        struct node *temp=current->next;//2
        while(temp!=NULL)
        {
            if(current->data==temp->data)   // 1 2 1 3
            {                              //  c
                previous->next=temp->next;//   p    Unlink=3
                free(temp);               //memory free
                temp=previous->next;
            }                            //      t
            else                        ///      p  
            {                          ///          t
               previous= temp;
               temp=temp->next;
            }
        }
      current=current->next;
    }
}

int main()
{
    struct node *first; //node declare
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    
    first->data=1;//linking
    first->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=1;
    third->next=fourth;
    
    fourth->data=3;
    fourth->next=NULL;
    
    printf("Before duplicate:");
    travel(first);
    
    duplicate(first);
    printf("After duplication:");
    travel(first);
    return 0;

}
