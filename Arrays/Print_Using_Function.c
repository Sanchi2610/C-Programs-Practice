#include<stdio.h>
int print(int *p,int n);
int main()
{
    int a[ ]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    print(a,n);
    return 0;
}
int print(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}