#include <stdio.h>
void main()
{
    int n,i=1,per=0;
    printf("Enter the number => ");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            //i is the factor of n
            per=per+i;
        }
        i++;
    }
    if(per==n)
    {
        printf("The number is perfect");
    }
    else{
        printf("The number is not perfect");
    }
}