#include <stdio.h>

void main()
{
  char name[30];
  int i;

     printf("Enter name :");
     gets(name);

     printf("Name = %s\n",name);

     for(i=0; name[i] != '\0' ; i ++)
        printf("%c\n", name[i]);

}
