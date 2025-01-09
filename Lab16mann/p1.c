#include <stdio.h>
void main(){
    int row,col,i,j;
    printf("Enter the rows : ");
    scanf("%d",&row);
    printf("Enter the cols : ");
    scanf("%d",&col);

    int array[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter the element for position (%d,%d) => ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
}