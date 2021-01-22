// Takes source and target files on command line
// Convert source file contents to uppercase and writes it to target file

#include <stdio.h>

void main(int argc, char * argv[]) // Command line arguments
{
  FILE * sfp, *tfp;
  char line[100], *p;

     if(argc < 3)
     {
         printf("Usage: convertupper sourcefile targetfile");
         exit(3);
     }

     sfp = fopen(argv[1],"rt");
     if(sfp == NULL)
     {
         printf("Sorry! Could not open %s file!", argv[1]);
         exit(1);
     }

     tfp = fopen(argv[2],"wt");
     if(tfp == NULL)
     {
         printf("Sorry! Could not create %s file!", argv[2]);
         exit(2);
     }

     while(1)
     {
         p = fgets(line,100,sfp);
         if(p == NULL)  // EOF
             break;
         fprintf(tfp,"%s",strupr(line));
     }

     fclose(sfp);
     fclose(tfp);
}
