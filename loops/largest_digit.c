// Take a number from user and print largest digit

#include <stdio.h>

void main()
{
  int num, digit, largest = 0;

      printf("Enter a number :");
      scanf("%d",&num);

      while(num != 0)
      {
          digit = num % 10; // take rightmost digit
          if(digit > largest)
             largest = digit;
          num = num / 10;  // remove rightmost digit
      }

      printf("Largest of digits = %d", largest);
}
