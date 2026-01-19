#include <stdio.h>
#include <string.h>
int main() 
{
   char s1[10]="san";
   char s2[10]="chi";
   int i=0,j=0;
   while(s1[i]!='\0')
   {
       i++;
   }
   while(s2[j]!='\0')
   {
       s1[i]=s2[j];
       i++;
       j++;
   }
   s1[i]='\0';
   printf("%s",s1);
   return 0;
}