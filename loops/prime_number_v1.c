// Accept a number and display whether it is prime number

#include <stdio.h>

void main()
{
  int i,num, count = 0;

      printf("Enter a number:");
      scanf("%d",&num);

      for(i=2; i <= num/2; i ++)
      {
          if (num % i == 0)
              count ++;
      }

      if (count == 0)
         printf("Prime Number!");
      else
         printf("Not a Prime Number!");

}
