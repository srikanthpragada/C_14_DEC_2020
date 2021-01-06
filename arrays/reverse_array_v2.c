// Create an array of 10 elements fill it and reverse it
#include <stdio.h>

void main()
{
 int arr[10],j,i,temp;

     srand(time(0)); // initialize random seed
     for(i=0; i < 10; i ++)
     {
        arr[i] = rand() % 100;
        printf("%5d", arr[i]);
     }

     // reverse it by interchanging values
     for(i=0, j = 9;  i < 5; i ++, j --) {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
     }

     printf("\nReversed Array\n");

     // Copy reversed array back to original
     for(i=0;  i < 10; i ++) {
         printf("%5d", arr[i]);
     }

}
