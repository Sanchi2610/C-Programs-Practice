#include<stdio.h>
#include<string.h>
char count_vowel(char[]);
int main() 
{
    char str[10]="sanchi";
    count_vowel(str);
    return 0;
}
char count_vowel(char str[])
{
    int vowel=0,con=0;
    for(int i=0;str[i] !='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' || str[i]=='O' ||str[i]=='U' )
            {
                vowel++;
                 printf("Vowel:%c\n",str[i]);
            }
            else
            {
                con++;
                printf("Con:%c\n",str[i]);
            }
        }
    }
    printf("Total number of vowel:%d\n",vowel);
    printf("Total number of con:%d",con);
}