#include <stdio.h>
#include <string.h>
int main()
{
    char str[10]="sainciia";
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
    {
        int already=0;
        for(int k=0;k<i;k++)
        {
            if(str[i]==str[k])
            {
                already++;
            }
        }
    if(already)
    continue;
    int freq=0;
    for(int j=0;str[j]!='\0';j++)
      {
        if(str[i]==str[j])
        {
            freq++;
        }
      }
     printf("%c occurs %d times\n",str[i],freq);
    }
    return 0;
}
