#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "sanchi pranav bhale";
    int count = 1;   
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("Number of words = %d\n", count);
    return 0;
}
