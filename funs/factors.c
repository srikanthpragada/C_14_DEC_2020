
#include <stdio.h>
void factors(int num)
{
 int i;

   for(i=2;i <= num/2; i ++) {
     if(num % i == 0)
        printf("%5d",i);
   }
   printf("\n");
}

void main()
{
 int n;

    scanf("%d",&n);
    factors(n);
}
