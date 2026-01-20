#include <stdio.h>
int main()
{
   int max,val;
   printf("Enter num:");
   if(scanf("%d",&max)!=1)
   {
       printf("Invalid");
       return 0;
   }
    while(scanf("%d",&val)==1)
    {
        if(val>max)
        max=val;
    }
    printf("Max:%d",max);
    return 0;
}