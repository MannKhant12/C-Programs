#include <stdio.h>
void main()
{
    int a,b,c,x;
    printf("Enter three values");
    scanf("%d %d %d",&a,&b,&c);

    x=(a>b)?(a*c):(b*c);

    printf("answer is => %d",x);

}