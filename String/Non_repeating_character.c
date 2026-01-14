#include <stdio.h>
#include<string.h>
void string(char[]);
int main() 
{
    char str[10]="sasn";
    string(str);
    return 0;
}
void string(char str[])
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
            printf("%c",str[i]);
        }
    }
}