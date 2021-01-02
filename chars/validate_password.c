// Validate Password

#include <stdio.h>

void main()
{
 int i, digit = 0, upper = 0;
 char ch;

     for(i=1; i <= 8; i ++)
     {
       ch = getch();
       putch('*');
       if (isdigit(ch))
          digit = 1;
       else
          if(isupper(ch))
            upper = 1;
     }

     if (upper && digit)
        printf("Valid Password!");
     else
        printf("Invalid Password!");

}
