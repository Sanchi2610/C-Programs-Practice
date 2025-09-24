#include<stdio.h>
char string(char[ ],char[ ]);
int main()
{
    char str1[10]="sanchi";
    char str2[10]="sanchu";
    int equal=string(str1,str2);
    if(equal)
    printf("Strings are equal");
    else
    printf("Strings are not equal");
    return 0;
}
char string(char str1[ ],char str2[ ])
{
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
        i++;
    }
    if(str1[i]!=str2[i])
    {
       return 0;
    }
    return 1;
}
