
#include <stdio.h>
void even_numbers(int a[10])
{
 int i;

   for(i=0;i < 10; i ++)
   {
     if( a[i] % 2 == 0)
        printf("%5d",a[i]);
   }
}

void print_upper(char name[30])
{
 int i;

    for(i=0; name[i] != '\0'; i++)
        if (isupper(name[i]))
            putch(name[i]);
}

void main()
{
  int nums [] = {33,11,4,58,79,55,6,78,40,30};

   even_numbers(nums);
   print_upper("How Do You Do");
}
