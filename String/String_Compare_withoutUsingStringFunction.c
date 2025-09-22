#include <stdio.h>
int main()
{
    char str1[10]="sanchi";
    char str2[10]="gaikwad";
    char s1,s2;
    for(int i=0;str1[i]!='\0';i++)
    {
        s1=str1[i];
        for(int j=0;str2[j]!='\0';j++)
       {
        s2=str2[j];
       }
    }
    if(s1==s2)
     {
        printf("strings are equal",s1,s2);
     }
    else
     {
         printf("strings are not equal",s1,s2);
     }
    return 0;
}