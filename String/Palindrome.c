#include<stdio.h>
#include <string.h>
int main()
{
    char str[10]="sanchi";
    int len=strlen(str);
    int pallindrome=1;
    for(int i=0;i<=len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            pallindrome=0;
        }
    }
    if(pallindrome)
    printf("string is pallindrome",str);
    else
    printf("string is not pallindrome",str);
    return 0;
}