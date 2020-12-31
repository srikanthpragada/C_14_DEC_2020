// while vs. do while
#include <stdio.h>

void main()
{
   while(0)
   {
      printf("In while!");
   }

   do
   {
     printf("In do.. while");
   }
   while(0);

   for( ; 0 ; )
   {
     printf("In for loop");
   }
}
