#include <stdio.h>
#include <string.h>

int main() {
    char str[10] = "sancnhi";
    int len = strlen(str);

    for (int i = 0; i < len; i++)
     {
        int dup = 0;
        for (int j = 0; j < i; j++)
         {
            if (str[i] == str[j]) 
            {
                dup = 1;  
                break;
            }
        }
        if (!dup) 
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}
