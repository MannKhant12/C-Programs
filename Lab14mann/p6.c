#include <stdio.h>
void main(){
    int n,i;
    printf("Enter the size of Array => ");
    scanf("%d",&n);
    int arr[n],avg,sum=0,count=0;
    for(i=0;i<n;i++){
        printf("enter the element %d => ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        if(arr[i]>avg){
            count=count+1;
        }
    }
    printf("number of elment higher than the average of the array => %d",count);
}