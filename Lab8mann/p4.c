#include <stdio.h>
void main()
{
    int n,i=1,sum=0;

    printf("Enter the terminated number  ");
    scanf("%d",&n);

    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}