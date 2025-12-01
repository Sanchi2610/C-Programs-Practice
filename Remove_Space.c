#include<stdio.h>
#include<string.h>
void print_string(char[]);
int main() 
{
    char str[10]="san chi";
    print_string(str);
    printf("%s",str);
    return 0;
}
void print_string(char str[])
{
    int index=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[index++]=str[i];
        }
    }
     str[index]='\0';
}
