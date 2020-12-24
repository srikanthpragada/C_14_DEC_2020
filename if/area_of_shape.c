// Take kind of shape and properties of shape and display area
# include <stdio.h>

void main()
{
  int shape, radius, side,length,breadth, area;

      printf("Enter shape (1 - Circle, 2 - Square, 3 - Rectangle) :");
      scanf("%d",&shape);

      if (shape == 1)  // Circle
      {
          printf("Enter radius :");
          scanf("%d",&radius);
          area = 3.14 * radius * radius;
      }
      else
         if(shape == 2)  // Square
         {
           printf("Enter side :");
           scanf("%d",&side);
           area = side * side;
         }
         else  // Rectangle
         {
            printf("Enter length and breadth:");
            scanf("%d%d",&length,&breadth);
            area = length * breadth;
         }

      printf("Area = %d",area);
}
