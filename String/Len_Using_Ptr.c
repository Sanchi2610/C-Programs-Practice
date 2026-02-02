#include <stdio.h>
int main() 
{
   char str[10]="sanchi";
   char *p=str;
   int len=0;
   while(*p!='\0')
   {
       p++;
       len++;
   }
   printf("%d",len);
    return 0;
}