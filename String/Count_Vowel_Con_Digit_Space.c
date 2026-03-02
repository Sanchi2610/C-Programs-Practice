#include <stdio.h>
#include <string.h>
int main() 
{
   char str[10]="san chi1";
   int v=0,space=0,digit=0,c=0;
   int len=strlen(str);
   for(int i=0;str[i]!='\0';i++)
   {
       if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
       {
          if(str[i]=='a' || str[i]=='e' ||  str[i]=='i' || str[i]=='o' ||  str[i]=='u')
         {
           v++;
         }
          else
         {
           c++;
         }
       }
       if(str[i]==' ')
       {
           space++;
       }
       if(str[i]>='0' && str[i]<='9')
       {
           digit++;
       }
   } 
   printf("Vowel:%d\n",v);
   printf("Con:%d\n",c);
   printf("Space:%d\n",space);
   printf("Digit:%d\n",digit); 
}
