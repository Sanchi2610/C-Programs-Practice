#include<stdio.h>
#include<string.h>
int main()
{
    char string[20]="Sanchisanchi";
    for(int i=0;string[i]!='\0';i++)
    {
        for(int j=i+1;string[j]!='\0';j++)
        {
            if(string[i]==string[j])
            {
                for(int k=j;string[k]!='\0';k++)
                {
                    string[k]=string[k+1];
                }
               j--;
            }
        }
    }
    printf("%s",string);
    return 0;
}