#include <stdio.h>
void main(){
    char str[100],i;

    printf("Enter the string : ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){}
    printf("the size of the string is => %d",i);
    printf("\n%s",str);
}