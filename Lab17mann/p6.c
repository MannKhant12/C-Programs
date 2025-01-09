#include <stdio.h>
void main(){
    int n,i;
    printf("Enter the size of array => ");
    scanf("%d",&n);

    int a[n],*cp;

    for(i=0;i<n;i++){
        printf("Enter the element %d => ",i+1);
        scanf("%d",&a[i]);     
    }
    cp=a;
    for(i=0;i<n;i++){
        printf("%d ",*(cp+i));
    }
}