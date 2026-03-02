#include <stdio.h>
#include <string.h>
void duplicate(char[]);
int main() 
{
   char str[10]="sanchni";
   duplicate(str);
   printf("%s",str);
   return 0;
}
void duplicate(char str[])
{
   int index=0;
   for(int i=0;str[i]!='\0';i++)
    {
        int dup=0;
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                dup++;
            }
        }
        if(dup==0)
        {
          str[index++]=str[i];
        }
    }
   str[index]='\0';
}
