#include <stdio.h>
int main()
{
    int a[5]={5,6,77,9,89};
    int n=sizeof(a)/sizeof(a[0]);
    int sorted=1;
    int *p=&a[0];
    for(int i=0;i<n-1;i++)
    {
        if(*p>*(p+1))
        {
            sorted=0;
            break;
        }
        p++;
    }
    if(sorted)
    printf("Array is sorted");
    else
    printf("Array is not sorted");
    return 0;
}
