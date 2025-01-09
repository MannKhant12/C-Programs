// input 2 number & find power using recursion

#include <stdio.h>
int powe(int n,int p);
void main(){
    int n,p, res;
    printf("enter 2 number => ");
    scanf("%d %d",&n,&p);
    res=powe(n,p);
    printf("%d",res);
}
int powe(int n,int p){
    if(p==0){
        return 1;
    }
    if(p==1){
        return n;
    }
    else{
        return n*(powe(n,p-1));
    } 
}