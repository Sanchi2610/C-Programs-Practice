#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="sannchi";
    int len=strlen(str);
    for(int i=0;i<=len;i++)
    {
        int duplicate=0;
        for(int j=i+1;j<=len;j++)
        {
            if(str[i]==str[j])
            {
                duplicate=1;
            }
        }
    if(!duplicate)
      {
        printf("%c",str[i]);
      }
    }
    return 0;
}
