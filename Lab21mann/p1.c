#include <stdio.h>
struct Emp{
    char name[100];
    int age;
};
void main(){
    struct Emp e1;

    printf("ENTER NAME OF EMPLOYEE => ");
    scanf(" %s",e1.name);
    printf("ENTER THE AGE OF EMPLOYEE => ");
    scanf("%d",&e1.age);
}
