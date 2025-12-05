#include <stdio.h>
int main()
{
    char str1[20]="sanchi";
    char str2[20]=" gaikwad";
    char *ptr1=str1;
    char *ptr2=str2;
    while(*ptr1!='\0')
    {
        ptr1++;
    }
    while(*ptr2!='\0')
    {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';
    printf("%s",str1);
    return 0;
}