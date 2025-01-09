#include <stdio.h>
void main()
{
    int n,rev=0,r,f;
    printf("enter the number => ");
    scanf("%d",&f);
n=f;
    while(n!=0)
    {   
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(f==rev)
    {
        printf("%d => %d \n the number is palindrome",f,rev);
    }
    else{
        printf("%d => %d \n the number is not palindrome",f,rev);
    }
}