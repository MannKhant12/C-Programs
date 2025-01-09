#include <stdio.h>
void main()
{
    int a,b,temp;

    printf("enter the value of a");
    scanf("%d",&a);

    printf("enter the value of b");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("after swaping \n a=%d \n b=%d",a,b);
}