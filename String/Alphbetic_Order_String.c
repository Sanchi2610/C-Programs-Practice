// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
int main()
{
   char str1[30]="orange";
   char str2[30]="zebra";
   char str3[30]="banana";
   char temp[30];
   if(strcmp(str1,str2)>0)
   {
   strcpy(temp,str1);
   strcpy(str1,str2);
   strcpy(str2,temp);
   }
   if(strcmp(str2,str3)>0)
   {
   strcpy(temp,str2);
   strcpy(str2,str3);
   strcpy(str3,temp);
   }
  if(strcmp(str1,str3)>0)
  {
  strcpy(temp,str1);
  strcpy(str1,str3);
  strcpy(str3,temp);
  }
   printf("%s %s %s",str1,str2,str3);
   return 0;
}