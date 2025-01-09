#include <stdio.h>
void main()
{
    float unit,rs;

    printf("enter the used num of units ");
    scanf("%f",&unit);

    if(unit>250)
    {
        rs=unit*1.50;

        printf("the amount of the electricity bill is %f rupees only",rs);
    }
    else if(unit>150)
    {
        rs=unit*1.20;

        printf("the amount of the electricity bill is %f rupees only",rs);
    }

    else if(unit>50)
    {
        rs=unit*0.75;

        printf("the amount of the electricity bill is %f rupees only",rs);
    }

    else 
    {
        rs=unit*0.50;

        printf("the amount of the electricity bill is %f rupees only",rs);
    }
}