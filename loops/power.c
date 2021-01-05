//Accept base and power and raise base to power

#include<stdio.h>

void main()
{
  int base,power,i,result = 1;

    printf("Enter base and power : ");
    scanf("%d%d", &base,&power);

    for(i=1; i <= power ;i ++)
         result = result * base;

    printf("%d raise to %d = %d",base,power,result);

}
