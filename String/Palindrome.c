#include<stdio.h>
#include <string.h>
int main()
{
    char str[10]="sanchi";
    int len=strlen(str);
    int palindrome=1;
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            palindrome=0;
        }
    }
    if(palindrome)
    printf("string is palindrome",str);
    else
    printf("string is not palindrome",str);
    return 0;
}