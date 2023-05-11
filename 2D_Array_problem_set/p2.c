// Sum of a matrix
#include<stdio.h>
int main(){
    int row, col;
    scanf("%d %d",&row, &col);
    int a[row][col], b[row][col], c[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[row][col]);
        }
    } 

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&b[row][col]);
        }
    } 

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    } 

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    } 
return 0;
}

// gcc p2.c -o p2
// ./p2