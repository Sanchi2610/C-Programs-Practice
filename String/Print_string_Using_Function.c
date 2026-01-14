#include <stdio.h>
void print(char[]);
int main()
{
    char str[10]="sanchi";
    print(str);
    return 0;
}
void print(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}