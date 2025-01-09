//car nu sturct banavo , enu model , eni company , eni prize :-

#include<stdio.h>
#include<string.h>
struct Car{
    char companyName[100];
    char modelName[100];
    float price;
};
void printCarDetails(struct Car b[],int size);
void main(){
    int i;
    struct Car c[5];
    for(i=0;i<5;i++){
        printf("ENTER THE COMPANY NAME => ");
        scanf("%s",c[i].companyName);
        printf("\nENTER MODEL NAME => ");
        scanf("%s",c[i].modelName);
        printf("\nENTER PRICE => ");
        scanf("%f",&c[i].price);
    }
    printCarDetails(c,2);
}
void printCarDetails(struct Car b[],int size){
int i=0;
for(i=0;i<size;i++){
    if(b[i].price>=10000){
        printf("%s\n",b[i].companyName);
        printf("%s\n",b[i].modelName);
    }
}
}