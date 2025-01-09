#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c;
    float d,root1,root2;
    printf(" enter a,b,c (for a*x*x + b*x + c");
    scanf("%d %d %d",&a,&b,&c);

    d=sqrt((b*b)-(4*a*c));

    root1=(-b+d)/(2*a);
    root2=(-b-d)/(2*a);

    printf("the roots of the given equation is\nroot 1 => %f \nroot 2 => %f",root1,root2);

}