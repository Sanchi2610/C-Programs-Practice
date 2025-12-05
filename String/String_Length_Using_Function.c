#include <stdio.h>
int length(char[]);
int main()
{
    char str[10]="sanchi";
    int l=length(str);
    printf("%d",l);
    return 0;
}
int length(char str[])
{
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    return len;
}