#include <stdio.h>
#include<string.h>
char string(char[]);
int main() 
{
    char str[100]="san ch i12";
    string(str);
    return 0;
}
char string(char str[])
{
    int vowel=0,consonants=0,space=0,digit=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        
        {
            vowel++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            consonants++;
        }
    }
    printf("Vowel:%d\n",vowel);
    printf("Space:%d\n",space);
    printf("Digits:%d\n",digit);
    printf("Consonants:%d\n",consonants);
}