#include <stdio.h>
int main()
{
    int a[4] = {1, 4, 2, 3};
    int n = 4;
    for (int i = 0; i < n-i; i++)
    {
        for (int j = 0; j <n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
    return 0;
}