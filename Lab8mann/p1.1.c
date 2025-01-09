#include <stdio.h>
void main()
{
    int n=1,t;

    printf("ENTER LAST DIGIT");
    scanf("%d",t);

    while(n<=t)
    {
        printf("%d",&n);
        n++;
    }
}