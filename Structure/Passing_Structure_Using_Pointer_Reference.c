// Online C compiler to run C program online
#include <stdio.h>
struct detail
{
    int idnum;
    char name[10];
    float salary;
    float hours;
}emp;
float val(struct detail *ptr);
int main() 
{
    struct detail emp={1,"Sanchi",500,4.5};
    float cal=val(&emp);
    printf("%f",cal);
    return 0;
}
float val(struct detail *ptr)
{
    return ((*ptr).salary * (*ptr).hours);
}