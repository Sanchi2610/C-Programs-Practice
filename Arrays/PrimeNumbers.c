#include <stdio.h>
int main()
{
 int i,j;
 printf("Prime numbers: ");
 for(i=2;i<=50;i++)
 {
     for(j=2;j<i;j++)
     {
         if(i%j==0)
         {
             break;
         }
     }
        if(j==i)
        printf("%d ",i);
   }
   return 0;
}
