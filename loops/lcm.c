// Find out LCM of two numbers

#include <stdio.h>

void main()
{
 int num1, num2, i;


       printf("Enter a two numbers :");
       scanf("%d%d",&num1, &num2);

       i = num1 > num2 ? num1 : num2;

       while (i % num1 != 0 || i % num2 != 0)
           i ++;

       printf("LCM = %d", i);




}
