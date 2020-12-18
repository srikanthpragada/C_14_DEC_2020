// Program to take marks and print total and average

#include <stdio.h>

void main()
{
   int m1,m2,total,average;

       // input
       printf("Enter two marks :");
       scanf("%d%d",&m1,&m2);
       // process
       total = m1 + m2;
       average = total / 2;
       // output
       printf("Total marks   : %d\n",total);
       printf("Average marks : %d\n",average);
}
