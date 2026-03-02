#include <stdio.h>
#include <string.h>
char uni(char[]);
int main() 
{
   char str[10]="sanchni";
   char c= uni(str);
   printf("%c",c);
   return 0;
}
char uni(char str[])
{
   int count=0;
   for(int i=0;str[i]!='\0';i++)
    {
        int dup=0;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                dup++;
            }
        }
        if(dup==1)
        {
          count++;
          if(count==1)
          {
              return str[i];
          }
        }
    }
}
