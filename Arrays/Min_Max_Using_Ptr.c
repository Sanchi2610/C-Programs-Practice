// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    int a[5]={1,32,311,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int min=a[0];
    int max=a[0];
    int *p=&a[0];
    while(p<a+n)
    {
        if(*p<min)
           min=*p; 
        if(*p>max)
          max=*p;
           p++;
    }
    printf("Min:%d\nMax:%d",min,max);
    return 0;
}