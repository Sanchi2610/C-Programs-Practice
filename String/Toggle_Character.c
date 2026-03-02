#include <stdio.h>
#include <string.h> 
void toggle(char[]);
int main() 
{
   char str[10]="sanchi";
   toggle(str);
   printf("%s",str);
   return 0;
}
void toggle(char str[])
{
   for(int i=0;str[i]!='\0';i++)
 {
   if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
    {
       if(str[i]>='a' && str[i]<'z')
       {
           str[i]=str[i]-32;
       }
       else if(str[i]>='A' && str[i]<'Z')
       {
           str[i]=str[i]+32;
       }
     }
  }
}
