#include <stdio.h>
int main() 
{
    int a[ ]={1,2,3,4,5,-1};
    int *p=&a[0];
    int count=0;
    while(*p!=-1)
    {
        p++;
        count++;
    }
    printf("%d",count);
    return 0;
}