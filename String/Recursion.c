#include<stdio.h>
#include<string.h>
void reverse(int,char[],int);
int main()
{
    char str[20]="sanchi gaikwad";
    int len=strlen(str);
    reverse(0,str,(len-1));
    printf("%s",str);
    return 0;
}
void reverse(int left,char str[],int right)
{
    if(left>=right)
    {
        return ;
    }
    char temp=str[left];
    str[left]=str[right];
    str[right]=temp;
    left++;
    right--;
    reverse(left,str,right);
}