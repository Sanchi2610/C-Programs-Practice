#include <stdio.h>
int main()
{
    char str1[10]="sanchi";
    char str2[10]="gaikwad";
    int i=0;
    for(i;str2[i]!='\0';i++)
    {
      str1[i]=str2[i];
    }
    str1[i]!='\0';
    printf("Str1:%s\n",str1);
    printf("Str2:%s",str2);
    return 0;
}