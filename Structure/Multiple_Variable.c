#include <stdio.h>
int main() 
{
    struct detail
    {
        char name[10];
        int idnum;
        float salary;
    }employee[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter name:");
        scanf("%s",&employee[i].name);
        printf("Enter idnum:");
        scanf("%d",&employee[i].idnum);
        printf("Enter salary:");
        scanf("%f",&employee[i].salary);
    }
    for(int i=0;i<3;i++)
    {
    printf("%s-%d-%f\n",employee[i].name,employee[i].idnum,employee[i].salary);
    }
    return 0;
}