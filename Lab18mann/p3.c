#include <stdio.h>
void simint(int,int,int);
void simint(int a,int b,int c){
    int temp;
    temp=(a*b*c)/100;
    printf("Simple interest is => %d",temp);
}
void main(){
    int p,n,t;
    printf("Enter value of p => ");
    scanf("%d",&p);
    printf("Enter value of n => ");
    scanf("%d",&n);
    printf("Enter value of t => ");
    scanf("%d",&t);

    simint(p,n,t);
}