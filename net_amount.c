// Take price and qty and display net amount

#include <stdio.h>

void main ()
{
  int price, qty, amount, discount, net_amount;


  // Input
  printf("Enter price :");
  scanf("%d",&price);
  printf("Enter qty  :");
  scanf("%d",&qty);

  // Process
  amount = price * qty;
  discount = amount * 20 / 100;   //  amount * 0.20
  net_amount = amount - discount;

  // Output
  printf("Net Amount : %d", net_amount);
}
