#include <stdio.h>
int main()
{
    char str1[10]="sanchi";
    char str2[10]="sanchii";
    int equal=0,i=0;
    char *ptr1=str1;
    char *ptr2=str2;
    while(*ptr1!='\0' || *ptr2!='\0')
    {
        if(*ptr1!=*ptr2)
        {
            equal=1;
            break;
        }
        ptr1++;
        ptr2++;
    }
    if(equal==0)
    printf("Equal");
    else
    printf("Not equal");
}