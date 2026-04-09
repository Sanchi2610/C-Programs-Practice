#include <stdio.h>
int main() 
{
    int a[]={1,2,3,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int xor1=0;
    for(int i=1;i<=n+2;i++)
    {
        xor1=xor1^i;// 1 2 3 4 5 6 7 8 9
    }
    for(int i=0;i<n;i++)
    {
        xor1=xor1^a[i];// 1 2 3 4 6 7 8 9
    }
    int set_bit=xor1 & (-xor1);//1
    int x=0,y=0;//odd & even
    for(int i=1;i<=n+2;i++)
    {
        if(i&set_bit)//1 
        {
            x=x^i;//1 3 5 7 9
        }
        else
        {
            y=y^i;//2 4 6 8
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]&set_bit)
        {
            x=a[i]^x;//1 3 7 9
        }
        else
        {
            y=y^a[i];//2 6 8
        }
    }
    printf("Missing elements:%d & %d",x,y);
    return 0;
}
