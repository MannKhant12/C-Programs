#include <stdio.h>
void main()
{
    int n, i, flag = 0;
    char a[100], r;
    printf("enter the string");
    gets(a);

    printf("enter the character which you want to find ");
    scanf("%c",&r);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == r)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Character is found");
    }
    else
    {
        printf("Character not found");
    }
}