#include<stdio.h>
#include<string.h>
int remove_vowel(char[]);
int main()
{
    char str[10]="sa nch12i";
    int len=strlen(str);
    remove_vowel(str);
    return 0;
}
int remove_vowel(char str[])
{
    int digit=0,space=0,vowel=0,con=0;
    for(int i=0;str[i]!='\0';i++)
    {
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
     {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
          vowel++;
        }
        else
        {
            con++;
        }
     }
      else if(str[i]==' ')
      {
          space++;
      }
      else if (str[i]>='0' && str[i]<='9')
      {
          digit++;
      }
    }
  printf("Vowel:%d\n",vowel);
  printf("Con:%d\n",con);
  printf("Digit:%d\n",digit);
  printf("Space:%d\n",space);
}
    
