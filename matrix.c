#include<stdio.h>
void printMatrix(int matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",matrix[i][j]);
        } 
        printf("\n");
    } 
    printf("\n");
} 
int main(){
    int matrix1[3][3]={
        {3,5,6},
        {4,2,1},
        {9,8,7}
    };

    int matrix2[3][3]={
        {1,4,5},
        {3,2,8},
        {7,8,4}
    };
    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("Matrix 2:\n");
    printMatrix(matrix2);

    return 0;
}