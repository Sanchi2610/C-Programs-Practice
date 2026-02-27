#include <stdio.h>
int main()
{
    int a[4]={11,4,27,56};
    int n=sizeof(a)/sizeof(a[0]);
    int sorted=1;
    int *p=&a[0];
    if(*p>*(p+1))//1>4
        {
          sorted=0;
        }
        p++;
    if(sorted)
    printf("Sorted");
    else
    printf("Not sorted");
    return 0;
}
