#include <stdio.h>

void zero(int * p)
{
  *p = 0;
}

void main()
{
  int n = 100;

     zero(&n);  // pass by reference
     printf("%d",n);
}
