#include <stdio.h>

void main()
{
  char st[50];
  int i, upper = 0;

     printf("Enter string :");
     gets(st);

     for(i=0; st[i] != '\0' ; i ++)
     {
        if (isupper(st[i]))
           upper ++;
     }

     printf("No. of uppercase letters = %d", upper);
}
