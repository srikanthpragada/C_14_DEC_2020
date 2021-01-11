int largest(int a[10])
{
 int i, largest;

     largest = a[0];
     for(i = 1; i < 10 ; i ++)
     {
       if(a[i] > largest)
          largest = a[i];
     }

     return largest;
}

void main()
{
   int a [10] = {1,2,8,5,6,67,434,54,5,445};

      printf("Largest value = %d", largest(a));
}
