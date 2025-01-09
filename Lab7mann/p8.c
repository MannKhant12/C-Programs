#include <stdio.h>
void main()
{
    int a,b;
    printf("ENTER ANY TWO NUMBERS  => ");
    scanf("%d %d",&a,&b);

    (a^b)?( printf("NUMBER IS NOT EQUAL")):( printf("NUMBER IS EQUAL"));
}