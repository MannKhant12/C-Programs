#include <stdio.h>
void main()
{
    int a,b,c;

    printf("Enter the value of a,b,c :      ");
    scanf("%d %d %d",&a,&b,&c);

    if( (a>b && b>c) || (c>b  && b>a))
    {
        printf("%d is second largest number",b);
     }

    else if (( b>a && a>c) || ())
     {
        printf("%d is second largest number",a);
     }

    else if ( a>c && c>b)
    {
        printf("%d is second largest number",c);
    }
    else

    {


    }
}