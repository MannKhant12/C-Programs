#include <stdio.h>
void main(){
    int n,sum,fd,ld;
    printf("Enter the number => ");
    scanf("%d",&n);

    if(n<10)
    {
        printf("sum = %d",n);
    }
    else{
    ld=n%10;
    while(n>9)
   { 
    n=n/10;
   }
   fd=n;
   sum=fd+ld;
    printf("sum = %d",sum);
  }
    
}