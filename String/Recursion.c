// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void reverse(int,char [],int);
int main() 
{
   char s[20]="sanchi gaikwad";
   int len=strlen(s);
   reverse(0,s,len-1);
   printf("%s",s);
   return 0;
}
void reverse(int left,char s[],int right)
{
    if (left>=right)
    return ;
    {
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    reverse(left,s,right);
}