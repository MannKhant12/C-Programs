#include <stdio.h>
void main()
{
    float a,b,c;
    printf("Enter values of Three sides");
    scanf("%f %f %f",&a,&b,&c);

    if(a==b)
    {
        if(a==c)
        {
            printf("triangle is equilateral");
        }

        else
        {
            printf("triangle is Isosceles");
        }
    }
    else
    {
        if(b==c)
        {
            printf("Triangle is Isosceles");
        }

        else
        {
            printf("Triangle is scalane");
        }
    }

    if( (a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b) )
    {
        printf("\nTriangle is Right angle Triangle");
    }
    else
    {
        printf("\nTriangle is not Right angle Triangle");
    }
}