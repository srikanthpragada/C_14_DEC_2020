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
 int marks, total = 0, count = 0, avg;
 struct node * root = NULL, * current, * prev;


     fp = fopen("marks.txt","rt");

     while(1)
     {
         p = fgets(line,20,fp);
         if(p == NULL)
            break;

         marks = atoi(line); // string to int
         current = (struct node *) malloc(sizeof(struct node));
         current->marks = marks;
         current->next = NULL;
         total += marks;
         count ++;
         if(root == NULL) // first node
            root = current;
         else
            prev->next = current;

         prev = current;
     }

     fclose(fp);

     avg = total / count;
     printf("Average = %d\n",avg);
     // print list
     current = root;
     while(current != NULL)
     {
         if (current->marks >= avg)
             printf("%d\n", current->marks);

         current = current -> next;
     }

}
