#include <stdio.h>
int main()
{
    char str1[30]="sanchi";
    char str2[30]=" gaikwad";
    char *p=&str1[0];
    char *q=&str2[0];
    int i=0;
    while(*p!='\0')
    {
        p++;
    }
    while(*q!='\0')
    {
       *p=*q;
        p++;
        q++;
        
    }
    *p='\0';
    printf("%s",str1);
    return 0;
}
