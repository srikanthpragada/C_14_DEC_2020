#include <stdio.h>
#include <conio.h>

int add(int a, int b)
{
  return a + b;
}



void main()
{
   int c,i;

     c = add(10345,42442);
     printf("%d",c);

     for(i = 1; i <= 10; i ++)
        printf("\n%2d - %10d",i, factorial(i));

}

int factorial(int n)
{
  int fact=1,i;

      for(i = 2; i <= n; i ++)
          fact *= i;

      return fact;
}


int iseven(int n)
{
   if (n % 2 == 0)
      return 1;  // true
   else
      return 0;  // false
}
