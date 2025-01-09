#include <stdio.h>
void print(int arr[]);
int n;
void main()
{
    int i;
    printf("Enter the size of function => ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d =>", i + 1);
        scanf("%d", &arr[i]);
    }
    void print(arr);
}
void print(int arr[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}