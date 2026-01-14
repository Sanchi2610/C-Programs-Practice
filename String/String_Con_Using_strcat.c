#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10]="sanchi";
    char str2[10]=" gaikwad";
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}