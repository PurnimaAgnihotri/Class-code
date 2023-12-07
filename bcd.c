#include<stdio.h>
int main() {
    int x,y,z;
    printf("x is divided by y\n");
    printf(" enter values of x and y\n");
    scanf("%d%d",&x,&y);
    z=x%y;

    switch(z)
    {
        case 0:
        printf("number id divisible\n");
        break;
        case 1:
        printf("number is not divisible\n");
        break;
        case 2:
        printf("number is not divisible\n");
        break;
        case 3:
        printf("number is not divisible\n");
        break;
        case 4:
        printf("number is not divisible\n");
        break;
        case 5:
        printf("number is not divisible\n");
        break;
        case 6:
        printf("number is not divisible\n");
        break;  
        case 7:
        printf("number is not divisible\n");
        break;
        case 8:
        printf("number is not divisible\n");
        break;
    }
    return 0;
}