#include <stdio.h>
int main()
{
    int num=3;
    for(int i=7;i>=0;i--)
    {
        printf("%d",(num>>i)&1);//shift(>>),Extract(&)
    }
    return 0;
}
