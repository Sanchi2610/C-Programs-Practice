#include<stdio.h>
int main()
{
    char s1[10]="san";
    char s2[10]="chi";
    char *p=s1;
    char *q=s2;
    while(*p!='\0')
    {
        p++;
    }
    while(*q!='\0' && p-s1<(int)sizeof(s1)-1)
    {
        *p=*q;
         p++;
         q++;
    }
    *p='\0';
    printf("%s",s1);
}