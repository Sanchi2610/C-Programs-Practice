#include<stdio.h>
int main()
{
    int a[5]={1,3,1,2,3};
    int size=5;
    printf("Array:");
    for(int i=0;i<5;i++)
    {
       int duplicate=0;
       for(int j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=1;
            }
        }
    
       if(!duplicate)
       {
         printf("%d ",a[i]);
       }
    }
    return 0;
}