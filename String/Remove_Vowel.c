#include <stdio.h>
#include <string.h>
char vowel(char[]);
int main()
{
    char str[30]="sanchi";
    int len=strlen(str);
    vowel(str);
    printf("%s\n",str);
    return 0;
}
char vowel(char str[])
{
    int v=0,index=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
            {
                str[index++]=str[i];
            }
        }
    }
    str[index]='\0';
}
