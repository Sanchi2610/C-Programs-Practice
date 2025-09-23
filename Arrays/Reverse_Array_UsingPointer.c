#include <stdio.h>
int main() 
{
    int a[5] = {4, 3, 5, 1, 2};
    int *left = a;
    int *right = a + 4;   // point to last element
    while(left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    for(int i=0; i<5; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}