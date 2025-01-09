#include <stdio.h>
void main()
{
    char ch;

    printf("enter your character");
    scanf("%c",ch);

    if(ch>='A' && ch<='Z'){
        printf("UPPER");
    }
    else if(ch>='a' && ch<='z'){
        printf("LOWER");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("special character");
    }
}