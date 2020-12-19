// Swap two variables

#include<stdio.h>

void main()
{
   int a,b, temp;

   printf("Enter two numbers :");
   scanf("%d%d",&a,&b);

   // Swap
   temp = a;
   a = b;
   b = temp;

   printf("a = %d, b = %d",a,b);
}
