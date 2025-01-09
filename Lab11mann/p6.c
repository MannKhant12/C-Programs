#include<stdio.h>
void main()
{
    int i=1,n,x=0,y=1,z;

    printf("enter the terms =>");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        z=x+y;
        printf("%d  ",y);
        x=y;
        y=z;
        
    }
}