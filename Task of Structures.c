#include <stdio.h>
struct employee{
    char    name[30];
    int     empId;
    int     exp;
    float   salary;
};

int main()
{
    struct employee emp;
    int i;
    for(i=0;i<=5;i++)
    {
     printf("Enter details:\n");
     printf("Name:\n");
     scanf("%s",&emp.name);
     printf("ID:\n");
     scanf("%d",&emp.empId);
     printf("Enter the years of experience:\n ");
     scanf("%d",&emp.exp);
     printf("Salary:\n");
     scanf("%f",&emp.salary);
     printf("Entered detail is:\n");
     printf("Name: %s \n",emp.name);
     printf("Id: %d \n",emp.empId);
     printf("years of experience: %d \n,emp.exp");
     printf("Salary: %f \n",emp.salary);
    }
    return 0;
}

