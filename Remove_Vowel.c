#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]="Sanchi";
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
      if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
       {
         if( str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' &&str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
              {
                 str[j++]=str[i];
              }
        }
    }
    str[j]='\0';
    printf("String without vowel:%s",str);
}
