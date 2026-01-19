#include <stdio.h>

int main() 
{
    char s1[10] = "sanchi";
    char s2[10] = "sanchI";
    int eq = 1;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) 
    {
        if (s1[i] != s2[i]) 
        {
            eq = 0;
            break;
        }
    }

    if (eq)
        printf("Equal");
    else
        printf("Not equal");

    return 0;
}
