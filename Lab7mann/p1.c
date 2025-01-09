#include <stdio.h>
void main()
{
    int n;
    printf("The Number of The Day of Week");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("MONDAY");
        break;

    case 2:
        printf("TUESDAY");
        break;

    case 3:
        printf("WEDNESHDAY");
        break;

    case 4:
        printf("THURSDAY");
        break;

    case 5:
        printf("FRIDAY");
        break;

    case 6:
        printf("SATURDAY");
        break;

    case 7:
        printf("SUNDAY");
        break;
    }
}