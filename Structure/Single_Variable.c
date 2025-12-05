// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    struct day
    {
        int date;
        int month;
        int year;
    }today;
    printf("Enter date");
    scanf("%d",&today.date);
    printf("Enter month");
    scanf("%d",&today.month);
    printf("Enter year");
    scanf("%d",&today.year);
    printf("%d-%d-%d",today.date,today.month,today.year);
    return 0;
}