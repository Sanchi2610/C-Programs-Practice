#include <stdio.h>
int main()
{
    char str1[10]="sanchi";
    char str2[10]="sanChi";
    int i=0,equal=0;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
      {
          equal=1;
          break;
      }
        i++;
    }
    if(equal==0)
    printf("strings are equal");
    else
    printf("Strings are not equal");
    return 0;
}
