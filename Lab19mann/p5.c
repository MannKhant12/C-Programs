#include <stdio.h>
void main()
{
    int n, i, flag = 0;
    char a[100], r,rw;
    printf("enter the string => ");
    gets(a);

    printf("enter the character which you want to replace ");
    scanf("%c",&r);
    printf("replace with => ");
    scanf(" %c",&rw);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == r)
        {
            a[i]=rw;
        }
    }
    puts(a);
}