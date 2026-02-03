// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a[ ]={1,3,1,5,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        int Uni=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                Uni++;
            }
        }
        if(Uni==1)
        {
            printf(" %d",a[i]);
        }
    }
    return 0;
}