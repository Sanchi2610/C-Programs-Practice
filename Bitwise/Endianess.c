#include <stdio.h>
int main()
{
    unsigned int num=0x1122;
    //hex data on 32-bit(bz it is unsigned int)
    unsigned char *ptr=(unsigned char*)&num;
    //char ptr bz only one value,&num=address of num
    if(*ptr==11)
    //ptr is at that location
    printf("Little endian");
    else
    printf("Big endian");
    return 0;
}
