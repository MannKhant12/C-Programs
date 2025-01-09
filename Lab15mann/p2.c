#include <stdio.h>
void main(){
    int n,i,count=0;
    printf("Enter the size of array => ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the element %d => ",i+1);
        scanf("%d",&array[i]);
        }
    for(i=0;i<n;i++){
        if(array[i]<0){
            count++;
        }}
    printf("the total number of negative elements in array is => %d",count);
        }