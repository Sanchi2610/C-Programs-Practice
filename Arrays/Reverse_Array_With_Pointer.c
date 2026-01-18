#include <stdio.h>
int main()
{
   int a[ ]={11,12,13,14,-1};
   int *left=a; 
   int *right=a+3;
   int i=0;
   while(i!=-1)
   {
   while(left<right) 
   {
       int temp=*left;//temp=11 
       *left=*right;//14 
       *right=temp;//11 
       left++;
       right--; 
       
   }
   i++;
   }
   for(int i=0;i<4;i++)
   {
       printf("[%d] %d\n",i,a[i]);
   } 
   return 0;  
}