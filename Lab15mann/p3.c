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
        if(array[i]%3==0){
            count++;
        }
    }
    printf("the elements divisible by 3 in the array is => %d",count);}