
// Print number in reverse using recursion
void reverse(int num)
{
  if(num > 0) {
   printf("%d", num % 10);
   reverse(num / 10); // recursion
  }

}

void main()
{
   reverse(125);
}
