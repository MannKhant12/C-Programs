#include <stdio.h>
void main(){
    int n,s,i,found,k;
    printf("Enter the size of array => ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the element %d => ",i+1);
        scanf("%d",&array[i]);
        }
    printf("search the element => ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(array[i]==s){
            found=1;
            k=i;
        }}
    if(found==1){
        printf("You have searched for %d \n The searched element is at position %d",s,k+1);}
    else{
        printf("element not found");
        }
}