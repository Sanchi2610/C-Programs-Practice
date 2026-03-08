#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int sorted=1;
    int *p=&a[0];
    int  n=sizeof(a)/sizeof(a[0]);
    while(p<a+n-1)
    {
        if(*p > *(p+1))
        {
            sorted=0;
            
        }
      p++;
    }
    if(sorted)
    printf("yes");
    else
    printf("No");
    return 0;
}
