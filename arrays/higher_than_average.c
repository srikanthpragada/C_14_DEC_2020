// Create an array and initialize it with random numbers
// and display numbers that are greater than average

#include <stdio.h>

void main()
{
 int arr[10],i, total = 0, average;

     srand(time(0)); // initialize random seed
     for(i=0; i < 10; i ++)
     {
        arr[i] = rand() % 100;
        printf("%5d", arr[i]);
        total += arr[i];
     }

     average = total / 10;
     printf("\nAverage = %d\n", average);
     for(i=0; i < 10; i ++)
     {
       if(arr[i] > average)
          printf("%5d", arr[i]);
     }

}
