// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
int string(char[]);
int main()
{
    char str[10]="SAn chi12";
    string(str);
    return 0;
}
int string(char str[])
{
    int vowel=0,con=0,space=0,digit=0;
    for(int i=0;str[i]!='\0';i++)
    {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                vowel++;
            }
             else if(str[i]>='a' && str[i]<='z' || str[i]>='A'&& str[i]<='Z')
            {
                con++;
            }
            else if (str[i]==' ')
            {
                space++;
            }
            else if(str[i]>='0' && str[i]<='9')
            {
                digit++;
            }
    }
     printf("Vowel:%d\n",vowel);
     printf("Con:%d\n",con);
     printf("Digit:%d\n",digit);
     printf("Space:%d",space);
}
