
void reverse(int num)
{
 int digit;
   while(num > 0)
   {
      digit = num % 10;
      printf("%d", digit);
      num /= 10;
   }
}

void main()
{
   reverse(1234);
}
