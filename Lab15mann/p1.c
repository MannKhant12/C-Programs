#include <stdio.h>
void main(){
    int n,i;
    printf("Enter the size of array => ");
    scanf("%d",&n);
    int array1[n],array2[n];
    for(i=0;i<n;i++){
        printf("Enter the element %d => ",i+1);
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++){
        array2[i]=array1[i];
        printf("%d ",array2[i]);
    }
}