#include <stdio.h>
void main()
{
    int a;
    printf("number=> ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("number is even");
    }

    else
    {
        printf("number is odd");
    }
}