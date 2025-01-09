#include<stdio.h>
void main()
{
    int n,ans,i;

    printf("enter the number=>");
    scanf("%d",&n);

    for(i=1;i<=10;i++){

        ans=n*i;
        printf("%d * %d = %d \n",n,i,ans);
    }
} 