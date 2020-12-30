// Find out smallest of 5 numbers

#include <stdio.h>

void main()
{
 int num, i, smallest = 2147483647;


      for(i = 1; i <= 5;  i ++)
      {
         printf("Enter a number :");
         scanf("%d",&num);
         if (num < smallest)
             smallest = num;
      }

      printf("Smallest  = %d", smallest);

}
