// Take price and display net price
#include <stdio.h>

void main ()
{
  int price;

  printf("Enter price :");
  scanf("%d",&price);

  if(price > 1000)
     price = price * 0.80;   // 20% discount
  else
     price = price * 0.90;   // 10% discount

  printf("Net Price : %d", price);
}
