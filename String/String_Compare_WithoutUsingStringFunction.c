#include <stdio.h>
int main()
{
    char str1[10]="sanchi";
    char str2[10]="sanchu";
    int equal=1,i=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            equal=0;
            break;
        }
        i++;
    }
    if(str1[i]!=str2[i])
    {
        equal=0;
    }
    if(equal)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
}