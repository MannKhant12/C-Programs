//digit sum for entered num using recursion

#include <stdio.h>
int digc(int);
void main(){
    int n,res;
    printf("enter the number => ");
    scanf("%d",&n);
    res=digc(n);
    printf("%d",res);
}
int digc(int n){
    int count;
    if(n==0){
        return 0;
    }
    else{
        return n%10+digc(n/10);
    }
}