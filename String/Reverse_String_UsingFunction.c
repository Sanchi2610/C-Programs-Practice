#include<stdio.h>
#include<string.h>
char reverse_string(char[]);
int main()
{
    char string[7]="sanchi";
    reverse_string(string);
    printf("%s",string);
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