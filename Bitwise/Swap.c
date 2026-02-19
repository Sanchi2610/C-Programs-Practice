#include <stdio.h>
int main()
{
   int a=3,b=2;
   a=a^b;
   b=a^b;
   a=a^b;
   printf("a:%d\n",a);
   printf("b:%d",b);
   return 0;
}