#include <stdio.h>
int maxo3(float,float,float);
int maxo3(float a,float b,float c){
    (a>b)?((a>c)?(return a):(printf("max = %d",c))):((b>c)?(printf("max = %d",b)):(printf("max = %d",c)));
}