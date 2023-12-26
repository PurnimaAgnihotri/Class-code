#include <stdio.h>

int main() {
  int a[5] = {1, 2, 3, 4, 5};
  int *p = a;
  int i;

  // Increment pointer
  printf("Increment pointer:\n");
  for (i = 0; i < 5; i++) {
    printf("%d ", *p);
    p++;
  }
  printf("\n");

  // Decrement pointer
  printf("Decrement pointer:\n");
  p--;
  for (i = 0; i < 5; i++) {
    printf("%d ", *p);
    p--;
  }
  printf("\n");

  // Addition of integer to pointer
  printf("Addition of integer to pointer:\n");
  p = a;
  for (i = 0; i < 5; i++) {
    printf("%d ", *p);
    p += 2;
  }
  printf("\n");

  // Subtraction of integer from pointer
  printf("Subtraction of integer from pointer:\n");
  p = a + 4;
  for (i = 0; i < 5; i++) {
    printf("%d ", *p);
    p -= 2;
  }
  printf("\n");

  // Subtracting two pointers of the same type
  printf("Subtracting two pointers of the same type:\n");
  int *q = a + 2;
  printf("%d\n", q - p);

  return 0;
}
