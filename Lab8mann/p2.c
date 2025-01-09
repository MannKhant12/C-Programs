#include <stdio.h>
void main()
{
    int n,i=1;

    printf("Enter terminate digit");
    scanf("%d",&n);

    do{
        if((i%2)!=0)
        {
            printf("%d ",i);
        }
        i++;
    }while(i<=n);
}