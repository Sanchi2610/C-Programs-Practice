#include <stdio.h>
struct detail 
{
    int idnum;
    char name[10];
    float hours;
    float salary;
}emp;
float data(struct detail emp);
int main()
{
    struct detail emp={1,"Sanket",4.5,500};
    float pay=data(emp);  
    printf("%d-%s-%f\n",emp.idnum,emp.name,pay);
    return 0;
}
float data(struct detail emp)
{
    return (emp.hours * emp.salary);
}