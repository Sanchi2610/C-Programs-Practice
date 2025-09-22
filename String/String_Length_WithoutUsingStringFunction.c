#include <stdio.h>
int main()
{
    char str1[10]="sanchi";
    int len=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    printf("Length of string is:%d",len);
    return 0;
}