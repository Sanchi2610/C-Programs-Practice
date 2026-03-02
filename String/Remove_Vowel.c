#include <stdio.h>
#include <string.h>
int main() 
{
    char str[10]="sanchi";
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
        {
             str[j++]=str[i];// 2 pointer method.i=read & j=write
        }
    }
    str[j]='\0';
    printf("%s",str);
    return 0;
}
