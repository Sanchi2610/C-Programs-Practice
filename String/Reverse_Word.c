#include<stdio.h>
#include<string.h>
char string_reverse(char[],int,int);
char word_reverse(char[]);
int main() 
{
 char str[20]="sanchi gaikwad"; 
 int len=strlen(str);
string_reverse(str,0,len-1);
 word_reverse(str);
 printf("%s",str);
 return 0;
}
char string_reverse(char str[],int l,int r)
{
    while(l<r)
    {
        char temp=str[l];
        str[l]=str[r];
        str[r]=temp;
        l++;
        r--;
    }
}
char word_reverse(char str[])
{
    int start=0;
    for(int i=0;;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            string_reverse(str,start,i-1);
            if(str[i]=='\0')
            {
                break;
            }
            start=i+1;
        }
    }
}