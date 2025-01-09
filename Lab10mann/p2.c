#include <stdio.h>
void main(){
    float n,i=1,sum=0,avg,g;
    printf("how many number you wants to enter => ");
    scanf("%f",&n);

    while(i<=n){
        printf("enter the number => ");
        scanf("%f",&g);

        sum=sum+g;
        i++;
    }
    avg=sum/n;

    printf("FOR GIVEN NUMBERS \n SUM = %f \n AVERAGE = %f",sum,avg);
}
