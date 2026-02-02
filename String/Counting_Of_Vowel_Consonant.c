#include <stdio.h>
#include<string.h>
int main()
{
    char string[10]="Sanchi";
    int vowel=0,consonant=0;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]>='a' && string[i]<='z' || string[i]>='A' && string[i]<='Z')
        {
            if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U' )
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    printf("Vowel: %d\n",vowel);
    printf("consonants: %d",consonant);
    return 0;
}
