#include<stdio.h>
void main ()
{
    int pow,base,ans=1,i;

    printf("enter the base=> ");
    scanf("%d",&base);

    printf("enter the power =>");
    scanf("%d",&pow);

    for(i=1;i<=pow;i++){
        ans=ans*base;
    }
    printf("%d",ans);
}