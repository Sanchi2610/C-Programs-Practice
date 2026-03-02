#include <stdio.h>
#include <string.h>
void uni(char[]);
int main() 
{
   char str[10]="sanchni";
   uni(str);
   return 0;
}
void uni(char str[])
{
   int index=0;
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
         printf("%c",str[i]);
        }
    }
}
