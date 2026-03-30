#include <stdio.h>
int main() 
{
    int a[ ]={1,3,1,5,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    int *p=&a[0];
    for(int i=0;i<n;i++)
    {
        int dup=0;
        for(int j=0;j<n;j++)
        {
            if(*(p+i)==*(p+j))
            {
                dup++;
            }
        }
        if(dup==1)
        {
            printf(" %d",a[i]);
        }
    }
    return 0;
}
