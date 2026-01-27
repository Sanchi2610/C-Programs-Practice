#include <stdio.h>
int reverse(int *p,int *q,int n);
int main() 
{
    int a[ ]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    int *p=&a[0];
    int *q=&a[n-1];
    reverse(p,q,n);
    for(int i=0;i<n;i++)
    {
     printf(" %d",a[i]);
    }
    return 0;
}
int reverse(int *p,int*q,int n)
{
    while(p<q)
    {
        int temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
}