#include <stdio.h>
int main()
{
    int n, i, pos = 0, neg = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int posneg[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &posneg[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (posneg[i] > 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    return 0;
}