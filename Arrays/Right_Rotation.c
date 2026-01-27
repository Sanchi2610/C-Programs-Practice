#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int r=1;
    for(int k=0;k<r;k++)
    {
        int temp=a[n-1];
        for(int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}