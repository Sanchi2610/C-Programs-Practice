#include <stdio.h>
int main()
{
    int a[ ]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *p=&a[0];
    int sorted=1;
    for(int i=0;i<n-1;i++)
    {
        if (*(p) > *(p+1))
        {
            sorted=0;
            break;
        }
        p++;
    }
    if(sorted)
    printf("Yes");
    else
    printf("No");
    return 0;
}
    
