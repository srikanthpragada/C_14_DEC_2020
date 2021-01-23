#include <stdio.h>

void main()
{
   int marks, count;
   FILE * fp;

      fp = fopen("marks.dat","rb");

      while(1)
      {
         count = fread(&marks,sizeof(int),1,fp);
         if (count == 0)  // EOF
             break;
         printf("%d\n",marks);
      }

      fclose(fp);

}
