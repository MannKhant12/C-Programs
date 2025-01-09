#include <stdio.h>
void main()
{
    int n,even=0,odd=0,i=1;
    while(i<=10){
        printf("Enter the number  ");
        scanf("%d",&n);

    if((n%2)==0)
    {
        even=even+1;
    }
    else
    {
        odd=odd+1;
    }  
    i++;
} 
    printf("Even = %d",even);
    printf("\nOdd = %d",odd);
}