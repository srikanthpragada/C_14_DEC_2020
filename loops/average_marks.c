// Average marks
#include <stdio.h>

void main()
{
  int marks,avg , total = 0,count = 0;

     while(1)
     {
      printf("Enter marks [-1 to stop]:");
      scanf("%d",&marks);

      if(marks == -1)
         break;

      total += marks;
      count++;
     }

     avg = total / count;
     printf("Total = %d\n", total);
     printf("Average = %d", avg);
}
