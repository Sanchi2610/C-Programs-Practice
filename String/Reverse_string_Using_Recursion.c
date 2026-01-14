// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
void reverse_string(char[],int,int);
int main() 
{
    char str[10]="sanchi";
    int len=strlen(str);
    reverse_string(str,0,(len-1));
    printf("%s",str);
    return 0;
}
void reverse_string(char str[],int left,int right)
{
    if(left>=right)//base condition
    return ;
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
    reverse_string(str,left+1,right-1);
}