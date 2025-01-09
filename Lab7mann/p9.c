#include <stdio.h>
void main()
{
    int n,y;

    printf("ENTER ANY NUMBER OF MONTH & YEAR");
    scanf("%d",&n,&y);

    switch (n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("DAYS = 31");
        break;

    case 2: 
                (y%4==0)?(printf("THIS IS LEAP YEAR.\nSO,DAYS = 29")):(printf("THIS IS NOT LEAP YEAR.\nSO,DAYS = 28\n"));
        break;
        
    case 4:
    case 6:
    case 9:
    case 11: printf("DAYS = 30");
     break;
    }
}