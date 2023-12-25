#include <stdio.h>


int diagonal_sum(int x, int matrix[][x]) {
  int i, sum = 0;
 
  for (i = 0; i < x; i++) {
    sum =sum+ matrix[i][i];
  }
 
  return sum;
}

int main() {
  int x, i, j;
  
  printf("Enter the size of the matrix: ");
  scanf("%d", &x);
  
  int matrix[x][x];
 
  printf("Enter the elements of the matrix:\n");
  for (i = 0; i < x; i++) {
    for (j = 0; j < x; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
  
  printf("The sum of diagonal elements is %d\n", diagonal_sum(x, matrix));
  return 0;
}

   