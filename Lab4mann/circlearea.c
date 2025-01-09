#include <stdio.h>
void main()
{
    printf("THE CIRCLE AREA CALCULATOR\n\n\n");

    float pie,r,area;
    pie=3.14;

    printf("enter the value of radius r   =>  ");
    scanf("%f",&r);

    area=pie*r*r;

    printf("the area = %f",area);
}