# include <stdio.h>

void main()
{
  char ch,i, count = 0;

      for(i=1;  i <= 5; i ++)
      {
       printf("\nEnter a char :");
       ch = getche();

       if(isdigit(ch))
           count ++;
      }

      printf("\nNo. of digits = %d", count);

}
