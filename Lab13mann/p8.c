#include <stdio.h>
void main(){
    int i,j,num=0;
    char ch='A';

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                printf("%c ",ch);
                ch++;}
            else{
                printf("%d ",num);
                num++;
            }
            }
            printf("\n");
        }
    }