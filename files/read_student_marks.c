#include <stdio.h>

void main()
{
   int marks, count,sno;
   FILE * fp;

      fp = fopen("marks.dat","rb");

      while(1)
      {
         printf("Enter student number [0 to stop] :");
         scanf("%d",&sno);
         if (sno == 0)
            break;
         fseek(fp,(sno-1) * sizeof(int),SEEK_SET); // Random Access
         count = fread(&marks,sizeof(int),1,fp);
         printf("%d\n",marks);
      }

      fclose(fp);

}
