// Display largest of 5 string
#include <stdio.h>

void main()
{
  char st[20], largest[20] = "";
  int i;

      for(i = 1; i <= 5; i ++)
      {
          printf("Enter string :");
          gets(st);

          if (strcmp(st,largest) > 0)
              strcpy(largest,st); // copy st to largest
      }

      printf("Largest = %s",largest);

}
