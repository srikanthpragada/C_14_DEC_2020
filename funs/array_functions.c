#include <stdio.h>
#include <conio.h>

int sum(int a[10])
{
 int total = 0,i;

      for(i = 0; i < 10; i ++)
          total += a[i];

      return total;
}

void main()
{
  int arr[10] = {10,20,44,33,44,5,6,7,55,99};
  int total;

    total = sum(arr);
    printf("%d",total);

}
