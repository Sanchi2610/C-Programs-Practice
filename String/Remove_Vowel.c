#include<stdio.h>
#include <string.h>
char remove_vowel(char[ ]);
int main()
{
    char str[10]="sanchi";
    remove_vowel(str);
    printf("%s",str);
    return 0;
}
char remove_vowel(char str[ ])
{
    int index=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            if(str[i]!='a' && str[i]!='e' &&  str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
            {
                str[index++]=str[i];
            }
        }
    }
    str[index]='\0';
}
   
