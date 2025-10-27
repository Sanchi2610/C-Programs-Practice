#include <stdio.h>
int main() 
{
    int a[5] = {1, 2, 3, 4, 5};
    int *left = a;           // pointer to first element
    int *right = a + 4;      // pointer to last element
    int temp;
    while (left < right)     // swap until they meet
    {
        temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
   
