// Validate PIN
#include <stdio.h>

void main()
{
 int i, valid = 1;
 char ch;

     for(i=1; i <= 4; i ++)
     {
       ch = getch();
       putch('*');
       if (!isdigit(ch))
       {
          valid = 0;
          break;
       }
     }

     if (valid)
        printf("Valid PIN!");
     else
        printf("Invalid PIN!");

}
