#include<stdio.h>
int main()
{
    int a[7]={1, 2, 3, 2, 3, 1, 3};
    int n=7;
    int result=0;
    for(int i=0;i<n;i++)
    {
        result^=a[i];
    }
    printf("%d occurs odd number of times",result);
    return 0;
}
