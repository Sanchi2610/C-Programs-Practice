#include <stdio.h>
int main() 
{
    int a[ ]={1,2,3,1,4,2};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        int *p=&a[i];
        int duplicate=0;
        for(int j=i+1;j<n;j++)
        {
            int *q=&a[j];
            if(*p==*q)
            {
                duplicate++;
            }
        }
        if(duplicate==0)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
