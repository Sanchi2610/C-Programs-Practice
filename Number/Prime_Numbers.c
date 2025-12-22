// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    for(int num=2;num<=20;num++)
    {
    int prime=1;
    if(num<=1)
    prime=0;
    else
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        prime=0;
    }
    if(prime)
    printf(" %d ",num);
    }
    return 0;
}