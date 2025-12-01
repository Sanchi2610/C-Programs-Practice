#include<stdio.h>
#include<string.h>
void print_string(char[]);
int main() 
{
    char str[10]="sanchi";
    print_string(str);
    return 0;
}
void print_string(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
         printf("%c",str[i]);
    }
}