#include <stdio.h>
#include<string.h>
char reverse_string(char[]);
int main() 
{
    char string[7]="sanchi";
    char str[17]="gaikwad";
    int length=strlen(string);
    reverse_string(string);
    reverse_string(str);
    printf("%s %s",string,str);
    return 0;
}
char reverse_string(char string[])
{
    int length=strlen(string);
    for(int i=0;i<length/2;i++)
    {
    char temp=string[i];
    string[i]=string[length-i-1];
    string[length-i-1]=temp;
    }
}