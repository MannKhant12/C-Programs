#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int oe[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &oe[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (oe[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    return 0;
}