#include <stdio.h>
void main()
{
    int n,i=1,c=0;

    printf("enter the number => ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n%i==0)
        {
            c=c+1;
        }
        i++;
    }
    (c==2)?(printf("PRIME")):(printf("NOT PRIME"));
}