// Calculating Net Salary

#include<stdio.h>

void main()
{
  int basic, grade, hra, net_salary;

    printf("Enter Salary and Grade :");
    scanf("%d%d",&basic,&grade);

    if(grade == 1)
        hra = basic * 0.40;
    else
        hra = basic * 0.30;


    net_salary = basic + hra;
    printf("Net Salary : %d", net_salary);

}
