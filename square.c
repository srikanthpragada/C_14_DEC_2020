// Program to print square of a number taken from user

#include <stdio.h>

void main()
{
   int number, square;

       printf("Enter a number :");
       scanf("%d",&number);
       square = number * number;
       printf("Square of %d is %d", number, square);
}
