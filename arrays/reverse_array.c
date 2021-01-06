// Create an array of 10 elements fill it and reverse it
#include <stdio.h>

void main()
{
 int arr[10],temp[10],j,i;

     srand(time(0)); // initialize random seed
     for(i=0; i < 10; i ++)
     {
        arr[i] = rand() % 100;
        printf("%5d", arr[i]);
     }

     // reverse it
     for(i=0, j = 9;  i < 10; i ++, j --)
         temp[j] =arr[i];

     printf("\nReversed Array\n");

     // Copy reversed array back to original
     for(i=0;  i < 10; i ++) {
         arr[i] = temp[i];
         printf("%5d", arr[i]);
     }





}
