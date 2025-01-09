#include <stdio.h>
void main()
{
    float bs,gs,hra,da;
     printf("enter your basic salary");
     scanf("%f",&bs);

     if(bs>=30000)
     {
       hra = bs*0.30;
        da = bs*0.95;
        gs = bs+hra+da;
    
         printf("the gs = %f",gs); 
     }

     else if(bs>=20000)
     {
        hra = bs*0.25;
        da = bs*0.90;
        gs = bs+hra+da;
    
         printf("the gs = %f",gs);
     }

    else if(bs>=10000)
     {
        hra = bs*0.20;
        da = bs*0.80;
        gs = bs+hra+da;
    
         printf("the gs = %f",gs);
     }
}