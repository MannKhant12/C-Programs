#include <stdio.h>
#include <string.h>
void main()
{
    char a[100], b[100];
    gets(a);
    gets(b);

    printf("string length => ",strlen(a));
    if (strcmp(a,b)==0)
    {
        printf("\nboth strings are same");
    }
    else{
        printf("\nboth strings are different");
    }
    printf("\n=>string reverse \n %s",strrev(a));
    printf("\n=>string lower \n %s",strlwr(a));
    printf("\n=>string Upper \n %s",strupr(a));
    printf("\n=>string copy \n %s",strcpy(a,b));
    printf("\n=>string concatination \n %s",strcat(a,b));
}