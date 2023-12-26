#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Choose an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("%f + %f = %f\n", a,b, result);
            break;
        case 2:
            result = a-b;
            printf("%f - %f = %f\n",a,b, result);
            break;
        case 3:
            result = a*b;
            printf("%f * %f = %f\n",a,b, result);
            break;
        case 4:
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = a/b;
                printf("%f / %f = %f\n", a,b, result);
            }
            break;
        case 5:
            result = pow(a, b);
            printf("%f ^ %f = %f\n", a,b, result);
            break;
        default:
            printf(" Invalid choice\n");
            break;
    }

    return 0;
}
