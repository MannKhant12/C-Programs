#include <stdio.h>
void main()
{
    int n=1,t;

    printf("Enter the last digit");
    scanf("%d",&t);

    do{
        printf("%d",n);
        n++;
    }while(n<=t);
}