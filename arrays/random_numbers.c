// Create an array and initialize it with random numbers
#include <stdio.h>

void main()
{
 int arr[10],i;

     srand(time(0)); // initialize random seed
     for(i=0; i < 10; i ++)
     {
        arr[i] = rand() % 100;
        printf("%d\n", arr[i]);
     }

}
