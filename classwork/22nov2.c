//number no second last digit even k odd

#include<stdio.h>
void main(){
    int n;
    printf("ENter number => ");
    scanf("%d",&n);

    n=n/10;
    n=n%10;

    if(n%2==0){
        printf("second last Number is Even");
    }
    else{
        printf("second last number is odd");
    }
}
