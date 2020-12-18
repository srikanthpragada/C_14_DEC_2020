#include<stdio.h>
void main()
{
    float cm,mm,in;

    printf("Enter centimerters:");
    scanf("%f",&cm);

    mm=10*cm;
    printf("Millimeters :%f\n",mm);

    in=cm/2.54;
    printf("Inches      :%f",in);
}
