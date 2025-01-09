#include <stdio.h>
void main(){
    int n=5,i,count=0;
    int arrh[n],arrw[n];
    for(i=0;i<n;i++){
        printf("Enter the height of person %d=> ",i+1);
        scanf("%d",&arrh[i]);
        }
    for(i=0;i<n;i++){
        printf("Enter the weight of person %d=> ",i+1);
        scanf("%d",&arrw[i]);
        }
    for(i=0;i<n;i++){
        if(arrh[i]>170 && arrw[i]<50){
        count=count+1;
    }}
    printf("The number of the person having height greater than 170cm & weight less than 50kg is => %d",count);
    
}