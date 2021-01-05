// Double dim array
#include <stdio.h>
void main()
{
 int arr[5][5];
 int i,j, total;

  srand(time(0)); // initialize random seed

  for (i = 0; i < 5; i++)
  {
     total = 0;
     for(j = 0; j < 5; j ++)
     {
      arr[i][j]= rand() % 100;
      total += arr[i][j];
      printf("%5d", arr[i][j]);
     }

     printf("%5d\n",total);
  }
}
