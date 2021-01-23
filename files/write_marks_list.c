#include <stdio.h>

void main()
{
   int marks[] = {50,60,43,49,88,69,44,88,22,33};
   int i;
   FILE * fp;

      fp = fopen("marks.dat","wb");

      for (i=0; i < 10; i ++)
      {
         fwrite(&marks[i],sizeof(int), 1,fp);
      }

      fclose(fp);

}
