// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    char str[10]="sanchi";
    char *ptr=str;
    int len=0;
    while(*ptr!=0)
    {
        len++;
        ptr++;
    }
    printf("%d",len);
    return 0;
}
