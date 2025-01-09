#include <stdio.h>
void main()
{
    int n,i=1,dig,c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;

    printf("Enter the number => ");
    scanf("%d",&n);

    for(;n!=0;){
        dig=n%10;

        switch(dig){
            case 0: 
                    f0=++c0;
                    break;
            case 1: 
                    f1=++c1;
                    break;
            case 2: 
                    f2=++c2;
                    break;
            case 3: 
                    f3=++c3;
                    break;
            case 4:
                    f4=++c4;
                    break;
            case 5: 
                    f5=++c5;
                    break;
            case 6: 
                    f6=++c6;
                    break;
            case 7: 
                    f7=++c7;
                    break;
            case 8: 
                    f8=++c8;
                    break;
            case 9: 
                    f9=++c9;
                    break;        
        }
        n=n/10;
    }
    printf("frequency of 0 => %d \n frequency of 1 => %d \n frequency of 2 => %d \n frequency of 3 => %d \n frequency of 4 => %d \n frequency of 5 => %d \n frequency of 6 => %d \n frequency of 7 => %d \n frequency of 8 => %d \n frequency of 9 => %d \n",f0,f1,f2,f3,f4,f5,f6,f7,f8,f9);
}