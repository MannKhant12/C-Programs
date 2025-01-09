#include <stdio.h>
void maxmin(int,int);
void main(){
    int a,b;
    printf("Enter 2 numbers => ");
    scanf("%d %d",&a,&b);
    maxmin(a,b);
}
void maxmin(int a,int b){
   int max,min;
    if(a>b){
        max=a;
        min=b;

        printf("Max=%d",max);
        printf("Min=%d",min);
    }
    else{
        max=b;
        min=a;

        printf("Max=%d",max);
        printf("Min=%d",min);
 }
}