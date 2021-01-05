// Double dim array
#include <stdio.h>
void main()
{
 int arr[5][5];
 int i,j;

  srand(time(0)); // initialize random seed

  for (i = 0; i < 5; i++)
  {
     for(j = 0; j < 5; j ++)
     {
      arr[i][j]= rand() % 100;
      printf("%5d", arr[i][j]);
     }
     printf("\n");
  }
}
