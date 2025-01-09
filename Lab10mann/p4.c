#include <stdio.h>
void main(){
    int n,ans;

    printf("Enter the number => ");
    scanf("%d",&n);

    while(n!=0){
    ans=n%10;
    printf("%d \n",ans);
    n=n/10;
    }
}