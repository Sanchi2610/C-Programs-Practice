#include <stdio.h>
int main() 
{
    int a[7]={7,2,9,1,5,4,8};
    int n=sizeof(a)/sizeof(a[0]);
    int b=n/2;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b-1;j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=b;i<n;i++)
    {
        for(int j=b;j<n-1;j++)
        {
            if(a[j+1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
