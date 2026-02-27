#include <stdio.h>
int main() 
{
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int target=3;
    int *p=&a[0];
    int present=0,index=0,i=0;
    while(p<a+n)
    {
        if(*p==target)
        {
            present=1;
            break;
        }
        p++;
        index++;
    }
    if(present)
    printf("%d is present at %d index",target,index);
    else
    printf("No");
    return 0;
}
