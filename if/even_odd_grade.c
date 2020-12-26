#include<stdio.h>
void main()
{
    int m1,m2;

    printf("Enter two numbers :");
    scanf("%d%d",&m1,&m2);

    if(m1 % 2 == 0)
      if(m2 % 2 == 0)
          printf("Grade A");
      else
          printf("Grade C");
    else
        if (m2 % 2 == 0)
            printf("Grade D");
        else
            printf("Grade B");

    // Another way using logical operators
    if (m1 % 2 == 0 && m2 % 2 == 0)
         printf("A");
    else
        if (m1 % 2 == 0)
           printf("C");
        else
            if (m2 % 2 == 0)
               printf("D");
            else
               printf("B");
}
