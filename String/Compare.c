#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[10]="sanchi";
    int l1=strlen(s1);
    char s2[10]="sanchI";
    int l2=strlen(s2);
    int eq=1;
    if(l1!=l2)
    {
        eq=0;
    }
    for(int i=0;s1[i]!='\0';i++)
    {
            if(s1[i]!=s2[i])
            {
                eq=0;
            }
    }
    if(eq)
    printf("equal");
    else
    printf("Not equal");
    return 0;
}
