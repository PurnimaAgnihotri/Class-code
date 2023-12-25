
#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a , b ;
    printf("\n enter value of a and b:\n");
    scanf("%d %d",&a,&b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

   
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}




