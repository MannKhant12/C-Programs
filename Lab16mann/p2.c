#include <stdio.h>
void main(){
    int row,col,i,j,cpos=0,cneg=0,czer=0;
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
            if(array[i][j]==0){
                czer++;
            }
            if(array[i][j]>0){
                cpos++;
            }
            if(array[i][j]<0){
                cneg++;
            }
        }
    }
    printf("The number of Zero elements in this array is => %d\nThe number of positive element in this array is => %d\nThe number of negative element in this array is => %d",czer,cpos,cneg);
}