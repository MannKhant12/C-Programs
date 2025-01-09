#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], max,min,sum=0;
    float avg;

    for (i = 0; i < n; i++)
    {
        printf("enter the element : ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            max = arr[i];
        }
        for (i = 1; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }
    printf("The maximum element in the array is %d", max);

for (i=0;i<n;i++)
    {
        if (i==0)
        {
            min=arr[i];
        }
        for (i=1;i<n;i++)
        {
            if( arr[i] < min){
                min=arr[i];
            }
        }
    }
    printf("\n The minimum element in the array is %d",min);

    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("\n The sum of the elements of array is %d",sum);

    //for average

    avg=sum/n;
    printf("\n The average of the elements of the array is %f",avg);
}