#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("enter the element : ");
        scanf("%d", &arr[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}