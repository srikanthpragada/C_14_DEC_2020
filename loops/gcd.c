//Accept two numbers and find out its HCF/GCD

#include<stdio.h>

void main()
{
  int num1,num2,i;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1,&num2);

    i = num1 < num2 ? num1 : num2;

    while(1)
    {
       if(num1 % i == 0 && num2 % i == 0)
          break;
       i --;
    }

    printf("GCD = %d", i);

}
