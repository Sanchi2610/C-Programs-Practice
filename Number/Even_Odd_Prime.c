#include <stdio.h>
int main() 
{
    int num=12;
    int prime=1;
    if(num<=1)
    {
    prime=0;
    }
    else
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        prime=0;
    }
    if(prime)
    printf("Prime");
    else
    {
    if(num%2==0)
    printf("Num is even");
    else 
    printf("Num is odd");
    }
    return 0;
}