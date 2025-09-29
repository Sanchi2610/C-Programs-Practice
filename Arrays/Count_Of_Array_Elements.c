#include<stdio.h>
int main()
{
int a[7]={1,2,3,4,5,-1};
int count=0;
while(a[count]!=-1)
{
    count++;
}
printf("%d",count);
return 0;
}