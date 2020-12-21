#include<stdio.h>

void main()
{
   int net_salary,salary,hra,da,it, gross_salary;

   //intput
   printf("Enter basic salary :");
   scanf("%d",&salary);

   //process
   hra = salary * 40 / 100;
   da = salary * 25 / 100;
   gross_salary = salary + hra + da;
   it = gross_salary * 12 / 100;
   net_salary =  gross_salary - it;

   //output
   printf("Basic Salary        %10d\n",salary);
   printf(" + HRA              %10d\n",hra);
   printf(" + DA               %10d\n",da);
   printf("                     ----------\n");
   printf("Gross Salary        %10d\n",gross_salary);
   printf(" - IT               %10d\n",it);
   printf("                     ----------\n");
   printf("Net Salary          %10d\n",net_salary);

}
