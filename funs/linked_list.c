// Build a linked list to store marks from marks.txt

#include <stdio.h>

struct node {
  int marks;
  struct node * next;
};

void main()
{
 FILE * fp;
 char line[20],*p;
 struct node * root = NULL, * current, * prev;


     fp = fopen("marks.txt","rt");

     while(1)
     {
         p = fgets(line,20,fp);
         if(p == NULL)
            break;

         marks = atoi(line); // string to int

     }


}
