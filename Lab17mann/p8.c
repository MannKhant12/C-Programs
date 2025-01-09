#include <stdio.h>
void main(){
    int row,col,i,j;
    printf("enter the rows and columns => ");
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],*p[row],*q[row];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the element for place (%d,%d)",i+1,j+1);
            scanf("%d",&a[i][j]);
        
        }
        p[i]=(a+i);
    }
    printf("now time for 2nd matrix");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("enter the element for place (%d,%d)",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
        q[i]=(b+i);
    }
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",(*(p[i]+j))+(*(q[i]+j)));
        }
    }
    
}