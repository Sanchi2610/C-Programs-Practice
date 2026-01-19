#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[10]="sanchi";
    int l1=strlen(s1);
    char s2[10]="sanchi";
    int l2=strlen(s2);
    int eq=1;
    if(l1!=l2)
    {
        eq=0;
    }
    for(int i=0;s1[i]!='\0';i++)
    {
        for(int j=0;s2[j]!='\0';j++)
        {
            if(s1[i]!=s2[j])
            {
                eq=0;
            }
        }
    }
    if(eq)
    printf("equal");
    else
    printf("Not equal");
    return 0;
}