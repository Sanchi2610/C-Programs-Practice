#include<stdio.h>
#include<string.h>
void reverse(char[],int,int);
void keep_word_order(char[]);
int main() 
{
    char str[20]="sanchi pranav";
    keep_word_order(str); 
    printf("%s",str);
    return 0;
}
void reverse(char str[],int left,int right)
{
    while(left<right)
    {
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
}
void keep_word_order(char str[])
{
    int start=0;
    for(int i=0;;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
        reverse(str,start,i-1);
        start=i+1;
        }
        if(str[i]=='\0')
        {
            break;
        }
    }
}