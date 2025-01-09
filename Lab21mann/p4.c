//name,percentage,age
#include <stdio.h>
struct student{
    char name[50];
    float per;
    int age;
};
void main(){
    int i;
    struct student st[5];
    for(i=0;i<5;i++){
        printf("Enter Details of Student %d:-",i+1);
        printf("\nName => ");
        scanf("%s",st[i].name);
        printf("\nPercentage => ");
        scanf("%f",&st[i].per);
        printf("\nAge => ");
        scanf("%d",&st[i].age);
    }
    
    for(i=0;i<5;i++){
        printf("\vDETAILS OF STUDENT %d\n",i+1);
        printf("Name => %s",st[i].name);
        printf("\nPercentage => %f",st[i].per);
        printf("\nAge => %d",st[i].age);
    }
}