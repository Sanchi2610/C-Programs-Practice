#include <stdio.h>
#include <string.h>
void reverse(int,char [],int);
void string(char[]);
int main() 
{
   char str[20]="sanchi gaikwad";
   int len=strlen(str);
   reverse(0,str,(len-1));
   string(str);
   printf("%s",str);
   return 0;
}
void reverse(int left,char str[],int right)
{
    while(left<right)
    {
       char temp=str[left];//s
       str[left]=str[right];
       str[right]=temp;
       left++;
       right--;
    }
}
void string(char str[])
{
    int start=0;
    for(int i=0;;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            reverse(start,str,i-1);
            start=i+1;
        }
        if(str[i]=='\0')
        {
            break;
        }
    }
}