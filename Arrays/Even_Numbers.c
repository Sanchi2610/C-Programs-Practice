#include <stdio.h>
int main() 
{
 printf("Even numbers: ");
 for(int i=1;i<=50;i++)
   {
     if(i%2==0)
     {
       printf("%d ",i);
     }
   }
   return 0;
}