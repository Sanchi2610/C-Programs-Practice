#include <stdio.h>
int main()
{
    int a[5]={2,3,1,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        int prime=1;
        if(a[i]<=1)
        {
            prime=0;
        }
        else
        {
            for(int j=2;j * j <=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    prime=0;
                    break;
                }
            }
        }
        if(prime)
        printf("%d:Prime\n",a[i]);
        else
        {
           if(a[i]%2==0)
           {
            printf("%d:Even\n",a[i]);
           }
             if(a[i]%2!=0)
              {
                printf("%d:Odd\n",a[i]);
              }
        }      
    }
    return 0;
}
