#include <stdio.h>
int main()
{
    char s1[10]="sanchi";
    char s2[10]="sanchid";
    char *p=s1;
    char *q=s2;
    int eq=1;
    while(*p!='\0' && *q!='\0')
    {
       if(*p!=*q)
       {
        eq=0;
        break;
       }
        p++;
        q++;
    }
     if(*p!=*q)
       {
        eq=0;
       }
    if(eq)
    printf("Equal");
    else
    printf("Not equal");
    return 0;
}