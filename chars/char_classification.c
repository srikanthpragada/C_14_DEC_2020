# include <stdio.h>

void main()
{
  char ch;

       printf("Enter a char :");
       ch = getch();

       if(ch >= 65 && ch <= 90)
           printf("Uppercase!");
       else
           printf("Lowercase!");

}
