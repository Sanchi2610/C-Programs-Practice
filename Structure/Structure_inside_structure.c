// Online C compiler to run C program online
#include<stdio.h>
 struct class
 {
     char name[10];
     int roll_no;
 };
 struct student
 {
     float marks;
     struct class boys;
 }girls;
 int main() 
{
    struct student girls={34.5,{"sanchi",1}};
    printf("%f-%s-%d",girls.marks,girls.boys.name,girls.boys.roll_no);
    return 0;
}