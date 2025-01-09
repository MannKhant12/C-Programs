#include <stdio.h>
void main(){
    char str[100],*p;
    int i,j=0;
    printf("Enter the string => ");
    gets(str);
    p=str;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            *(p+j)=str[i];
            j++;
        }
    }
    *(p+j)='\0';
    puts(p);
}

// mann@khant\0

//mannkhant 