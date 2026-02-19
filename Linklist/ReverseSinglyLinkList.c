#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* reverse(struct node *head)
{
    struct node *current=head;
    struct node *previous=NULL;
    struct node *next=NULL;
    printf("Reverse ");
    while(current!=NULL)
    { 
        next=current->next;//    nt=2    :: nt=3    :: nt=4
        current->next=previous;//1->nt=0 :: 2->nt=1 ::3->nt=2
        previous=current;//      pr=1    :: pr=2    ::pr=3
        current=next;//          cu=2    :: cu=3    ::cu=4
    }
    return previous;//1 :: 2->1(1 already present)  ::3->2->1
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
    head=reverse(head);
    travel(head);
    return 0;
}
