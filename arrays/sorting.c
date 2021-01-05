// Sort array with Selection sort
#include <stdio.h>
void main()
{
 int arr[5];
 int i,j,k,temp;

  srand(time(0)); // initialize random seed
  printf("Original Array : ");
  for (i = 0; i < 5; i++)
  {
    arr[i]= rand() % 50;
    printf("%5d", arr[i]);
  }

  // Take all elements except last one
  for(i = 0; i < 4; i++)
  {
    for (j = i + 1; j < 5; j++ )
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    } // for

    printf("\nAfter round %d : ",i+1);
    for (k = 0; k < 5; k++)
      printf("%5d", arr[k]);
  } // outer
}
