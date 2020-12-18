// Take a number and display cube

#include <stdio.h>

void main ()
{
  int number, cube;


  // Input
  printf("Enter your number :");
  scanf("%d",&number);

  // Process
  cube = number * number * number;

  // Output
  printf("Cube of your %d is %d", number, cube);
}
