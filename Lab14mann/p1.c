#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter the size of the array  : ");
    scanf("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
