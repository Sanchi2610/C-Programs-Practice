#include <stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int target=7,*p=&a[0];
    int found=0;
    while(p<a+n)
    {
        if(target==*p)
        {
            printf("Yes");
            found=1;
            break;
        }
        p++;
    }
    if(!found)
    {
        printf("No");
    }
    return 0;
}