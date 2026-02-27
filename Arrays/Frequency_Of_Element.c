#include <stdio.h>

int main(void)
{
    int a[] = {1,2,3,1,2};
    int n = (int)(sizeof(a)/sizeof(a[0]));
    int *p = a;

    for(int i = 0; i < n; i++)
    {
        // check if already printed earlier
        int already = 0;
        for(int k = 0; k < i; k++)
        {
            if (*(p+i) == *(p+k))
            {
                already = 1;
                break;
            }
        }
        if (already) continue;

        int freq = 0;
        for(int j = 0; j < n; j++)
        {
            if (*(p+i) == *(p+j))
                freq++;
        }

        printf("%d occurs %d times\n", *(p+i), freq);
    }

    return 0;
}
