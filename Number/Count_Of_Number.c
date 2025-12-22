#include <stdio.h>

int main()
{
    int num=12,count=0;
    if(num==0)
    {
        count=1;
    }
    else
    {
        while(num!=0)
        {
        num/10;
        count++;
        }
    }
    printf("%d",count);
    return 0;
}
