#include <stdio.h>
void add(int,int);
void main(){
    int a,b,sum;
    printf("Enter two numbers =>");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int a,int b){
    int s;
    s=a+b;
    printf("Addition is => %d",s);
}