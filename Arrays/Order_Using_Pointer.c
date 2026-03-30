#include <stdio.h>
int main() 
{
    int a[ ]={11,23,51,72,83,94};
    int n=sizeof(a)/sizeof(a[0]);
    int *p=&a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(*(p) > *(p+1))
            {
                int temp=*p;
               *p=*(p+1);
               *(p+1)=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
