#include <stdio.h>
#include <string.h>
void reverse_string(char str[], int l, int r);
void reverse_words(char str[]);
int main(void)
{
    char str[50] = "sanchi gaikwad";
    reverse_string(str, 0, strlen(str) - 1);
    reverse_words(str);
    printf("Reversed word order: %s\n", str);
    return 0;
}
void reverse_string(char str[], int l, int r)
{
    while (l < r)
    {
        char temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
}
void reverse_words(char str[])
{
    int len = strlen(str);
    int start = 0;
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverse_string(str, start, i - 1);
            start = i + 1;
        }
    }
}
