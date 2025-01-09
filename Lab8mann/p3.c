#include <stdio.h>
void main()
{
    int n,i;

    printf("Enter starting number  ");
    scanf("%d",&i);

    printf("Enter terminated number  ");
    scanf("%d",&n);

    i=i+1;

    while(i<n)
    {
        if((i%2)==0)
        {
            printf("%d ",i);
        }
        i++;
    }
}