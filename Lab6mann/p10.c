#include <stdio.h>
void main()
{
    float r,g,b,white,mr,mg,mb,c,m,y,k;

    printf("Enter the value of RED(r),GREEN(g),BLUE(b) :  \n (0 to 255)");
    scanf("%f %f %f",&r,&g,&b);

    //for color white

    mr=(r)/255;
    mg=(g)/255;
    mb=(b)/255;

    if(mr>mg)
    {
        if(mr>mb)
        { 
            //so the mr is greater
            white=mr;
        }
        else
        {
            //so the mb is greater
            white=mb;
        }
    }
    else
    {
        if(mg>mb)
        {
            //so the mg is greater
            white=mg;
        }
        else
        { 
            //so the mb is greater
            white=mb;
        }
    }
  c=(white - mr)/white;
  printf("CYAN = %f",c);

  m=(white - mg)/white;
  printf("MAGENTA = %f",m);

  y=(white - mb)/white;
  printf("YELLOW = %f",y);

  k=1-white;
  printf("BLACK = %f",k);
}