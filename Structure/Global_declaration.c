// Online C compiler to run C program online
#include <stdio.h>
struct student 
{
    int roll_no;
    char name[10];
    float marks;
}boys[3];
int main()
{
    for(int i=0;i<3;i++)
    {
    printf("Enter boys.roll_no:");
    scanf("%d",&boys[i].roll_no);
    printf("Enter boys.name:");
    scanf("%s",&boys[i].name);
    printf("Enter boys.marks:");
    scanf("%f",&boys[i].marks);
    }
    for(int i=0;i<3;i++)
    {
    printf("%d-%s-%f\n",boys[i].roll_no,boys[i].name,boys[i].marks);
    }
    return 0;
}