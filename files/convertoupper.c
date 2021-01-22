// Takes source and target files on command line
// Convert source file contents to uppercase and writes it to target file

#include <stdio.h>

void main(int argc, char * argv[]) // Command line arguments
{
  FILE * sfp, *tfp;
  char line[100], *p;

     sfp = fopen(argv[1],"rt");
     tfp = fopen(argv[2],"wt");

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
