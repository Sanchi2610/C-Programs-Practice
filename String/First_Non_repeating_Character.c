#include <stdio.h>
#include<string.h>
char string(char[]);
int main() 
{
    char str[10]="saschi";
    char ch= string(str);
    if(ch!='\0')
    printf("%c",ch);
    else
    printf("Not found");
    return 0;
}
char string(char str[])
{
    int index=0;
    for(int i=0;str[i]!='\0';i++)
    {
        int dup=0;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                dup++;
            }
        }
        if(dup==1)
        {
            return str[i];
        }
    }
}