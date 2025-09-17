
#include <stdio.h>
#include<string.h>
char reverse(char[]);
char reverse_string(char[],int,int);
int main()
{
    char str[19]="sanchi pranav";
    reverse(str);
    printf("%s",str);
    return 0;
}
char reverse_string(char str[],int l,int r)
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
char reverse(char str[])
{
    int len=strlen(str);
    reverse_string(str,0,len-1);
    int start=0;
    for(int i=0;i<=len;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            reverse_string(str,start,i-1);
            start=i+1;
        }
    }
}