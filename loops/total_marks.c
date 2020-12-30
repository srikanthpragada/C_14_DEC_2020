// Accept a marks from users until -1 is given and display total

#include <stdio.h>

void main()
{
  int marks, total = 0;

     while(1)
     {
      printf("Enter marks [-1 to stop]:");
      scanf("%d",&marks);

      if(marks == -1)
        break;

      total += marks;
     }

     printf("Total = %d", total);

}
