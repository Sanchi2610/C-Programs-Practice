#include<stdio.h>
#include<string.h>
void count_freq(char[]);
int main() 
{
    char str[100]="saannchhhiiii";
    count_freq(str);
    return 0;
}
void count_freq(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        int count=1,already=0;
        for(int j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                already++;
                break;
            }
        }
            if(already)
            continue;
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
          printf("%c occurs %d times\n",str[i],count);
    }
}
