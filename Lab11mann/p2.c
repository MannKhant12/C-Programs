#include<stdio.h>
void main()
{
    int n,i,sum=0;

    printf("enter the terminated digit=>");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum= %d",sum);

}