// Accept a number and display whether it is perfect number

#include <stdio.h>

void main()
{
  int i,num, total = 1;

      printf("Enter a number:");
      scanf("%d",&num);

      for(i=2; i <= num/2; i ++)
      {
          if (num % i == 0)
             total += i;
      }

      if (total == num)
         printf("Perfect Number!");
      else
         printf("Not a Perfect Number!");

}
