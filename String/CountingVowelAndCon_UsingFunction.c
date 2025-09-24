#include<stdio.h>
#include <string.h>
char count(char []);
int main()
{
    char str[10]="sanchi";
    int len=strlen(str);
    int vowel=count(str);
    int con=len-vowel;
    printf("Vowel:%d\n",vowel);
    printf("Con:%d",con);
    return 0;
}
char count(char str[ ])
{
    int vowel=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' || str[i]=='U')
            {
                vowel++;
            }
        }
    }
    return vowel;
}