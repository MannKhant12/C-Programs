#include<stdio.h>
void main()
{
    int n,ans,i=1;

    printf("enter the value of number =>");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("the factorial number is = %d",ans);
    
}