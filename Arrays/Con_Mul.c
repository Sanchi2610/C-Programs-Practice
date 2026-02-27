#include <stdio.h>
int main() 
{
    int n=5;
    int a[5];
    printf("Enter first element:");
    scanf("%d",&a[0]);
    printf("Enter sec element:");
    scanf("%d",&a[1]);
    int *p=&a[2];
    for(int i=2;i<n;i++)
    {
        a[i]=(*(p-1) * *(p-2));
        p++;
    }
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}
