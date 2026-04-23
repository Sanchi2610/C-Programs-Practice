#include <stdio.h>
int main() 
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
          printf("%d is even\n",a[i]);
        }
        else
        { 
          int prime=1;
          if(a[i]<=1)
          {
            prime=0;
          }
          for(int j=2;j*j<=a[i];j++)
          {
            if(a[i]%j==0)
            {
                prime=0;
            }
          }
        if(prime)
        printf("%d is prime\n",a[i]);
        else
        printf("%d is odd\n",a[i]);
        }
    }
    return 0;
}
        
