// Take a number from user and print sum of digits

#include <stdio.h>

void main()
{
  int num, digit, total = 0;

      printf("Enter a number :");
      scanf("%d",&num);

      while(num != 0)
      {
          digit = num % 10; // take rightmost digit
          total += digit;
          num = num / 10;  // remove rightmost digit
      }

      printf("Sum of digits = %d", total);
}
