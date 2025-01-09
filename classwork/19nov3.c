//size check

#include<stdio.h>
#include<string.h>
struct ss
{
    int a; //4
    float f; //4
    double b;
    char ch[10];
};

void main(){
    struct ss s1;
    printf("%d",sizeof(s1));
}

//aavi rite union mate check kri levu