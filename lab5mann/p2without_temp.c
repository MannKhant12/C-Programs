#include <stdio.h>
void main()
{
    int a,b;

    printf("enter value of a & b");
    scanf("%d %d",&a,&b);

    a=b-a;
    b=b-a;
    a=b+a;

    printf("after swaping \n a=> %d  \n b=> %d",a,b);
}