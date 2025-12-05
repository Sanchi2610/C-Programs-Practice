#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20]="sanchi";
    char str2[20]=" gaikwad";
    strcpy(str2,str1);
    printf("%s",str2);
    return 0;
}