#include <stdio.h>
int main() 
{
    int a[5]={1,2,3,4,5};
    int b[5]={11,12,13,14,15};
    int n1=5;
    int n2=5;
    int *p=&a[1];
    int *q=&b[1];
    for(int i=0;i<n2;i++)
    {
       int temp=*p;//2
       *p=*q;
       *q=temp;
    }
    for(int i=0;i<n1;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
    for(int i=0;i<n2;i++)
    {
        printf(" %d",b[i]);
    }
    return 0;
}
