#include<stdio.h>
int main()
{
    int arr[6]={1,2,1,3,4,2};
    int size=6;
    printf("Array:");
    for(int i=0;i<size;i++)
    {
        int duplicate=0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate=1;
            }
        }
    if(!duplicate)
      {
        printf("%d ",arr[i]);
      }
    }
    return 0;
}