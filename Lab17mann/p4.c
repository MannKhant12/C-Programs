#include <stdio.h>
void main(){
    int a,b,*temp,*p,*q;

    printf("enter A and B : ");
    scanf("%d %d",&a,&b);

    temp=&a;
    p=&b;
    q=&a;

    printf("a=%d b=%d",*p,*q);
}