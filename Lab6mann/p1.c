#include <stdio.h>
void main()
{
    char choice;

    printf("enter your choice (a=addition, s=subtraction, m=multiplication, d=division)");
    scanf("%c",&choice);

int x,b,c;

        printf("enter any two numbers");
        scanf("%d %d",&x,&b);
   
   
    if(choice=='a')
    {
       c=x+b;
        printf("the sum is == %d",c);
    }


    else if(choice=='s')
    {
        c=x-b;
         printf("the subtraction is == %d",c);
    }

   else if(choice=='m')
    {
        c=x*b;
        printf("the multiplication is == %d",c);
    }

  else if(choice=='d')
    {
        c=x/b;
        printf("the division is == %d",c);
    }
}