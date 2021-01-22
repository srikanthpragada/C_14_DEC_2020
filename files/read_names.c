// Read names from names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[20], *p;

     fp = fopen("names.txt","rt");

     while(1)
     {
         p = fgets(name,20,fp);
         if(p == NULL)  // EOF
             break;
         printf("%s",name);
     }

     fclose(fp);
}
