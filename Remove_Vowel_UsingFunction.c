#include <stdio.h>
#include <string.h>
char remove_vowel(char[ ]);
int main()
{
    char str[30]="sanchi";
    remove_vowel(str);
    printf("String without vowel: %s\n",str);
    return 0;
}
char remove_vowel(char str[ ])
{
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
           str[j++]=str[i];
        }
    }
    str[j]='\0';
}