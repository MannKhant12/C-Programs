#include <stdio.h>
struct Car{
    char model[100];
    int launchyear;
};
union complex{
    int real;
    int img;
};

void main(){
    struct Car c;
    union complex com;

    scanf("%s",c.model);
    scanf("%d",&c.launchyear);
    scanf("%d",&com.real);
   
   printf("%d %d",sizeof(c),sizeof(com));
   printf("\n%d",com.img);
}