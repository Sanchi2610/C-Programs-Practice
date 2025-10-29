#include <stdio.h>
#include <string.h>

void string(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)     // check each character
    {
        int dup = 0;
        for (int j = 0; str[j] != '\0'; j++) // count how many times it appears
        {
            if (str[i] == str[j])
                dup++;
        }
        if (dup == 1)                        // found the first unique one
        {
            printf("First non-repeating character: %c\n", str[i]);
            return;                          // stop here — only the first one
        }
    }
    printf("No unique character found.\n");
}

int main()
{
    char str[10] = "ssnchi";
    string(str);
    return 0;
}
