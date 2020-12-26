// Smallest of 3 numbers
# include <stdio.h>

void main()
{
  int a,b,c, smallest;

      printf("Enter 3 numbers :");
      scanf("%d%d%d",&a,&b,&c);

      smallest = a < b ? a < c ? a : c : b < c ? b : c;
      printf("Smallest = %d", smallest);
}
