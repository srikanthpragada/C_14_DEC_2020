int isprime(int num)
{
 int i;

     for(i = 2; i <= num/2 ; i ++)
     {
       if(num % i == 0)
            return 0;
     }

     return 1;
}

void main()
{
   printf("%d", isprime(343434344));
}
