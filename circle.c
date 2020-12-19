// Radius and Circumference

#include<stdio.h>

void main()
{
   float radius,area,circumference;

   //input
   printf("Enter the radius : ");
   scanf("%f", &radius);

   //process
   area = radius * radius * 3.14;
   circumference = radius * 3.14 * 2;

   //output
   printf("Circumference = %.2f\n", circumference);
   printf("Area          = %.2f", area);
}
