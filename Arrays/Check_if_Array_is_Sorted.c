// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a[5]={1,2,35,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int sort=1;
    int *p=&a[0];
    while(p<a+n-1)
    {
        if(*p>*(p+1))
        {
            sort=0;
            break;
        }
        p++;
    }
    if(sort)
    printf("Array is sorted");
    else
    printf("Array is not sorted");
    return 0;
}