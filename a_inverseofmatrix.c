#include<stdio.h>

void printMatrix(double matrix[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%.2f",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void getCofactor(double matrix[3][3], double temp[3][3],int p,int q, int n){
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
double determinant(double matrix[3][3],int n){
    double det=0;
    if(n==1){
        return matrix[0][0];
    }
    double temp[3][3];
    double sign=1;
    for(int f=0;f<n;f++){
        getCofactor(matrix,temp,0,f,n);
        det += sign*matrix[0][f]*determinant(temp,n-1);
        sign = -sign;
    }
    return det;
}

void adjoint(double matrix[3][3],double adj[3][3]){
    double sign = 1;
    double temp[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            getCofactor(matrix,temp,i,j,3);
            sign=(i+j%2==0)? 1:-1 ;  adj[i][j]=sign*determinant(temp,2);
        }
    }
} 

void transpose(double matrix[3][3], double trans[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            trans[i][j]= matrix[j][i];
        }
    }
} 
void inverse(double matrix[3][3],double inv[3][3]){
    double det= determinant(matrix,3);
    if(det==0){
        printf("Inverse does not exist as the determinant is zero.\n");
        return;
    }
    double adj[3][3];
    adjoint(matrix,adj);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            inv[i][j]=adj[i][j]/det;
        }
    }
}
int main(){
    double matrix[3][3]={
        {1,4,5},
        {3,2,8},
        {7,8,4}
    };
    double inv[3][3];
    printf("Original Matrix:\n");
    printMatrix(matrix);

    inverse(matrix,inv);
    printf("Inverse Matrix:\n");
    printMatrix(inv);

    return 0;
}
