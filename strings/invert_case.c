// Invert a string
#include <stdio.h>

void main()
{
  char st[] = "AbC xyz 123";
  int i;


     for(i=0; st[i] != '\0' ; i ++)
     {
          if(isupper(st[i]))
              st[i] = tolower(st[i]);
          else
             if(islower(st[i]))
                 st[i] = toupper(st[i]);
     }

     puts(st);
}
