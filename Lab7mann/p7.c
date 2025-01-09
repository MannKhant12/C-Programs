#include <stdio.h>
void main()
{
    char x;
    printf("enter your choice");
    scanf("%c",&x);

    ((x>='a' && x<='z') || (x>='A' && x<='Z'))? ( printf("YOUR CHOICE IS ALPHABAT")) : ( printf("YOUR CHOICE NOT ALPHABAT"));
}