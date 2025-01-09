#include <stdio.h>
struct book
{
    char tit[30];
    char aut[30];
    char pub[30];
    float pri;
};
void main()
{
    struct book b1;
    struct book b2;
    struct book b3;
    printf("Enter details for book 1");
    printf("\nEnter title => ");
    scanf("%s", b1.tit);
    printf("\nEnter Author name => ");
    scanf("%s", b1.aut);
    printf("\nEnter publication name => ");
    scanf("%s", b1.pub);
    printf("\nEnter price => ");
    scanf("%f",&b1.pri);
    printf("\vEnter details for book 2");
    printf("\nEnter title => ");
    scanf("%s", b2.tit);
    printf("\nEnter Author name => ");
    scanf("%s", b2.aut);
    printf("\nEnter publication name => ");
    scanf("%s", b2.pub);
    printf("\nEnter price => ");
    scanf("%f",&b2.pri);
    printf("\vEnter details for book 3");
    printf("\nEnter title => ");
    scanf("%s", b3.tit);
    printf("\nEnter Author name => ");
    scanf("%s", b3.aut);
    printf("\nEnter publication name => ");
    scanf("%s", b3.pub);
    printf("\nEnter price => ");
    scanf("%f", &b3.pri);
    printf("book list ");
    printf("\vno.\ttitle\tauthor\tpublication\tprize");
    printf("\v1  \t%s\t%s\t%s\t%f", b1.tit, b1.aut, b1.pub, b1.pri);
    printf("\n2  \t%s\t%s\t%s\t%f", b2.tit, b2.aut, b2.pub, b2.pri);
    printf("\v3  \t%s\t%s\t%s\t%f", b3.tit, b3.aut, b3.pub, b3.pri);
}