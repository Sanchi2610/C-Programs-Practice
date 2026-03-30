#include <stdio.h>
int main()
{
    int a[ ]={61,82,73,94,50};
    int n=sizeof(a)/sizeof(a[0]);
    int *p=&a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(*(p+j+1) < *(p+j))
            {
                int temp=*(p+j+1);
                *(p+j+1)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}
    
