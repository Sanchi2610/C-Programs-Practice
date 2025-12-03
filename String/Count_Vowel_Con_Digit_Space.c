#include<stdio.h>
#include<string.h>
void count(char[]);
int main()
{
    char str[10]="SAn chi12";
    count(str);
    return 0;
}
void count(char str[])
{
    int vowel=0,con=0,digit=0,space=0;
    for(int i=0;str[i]!='\0';i++)
    {
     if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
     {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U')
        {
            vowel++;
        }
        else
        {
            con++;
        }
     }
        else if(str[i]>='0' && str[i]<='9')
        {
           digit++;
        }
        else if(str[i]==' ')
        {
           space++;
        }
      }
    printf("Number of digits:%d\n",digit);
    printf("Number of space:%d\n",space);
    printf("Number of vowels:%d\n",vowel);
    printf("Number of con:%d",con);
}
