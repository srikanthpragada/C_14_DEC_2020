// Validate PIN
#include <stdio.h>

void main()
{
 int i, digits = 0;
 char ch;

     for(i=1; i <= 4; i ++)
     {
       ch = getch();
       putch('*');
       if (isdigit(ch))
          digits ++;
     }

     if (digits == 4)
        printf("Valid PIN!");
     else
        printf("Invalid PIN!");

}
