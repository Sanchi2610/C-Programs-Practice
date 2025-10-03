#include <stdio.h>
int main()
{
    int a[5]={22,12,2,22,11};
    int size=5;
    printf("Unique elements: ");
    for(int i=0;i<5;i++)
    {
        int uni=0;
        for(int j=0;j<5;j++)
        {
            if(a[i]==a[j])
            {
                uni++;
            }
        }
        if(uni==1)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}