#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10]="sanchi";
    char str2[10]="sanchii";
    int equal=strcmp(str1,str2);
    if(equal==0)
    printf("strings are equal");
    else
    printf("Strings are not equal");
    return 0;
}