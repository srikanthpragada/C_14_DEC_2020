// Accept 5 numbers from user and display total

#include <stdio.h>

void main()
{
  int total = 0, num, i;

      for(i=1; i <= 5; i ++)
      {
          printf("Enter a number :");
          scanf("%d",&num);
          total += num;
      }

      printf("Total = %d", total);
}
