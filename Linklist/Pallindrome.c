#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *reverse(struct node *first)
{
    struct node *current=first;
    struct node *previous=NULL;
    struct node *next=NULL;
    while(current!=NULL)
     {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
     }
     return previous;
}

struct node *middle(struct node *first)
{
    struct node *slow=first;
    struct node *fast=first;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

void travel(struct node* ptr)
{
    printf("Single Link List:");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

int pallindrome(struct node *first)// 1 2
{
    struct node *mid=middle(first);//2
    struct node *midrev=reverse(mid);// 2 1
    struct node *p=first;// 1 2
    struct node *q=midrev;//2 1
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            return 0;
        }
        p=p->next;
        q=q->next;
    }
    return 1;
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
    
    if(pallindrome(first))
    printf("Pallindrome");
    else
    printf("Non-Pallindrome");
    return 0;
}
