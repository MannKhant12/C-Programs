// q1 c

#include <stdio.h>
void main()
{
    int f, c;
    printf("Enter the temp in fahrenheit => ");
    scanf("%d", &f);

    c = ((f - 32) * 5) / 9;

    printf("temp celsius => %d", c);
}