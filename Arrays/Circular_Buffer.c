#include <stdio.h>
#define SIZE 5
int buffer[SIZE];
int count=0;
int head=0;
int tail=0;
void push(int data)
{
    if(count==SIZE)
    {
        printf("Buffer is full");
        return ;
    }
    buffer[tail]=data;
    tail=(tail+1)%SIZE;
    count++;
}

void pop()
{
    if(count==0)
    {
        printf("Buffer is empty\n");
        return ;
    }
    head=(head+1)%SIZE;
    count--;
}

void display()
{
    int i=head;
    for(int c=0;c<count;c++)
    {
        printf(" %d",buffer[i]);
        i=(i+1)%SIZE;
    }
    printf("\n");
}

int main() 
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    push(50);
    display();
    return 0;
}
