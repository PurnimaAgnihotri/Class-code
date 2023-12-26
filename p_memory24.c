#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, i;
  int *array;

  
  printf("Enter size of the array: ");
  scanf("%d", &x);

  
  array = (int *)malloc(x * sizeof(int));


  if (array == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }

  
  printf("Enter the elements of an array:\n");
  for (i = 0; i < x; i++) {
    scanf("%d", &array[i]);
  }

  printf("The elements of the array are:\n");
  for (i = 0; i < x; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  
  free(array);

  return 0;
}
