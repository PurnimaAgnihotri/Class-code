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
void getCofactor(int matrix[3][3],int temp[3][3],int p,int q,int n){
    int i=0,j=0;
    for(int row=0; row<n; row++){
        for(int col=0; col<n; col++){
            if(row != p && col != q){
                temp[i][j++]= matrix[row][col];
                if(j==n-1){
                    j=0;
                    i++;
                }
            }
        }
    }
}
int determinant(int matrix[3][3], int n){
    int det=0;
    if(n==1){
        return matrix[0][0];
    }
    int temp[3][3];
    int sign=1;
    for(int f=0; f<n; f++){
        getCofactor(matrix,temp,0,f,n);
        det+= sign*matrix[0][f]*determinant(temp,n-1);
        sign = -sign;
    }
    return det;
} 
  void adjoint(int matrix[3][3],int adj[3][3]){
    int sign = 1;
    int temp[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            getCofactor(matrix,temp,i,j,3);
            sign= ((i+j)%2==0)?1: -1;
            adj[i][j]=sign*determinant(temp,2);
        }
    }
  }
  int main(){
    int matrix[3][3]={
        {3,5,6},
        {4,2,1},
        {9,8,7}
    };
    int adj[3][3];

    printf("Original Matrix:\n");
    printMatrix(matrix);

    adjoint(matrix,adj);

    printf("Adjoint Matrix:\n");
    printMatrix(adj);

    return 0;
  }