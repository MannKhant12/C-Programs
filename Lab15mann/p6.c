#include <stdio.h>
void main(){
    int n,i,j,k=0;
    printf("Enter the size of array => ");
    scanf("%d",&n);
    int array[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter the element %d => ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]==array[j]){
                i++;
            }
            else
            {
                b[k]=array[i];
                k++;
            }
        }
    }
    b[k]=array[i-1];
    for(i=0;i<=k;i++)
    {printf("%d\t",b[i]);}
}