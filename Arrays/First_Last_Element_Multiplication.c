#include <stdio.h>
int main() 
{
    int a[6]={1,2,3,4,5,6};
    int n=6;
    int *left=&a[0];//1
    int *right=&a[n-1];//6
    while(left<right)
    {
     
        (*left)=(*left) * (*right);//
        left++;
        right--;
      
    }
    for(int i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}