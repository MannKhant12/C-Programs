#include <stdio.h>
void main()
{
    float principal,roi,timeperiod,intrest;

    printf("enter value of principal   =>  \n"
           "enter value of roi         =>  \n"
           "enter value of time period =>  \n");

    scanf("%f %f %f",&principal,&roi,&timeperiod);

    intrest=(principal*roi*timeperiod)/100;

    printf("intrest = %f",intrest);
}
