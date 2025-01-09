#include <stdio.h>
void main(){
    int a,b;
    printf("Enter value of a and b => ");
    scanf("%d %d",&a,&b);

    int *temp,*p,*q;
    p=&a;
    q=&b;

    temp=&(*p);
    p=&(*q);
    q=&(*temp);
    
    printf("now after swap \n a=> %d \n b=> %d",*p,*q);
}