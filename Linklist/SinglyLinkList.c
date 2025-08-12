#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void linkilisttravel(struct node *ptr)
{
    printf("Single link list: ");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head; //node declare
    struct node *second;
    struct node *third;
    head=(struct node*)malloc(sizeof(struct node));//memory allocation in heap
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=7;//linking
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=66;
    third->next=NULL;
    linkilisttravel(head);
    return 0;

}
