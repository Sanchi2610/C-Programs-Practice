#include <stdio.h>
int main() 
{
    unsigned char num=0xf0;//1111 0000
    unsigned char x=num;
    unsigned char r=0;
    for(int i=0;i<8;i++)
    {
        r=(r<<1)|(x&1);
        x=x>>1;
    }
    printf("num:0x%02X\n",num);
    printf("Rev:0x%02X\n",r);
    return 0;
}
