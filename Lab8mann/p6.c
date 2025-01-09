#include <stdio.h>
#include<math.h>
void main()
{
    float i=1,s;

    while(i<=9)
    {
        s=sqrt(i);
        printf("sqrt of %f => %f  \n",i,s);
        i++;
    }
}