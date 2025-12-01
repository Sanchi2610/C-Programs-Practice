#include<stdio.h>
#include<string.h>
void freq_count(char[]);
int main() 
{
    char str[10]="sascaa";
    freq_count(str);
    return 0;
}
void freq_count(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        int freq=0;
        int already_counted=0;
        for(int j=0;j<i;j++) 
        {
            if(str[i]==str[j]) 
            {
            already_counted=1;
            break;
            }
        }
        if(already_counted)
        continue;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                freq++;
            }
        }
         printf("%c occurs %d times\n",str[i],freq);
    }
}