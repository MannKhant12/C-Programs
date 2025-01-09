#include <stdio.h>
void main(){
    int a,*i;
    float b,*f;
    double c,*d;
    char e,*ch;

    printf("Enter values of integer,float,double,character => ");
    scanf("%d %f %lf %c",&a,&b,&c,&e);

    i=&a;
    f=&b;
    d=&c;
    ch=&e;

    printf("%d and its adress is %d\n%f and its adress is %d\n%lf and its adress is %d\n%c and its adress is %d\n",*i,i,*f,f,*d,d,*ch,ch);
}