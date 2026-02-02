#include <stdio.h>
#include <string.h>
int main() 
{
   char s[10]="abba";
   int pallindrome=1;
   int len=strlen(s);
   for(int i=0;s[i]!='\0';i++)
   {
       if(s[i]!=s[len-i-1])
       pallindrome=0;
   }
   if(pallindrome)
   printf("String is pallindrome",s);
   else
   printf("String is not pallindrome",s);
   return 0;
}