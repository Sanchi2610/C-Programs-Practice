#include <stdio.h>
int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int count=0;
    while(a!=0)
    {
        a=a&(a-1);//remove LSB
        count++;
    }
    printf("Count:%d",count);
    return 0;
}
