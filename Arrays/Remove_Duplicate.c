// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a[ ]={1,3,1,5,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        int dup=0;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                dup++;
            }
        }
        if(dup==0)
        {
            printf(" %d",a[i]);
        }
    }
    return 0;
}