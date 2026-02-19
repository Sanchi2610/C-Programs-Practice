#include<stdio.h>
int main()
{
    int n=1221,r=0,ori=0;
    ori=n;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(ori==r)
    printf("Number is Pallindrome",r);
    else
    printf("Number is not Pallindrome",r);
}