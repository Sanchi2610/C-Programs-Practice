#include <stdio.h>
#include<string.h>
char count_vowel(char[]);
int main()
{
    char str[17]="sanchi";
    int v=count_vowel(str);
    printf("Vowel: %d",v);
    return 0;
}
    char count_vowel(char str[])
    {
      int len=strlen(str);
      int v=0,c=0;
      for(int i=0;i<=len;i++)
       {
          if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
           {
             v++;
           }
      else
          {
           c++;
          }
      }
      return v;
    }
    