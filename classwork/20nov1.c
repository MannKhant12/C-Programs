/*
    ek file chhe , ema number aapela chhe , badha number no sum karvo chhhe
*/
#include <stdio.h>

void main(){
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    if(fptr==NULL){
        printf("File doesn't Exist");
    }
    int temp,sum=0;
    while(fscanf(fptr,"%d",&temp)!=EOF){
        sum=sum+temp;
        printf("%d\n",temp);
    }
    printf("Sum=%d",sum);
    fclose(fptr);
}