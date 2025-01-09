#include <stdio.h>
void main(){
    int a,*p;
    printf("enter value of A : ");
    scanf("%d",&a);
    p=&a;
    printf("%d",*p);
    printf("\naddress => %d",p);
}