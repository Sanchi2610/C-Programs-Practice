#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int target=3,*p=&a[0];
    int found=0,i=0;
    while(p<a+n)
    {
        if(target==*p)
        {
            printf("%d is found at index %i",target,i);
            found=1;
            break;
        }
        p++;
        i++;
    }
    if(!found)
    {
        printf("No");
    }
    return 0;
}