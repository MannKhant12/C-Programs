#include <stdio.h>
void main(){
    int a,b,*p,*q,*sum;

    printf("Enter the values of a and b => ");
    scanf("%d %d",&a,&b);

    p=&a;
    q=&b;
    *sum=*p+*q;

    printf("Answer => %d",*sum);
}